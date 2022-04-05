# GIDSDK for iOS v0.1.9

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
case .checkPhone:
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

**Проверка телефона, зарегистрирован ли юзер**

Потом необходимо проверить зарегистрирован ли номер телефона в системе

```swift
GIDSDK.shared.checkPhone(phone: phone) { result in  
  switch result {  
  case .success(let data):
    if data.success {
      self.sendOTP(phone)
    } else {
      self.register(phone)
    }
  case .failure(let error):  
    print(error)  
  }  
}
```

Варианты ошибок

> Временно не работает, приходит *.unknownError*

```swift
public enum ErrorType: String {
    /// отсутствует телефон
    case emptyPhoneField = "empty_phone_field"
    /// формат телефона невалидный
    case invalidPhoneField = "invalid_phone_field"
}
```

**Регистрация пользователя**

Если пользователя нет в системе, то его нужно зарегистрировать. Во время регистрации пользователю отправляется OTP код. Повторный код можно отправить через метод getOTP

```swift
GIDSDK.shared.register(phone: phone, codeChallange: codeChallange) { result in  
  switch result {  
  case .success(let data):
    self.otpSID = data.otpSID // сохраняем otpSID, далее он понадобится для получения токенов  
    self.waitSeconds = data.waitSeconds // таймер повторной отправки кода в секундах  
  case .failure(let error):  
    print(error)  
  }  
}
```

Варианты ошибок

```swift
public enum ErrorType: String {
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case validationError = "validation_error"
    /// Передан номер телефона зарегистрированного ранее пользователя
    case userExists = "user_exists"
    /// отсутствует телефон
    case emptyPhoneField = "empty_phone_field"
    /// формат телефона невалидный
    case invalidPhoneField = "invalid_phone_field"
    /// Сработал троттлинг по номеру телефона
    case throttled
    /// В заголовĸе: отсутствуют обязательные поля, подпись невалидная
    case permissionDenied = "permission_denied"
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сработал троттлинг
    case requestError = "request_error"
}
```

**Запрос отправки OTP**

Запрос на отправку OTP кода

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

Варианты ошибок

```swift
public enum ErrorType: String {
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case validationError = "validation_error"
    /// отсутствует телефон
    case emptyPhoneField = "empty_phone_field"
    /// формат телефона невалидный
    case invalidPhoneField = "invalid_phone_field"
    /// В заголовĸе: отсутствуют обязательные поля, подпись невалидная
    case permissionDenied = "permission_denied"
    /// В запросе передан телефон, по ĸоторому не найден аĸĸаунт в ГИД SSO
    case notFound = "not_found"
    /// Сработал троттлинг по номеру телефона
    case throttled
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сработал троттлинг
    case requestError = "request_error"
}
```

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

Варианты ошибок

```swift
public enum ErrorType: String {
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case invalidRequest = "invalid_request"
    /// Недопустимое значение параметра grant_type
    case unsupportedGrantType = "unsupported_grant_type"
    /// Неверный или просроченный ĸод подтверждения, или повторный запрос на получение тоĸена с одним ĸодом
    case invalidGrant = "invalid_grant"
    /// Запрошенный scope: не содержит openid, невалидный
    case invalidScope = "invalid_scope"
    /// В запросе: отсутствуют обязательные для проверĸи otp параметры, параметры невалидные
    case otpRequestValidationError = "otp_request_validation_error"
    /// Ошибĸа проверĸи OTP ĸода - невалидное значение
    case invalidOtpCode = "invalid_otp_code"
    /// Сроĸ действия OTP ĸода истеĸ
    case expiredOtpCode = "expired_otp_code"
    /// OTP ĸод был использован ранее
    case usedOtpCode = "used_otp_code"
    /// Переданы невалидные данные ĸлиента
    case invalidClient = "invalid_client"
    /// Запрошенный scope: не назначен ĸлиенту в настройĸах ГИД SSO.
    case scopeNotGranted = "scope_not_granted"
    /// Сработал троттлинг по номеру телефона
    case requestThrottled = "request_throttled"
    /// Сервис временно недоступен
    case temporarilyUnavailable = "temporarily_unavailable"
    /// Ошибĸа проверĸи подписи для idp_verify_url
    case permissionDenied = "permission_denied"
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сработал троттлинг
    case requestError = "request_error"
}
```

## Change log

### 0.1.8

- типизация ошибок
- описание ошибок на русском языке
- добавлены методы register, checkPhone

### 0.1.7

- можно указать apiKey для сервера GID в конфиге

### 0.1.6

- исправлена ошибка с автокомплитом модели GIDApiError
- добавлена переменная env в конфиг, от нее зависят какими ключами подписываются реквесты в гид 
- при отсутствии переменной status_code в ошибке от сервера, подставляется из response
- если формат ошибки отличается от ожидаемого, то в логах отобразится сообщение с ее содержанием. а запрос упадет с ошибкой .unknownError(e)
