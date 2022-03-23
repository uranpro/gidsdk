# GIDSDK for iOS v0.1.6

> Минимальная версия iOS 11

## Установка
### Cocoapods

> **Временно не работает**

1. Перейдите в каталог с Xcode-проектом (каталог, в котором находится файл с расширением *.xcodeproj*).
    
2. Создайте *Podfile* для перечисления зависимостей от других библиотек:

`$ pod init`

3. Откройте *Podfile* в текстовом редакторе и добавьте зависимость для своей цели:
```ruby
use_frameworks!
pod 'GIDSDK', :git => 'https://gitlab.zxz.su/mbushuev/gidsdk.pod.git', :tag => '0.1.0'
```

4. Выполните в каталоге проекта команду:
    
`$ pod install`


> **Примечание:** В дальнейшем можно использовать команду pod update для обновления версии библиотеки


После этого в каталоге проекта появится файл с расширением *.xcworkspace*.

Для работы c проектом используйте данный файл. Не используйте файл с расширением *.xcodeproj*.

Чтобы открыть файл проекта, выполните команду:

`$ open *.xcworkspace`

---

### Swift Package Manager

1. Откройте проект
    
2. В меню выберите *File > AddPackages*
    
3.  В появившемся окне найдите строку поиска и укажите адрес репозитория:
    
`https://gitlab.zxz.su/mbushuev/gidsdk.pod.git`

4. Выберите нужную версию, проект и нажмите *AddPackage*

---

### Вручную

Для подключения SDK вручную, выполните следующие действия:

1. Перейдите по ссылке
    
`https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/tree/main/SwiftPM/releases`

2. Выберите нужную версию и перейдите в каталог
    
3. Скачайте содержимое(zip файлы) и распакуйте
    
4. Скопируйте полученные файлы **.xcframework** и вставьте в корень вашего проекта
    
5. Откройте проект и выберите необходимый *target*, перейдите на вкладку *General*
    
6. Найдите *Frameworks, Libraries, and Embedded Content* и нажмите на *+*
    
7. Нажмите *Add other > Add files* и выберите скопированные файлы
    

8. Фреймворки должны добавиться с опцией *Embed & Sign*

## Использование

Для настройки получения токенов выполните следующие действия:

**1. Инициализация**

Инициализируйте SDK в начале приложения. Укажите свой *client_id и client_base_url* (адрес бэкенда вашего приложения)
```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .build()
  
GIDSDK.setup(configuration: configuration)
```

> Если хотите указать специфический адрес сервера ГИД, то вы можете это сделать через переменную *gidBaseURL* при инициализации конфига
```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .setGIDBaseURL(URL(string: "http://auth.gid.ru/")!)
            .build()
```

> Если хотите указать специфический SCOPE, то вы можете это сделать через переменную *scope* при инициализации конфига
```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .setGIDBaseURL(URL(string: "http://auth.gid.ru/")!)
            .setScope([.profile, .openid])
            .build()
            
// default scope = [.profile, .openid, .sdkOTP, .anchorValidate, .offlineAccess]
```

> Если хотите указать специфические пути для API, то вы можете это сделать через переменную *customPaths* при инициализации конфига. Переопределять все необязательно, достаточно указать нужные.
```swift
let paths: [GIDApiPath: String] = [
    .auth: "path/to/auth",
    .getOTP: "path/to/send_otp"
]
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .setGIDBaseURL(URL(string: "http://auth.gid.ru/")!)
            .setCustomPaths(paths)
            .build()

// GIDApiPath.defaultPaths

case .auth:
    return "api/v0.2/backend/auth"
case .refreshToken:
    return "oauth2/token"
case .register:
    return "api/v0.2/sdk/accounts/register/"
case .getOTP:
    return "api/v0.2/sdk/actions/send_otp_password/"
case .chackPhone:
    return "api/actions/check_phone"
case .a2aAuth:
    return "oauth2/auth/a2a"
case .a2aGetTokens:
    return "api/v0.2/backend/oauth/token"
```

**2. Аутентификация light**

**Генерация *codeVerifier и codeChallenge***

Перед запросом на отправку OTP, необходимо сгенерировать *codeVerifier и codeChallenge*.

```swift
do {  
  let codeVerifier = try GIDPKCE.createVerifier()  
  let codeChallenge = try GIDPKCE.challenge(for: codeVerifier)  
} catch error {
  print(error)  
}
```

**Запрос отправки OTP**

Запрос на отправку OTP включает запрос проверки телефона и регистрации пользователя в случае, если он не найден по номеру телефона.

```swift
GIDSDK.shared.getOTP(codeChallenge: codeChallenge, phone: phone) { result in  
  switch result {  
  case .success(let data):  
    self.otpSID = data.otpSID // сохраняем otpSID, далее он понадобится для получения токенов  
    self.waitSeconds = data.waitSeconds // таймер повторной отправки кода в секундах  
  case .failure(let error):  
    print(error)  
  }  
}
```

> **Внимание:** Следует дать возможность пользователю повторить запрос, если SMS не приходит в течение заданного времени. Время, через которое можно сделать повторный запрос, можно получить из параметра waitSeconds

**Запрос аутентификации пользователя**

Получение токенов. Необходимо использовать codeVerifier, который создавали в начале, otpSID, OTP-код из SMS и scope.

```swift
GIDSDK.shared.auth(otpSID: otpSID, otp: code, phone: phone, codeVerifier: codeVerifier) { result in  
  switch result {  
  case .success(let data):  
    self.jwtToken = data.jwtToken  
    self.oauthToken = data.accessToken  
  case .failure(let error):  
    print(error)  
  }  
}
```

## Change log

### 0.1.6

- исправлена ошибка с автокомплитом модели GIDApiError
- добавлена переменная env в конфиг, от нее зависят какими ключами подписываются реквесты в гид 
- при отсутствии переменной status_code в ошибке от сервера, подставляется из response
- если формат ошибки отличается от ожидаемого, то в логах отобразится сообщение с ее содержанием. а запрос упадет с ошибкой .unknownError(e)
