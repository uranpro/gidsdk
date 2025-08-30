
# GIDSDK for iOS v1.2.1

> Минимальная версия iOS 13, tvOS 13

## Установка

### Swift Package Manager

1. Откройте проект
    
2. В меню выберите *File > AddPackages*
    
3.  В появившемся окне найдите строку поиска и укажите адрес репозитория:
    
`https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod.git`

4. Выберите нужную версию, проект и нажмите *AddPackage*

### Вручную

Для подключения SDK вручную, выполните следующие действия:

1. Перейдите по ссылке
    
`https://gitlab.zxz.su/gid-public/gidsdk.ios/-/tree/main/SwiftPM/releases`

2. Выберите нужную версию и перейдите в каталог
    
3. Скачайте содержимое(zip файлы) и распакуйте
    
4. Скопируйте полученные файлы **.xcframework** и вставьте в корень вашего проекта
    
5. Откройте проект и выберите необходимый *target*, перейдите на вкладку *General*
    
6. Найдите *Frameworks, Libraries, and Embedded Content* и нажмите на *+*
    
7. Нажмите *Add other > Add files* и выберите скопированные файлы
    
8. Фреймворки должны добавиться с опцией *Embed & Sign*

## Настройка библиотеки

Для настройки библиотеки выполните следующие действия:

**1. Настройка проекта**

Добавьте следующие строки в Info.plist

```xml
<key>NSPrincipalClass</key>
<string>ApplicationWrapper</string>
```

**2. Инициализация**

Инициализируйте SDK в начале приложения. Укажите свой *client_id, client_base_url*(адрес бэкенда вашего приложения) и *secret*
```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("my_client_id")
            .setSecret("my_secret")
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
    return "api/v0.3/backend/auth"
case .userinfo:
    return "api/gid/userinfo/"
case .revokeToken:
    return "api/v0.3/backend/oauth/revoke"
case .refreshToken:
    return "api/v0.3/backend/oauth/token"
case .register:
    return "api/v0.3/sdk/accounts/register/"
case .logout:
    return "/cas/logout"
case .getOTP:
    return "api/v0.3/sdk/actions/send_otp_password/"
case .checkPhone:
    return "/api/v0.3/sdk/actions/check_phone"
case .a2aAuth:
    return "oauth2/auth/a2a"
case .a2aGetTokens:
    return "api/v0.3/backend/oauth/token"
case .app2AuthGetTokens:
    return "oauth2/token"
```

> Если у вас несколько приложений и вы хотите шарить сессию между ними через AppGroup, то укажите AppGroupIdentifier
```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .setGIDBaseURL(URL(string: "http://auth.gid.ru/")!)
            .setAppGroupIdentifier("com.my.appGroup")
            .build()
```

## Аутентификация light

**Проверка телефона, зарегистрирован ли юзер**

Потом необходимо проверить зарегистрирован ли номер телефона в системе

```swift
GIDSDK.shared.mobileLight.checkPhone(phone: phone) { result in  
  switch result {  
  case .success(let data):
    if data.success {
      self.sendOTP(phone)
    } else {
      self.register(phone)
    }
  case .failure(let error):  
    print(error.description)  
  }  
}
```

Варианты ошибок

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
GIDSDK.shared.mobileLight.register(phone: phone) { result in  
  switch result {  
  case .success(let data):
    self.otpSID = data.otpSID // сохраняем otpSID, далее он понадобится для получения токенов  
    self.waitSeconds = data.waitSeconds // таймер повторной отправки кода в секундах  
  case .failure(let error):  
    print(error.description)  
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
    /// Сработал антифрод
    case requestConflict = "request_conflict"
}
```

**Запрос отправки OTP**

Запрос на отправку OTP кода

```swift
GIDSDK.shared.mobileLight.getOTP(phone: phone) { result in  
  switch result {  
  case .success(let data):  
    self.otpSID = data.otpSID // сохраняем otpSID, далее он понадобится для получения токенов  
    self.waitSeconds = data.waitSeconds // таймер повторной отправки кода в секундах  
  case .failure(let error):  
    print(error.description)  
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
    /// Сработал антифрод
    case requestConflict = "request_conflict"
}
```

**Запрос аутентификации пользователя**

Получение токенов

```swift
GIDSDK.shared.mobileLight.auth(otpSID: otpSID, otp: code, phone: phone) { result in  
  switch result {  
  case .success(let data):  
    self.jwtToken = data.jwtToken  
    self.oauthToken = data.accessToken  
  case .failure(let error):  
    print(error.description)  
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
    /// Сработал антифрод
    case requestConflict = "request_conflict"
}
```

## Anchor to anchor авторизация

### Дополнительная настройка

**1. Настройка библиотеки**

Укажите ваше приложение при инициализации(*Anchor App*)

```swift
let configuration = GIDSDKConfigurationBuilder()
            .setClientID("sdk_otp_3")
            .setClientBaseURL(URL(string: "http://myserver.com/")!)
            .setAnchorApp(.premier)
            .build()
  
GIDSDK.setup(configuration: configuration)
```

Варианты приложений

```swift
case premier
case matchTV
```

**2. Настройка проекта**

Добавьте URL схему в ваш проект. Откройте *Info.plist* как Source file и добавьте строки:

```xml
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>ru.gid.sdk.premier</string>
    <string>ru.gid.sdk.matchtv</string>
</array>
<key>CFBundleURLTypes</key>
<array>
    <dict>
        <key>CFBundleTypeRole</key>
        <string>Editor</string>
        <key>CFBundleURLName</key>
        <string>GIDSDK</string>
        <key>CFBundleURLSchemes</key>
        <array>
            <string>YOUR_APP_SCHEME</string>
        </array>
    </dict>
</array>
```

Заменив YOUR_APP_SCHEME на ваш, варианты

```
ru.gid.sdk.premier
ru.gid.sdk.matchtv
```

**3. AppDelegate**

Добавьте этот код в AppDelegate

```swift
func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
    GIDSDK.shared.handle(url: url)
    
    return true
}
```

### Использование

**1. Поиск установленных якорных приложений**

Перед авторизацией необходимо выбрать приложение, через которое будет осуществляться вход. Следующая функция возвращает список установленных якорных приложений

```swift
let selectedApp = GIDSDK.shared.installedAnchorApps()[selectedIndex]
```

**2. Получение кода для авторизации**

После выбора выполните следующую функцию

```swift

GIDSDK.shared.anchor2Anchor.login(app: selectedApp) { r in
    switch r {
    case .success(let data):
        // получили код, который можно обменять на токены
        let loginResult = data
    case .failure(let e):
        print(e.description)
    }
}
```

Варианты ошибок

```swift
public enum ErrorType: String {
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case invalidRequest = "invalid_request"
    /// Неверный или просроченный ĸод подтверждения, или повторный запрос на получение тоĸена с одним ĸодом
    case invalidGrant = "invalid_grant"
    /// Запрошенный scope: не содержит openid, невалидный
    case invalidScope = "invalid_scope"
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case validationError = "validation_error"
    /// отсутствует телефон
    case emptyPhoneField = "empty_phone_field"
    /// формат телефона невалидный
    case invalidPhoneField = "invalid_phone_field"
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
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сервис временно недоступен
    case temporarilyUnavailable = "temporarily_unavailable"
}
```

**3. Получение токенов**

```swift
// спросить пользователя, хочет ли он продолжить вход по номеру телефона loginresult.maskedPhone
loginWithPhoneFromLoginResult = askUser()

// пользователь решил войти по другому номеру телефона
if loginWithPhoneFromLoginResult {
    // переключаем на лайт авторизацию
    mobileLightLogin()  
    return
}

// меняем код на токены
GIDSDK.shared.anchor2Anchor.auth(loginResult: loginResult) { r in
    switch r {
    case .success(let data):
        // Токен получен
        print(data.accessToken)
    case .failure(let e):
        print(e.description)
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
    /// Пользователь ещё не ввёл код подтверждения
    case authorizationPending = "authorization_pending"
    /// Неверный или просроченный ĸод подтверждения, или повторный запрос на получение тоĸена с одним ĸодом
    case invalidGrant = "invalid_grant"
    /// Ошибка 401 на сервере, используется отдельный код, т.к. такой код ответа нельзя вернуть клиенту через redirect.
    case unauthorizedClient = "unauthorized_client"
    /// Сработал троттлинг по номеру телефона
    case requestThrottled = "request_throttled"
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сервис временно недоступен
    case temporarilyUnavailable = "temporarily_unavailable"
}
```

## App to anchor авторизация

### Дополнительная настройка

**1. Настройка проекта**

Добавьте URL схему в ваш проект. Откройте *Info.plist* как Source file и добавьте строки:

```xml
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>ru.gid.sdk.premier</string>
    <string>ru.gid.sdk.matchtv</string>
</array>
<key>CFBundleURLTypes</key>
<array>
    <dict>
        <key>CFBundleTypeRole</key>
        <string>Editor</string>
        <key>CFBundleURLName</key>
        <string>GIDSDK</string>
        <key>CFBundleURLSchemes</key>
        <array>
            <string>ru.gid.sdk.YOUR_CLIENT_ID</string>
        </array>
    </dict>
</array>
```

Заменив YOUR_CLIENT_ID на ваш CLIENT_ID

**2. AppDelegate**

Добавьте этот код в AppDelegate

```swift
func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
    GIDSDK.shared.handle(url: url)
    
    return true
}
```

### Использование

**1. Поиск установленных якорных приложений**

Перед авторизацией необходимо выбрать приложение, через которое будет осуществляться вход. Следующая функция возвращает список установленных якорных приложений

```swift
let selectedApp = GIDSDK.shared.installedAnchorApps()[selectedIndex]
```

**2. Получение кода для авторизации**

После выбора выполните следующую функцию

```swift

GIDSDK.shared.app2Anchor.login(app: selectedApp) { r in
    switch r {
    case .success(let data):
        // получили код, который можно обменять на токены
        let loginResult = data
    case .failure(let e):
        print(e.description)
    }
}
```

Варианты ошибок

```swift
public enum ErrorType: String {
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case invalidRequest = "invalid_request"
    /// Неверный или просроченный ĸод подтверждения, или повторный запрос на получение тоĸена с одним ĸодом
    case invalidGrant = "invalid_grant"
    /// Запрошенный scope: не содержит openid, невалидный
    case invalidScope = "invalid_scope"
    /// В запросе: отсутствуют обязательные параметры, параметры невалидные
    case validationError = "validation_error"
    /// отсутствует телефон
    case emptyPhoneField = "empty_phone_field"
    /// формат телефона невалидный
    case invalidPhoneField = "invalid_phone_field"
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
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сервис временно недоступен
    case temporarilyUnavailable = "temporarily_unavailable"
}
```

**3. Получение токенов**

```swift
// спросить пользователя, хочет ли он продолжить вход по номеру телефона loginresult.maskedPhone
loginWithPhoneFromLoginResult = askUser()

// пользователь решил войти по другому номеру телефона
if loginWithPhoneFromLoginResult {
    // переключаем на лайт авторизацию
    mobileLightLogin()  
    return
}

// меняем код на токены
GIDSDK.shared.app2Anchor.auth(loginResult: loginResult) { r in
    switch r {
    case .success(let data):
        // Токен получен
        print(data.accessToken)
    case .failure(let e):
        print(e.description)
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
    /// Пользователь ещё не ввёл код подтверждения
    case authorizationPending = "authorization_pending"
    /// Неверный или просроченный ĸод подтверждения, или повторный запрос на получение тоĸена с одним ĸодом
    case invalidGrant = "invalid_grant"
    /// Ошибка 401 на сервере, используется отдельный код, т.к. такой код ответа нельзя вернуть клиенту через redirect.
    case unauthorizedClient = "unauthorized_client"
    /// Сработал троттлинг по номеру телефона
    case requestThrottled = "request_throttled"
    /// Внутренняя ошибĸа сервиса
    case internalServerError = "internal_server_error"
    /// Сервис временно недоступен
    case temporarilyUnavailable = "temporarily_unavailable"
}
```

## App to auth авторизация

Данный метод позволяет пользователю авторизоваться через браузер

### Дополнительная настройка

**1. Настройка проекта**

Добавьте URL схему в ваш проект. Откройте *Info.plist* как Source file и добавьте строки:

```xml
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>ru.gid.sdk.premier</string>
    <string>ru.gid.sdk.matchtv</string>
</array>
<key>CFBundleURLTypes</key>
<array>
    <dict>
        <key>CFBundleTypeRole</key>
        <string>Editor</string>
        <key>CFBundleURLName</key>
        <string>GIDSDK</string>
        <key>CFBundleURLSchemes</key>
        <array>
            <string>ru.gid.sdk.CLIENT_ID</string>
        </array>
    </dict>
</array>
```

Заменив CLIENT_ID на ваш

**2. AppDelegate**

Добавьте этот код в AppDelegate

```swift
func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
    GIDSDK.shared.handle(url: url)
    
    return true
}
```

### Использование

**1. Safari View Controller**

В этом примере SDK создает SafariViewController, который необходимо отобразить пользователю(через navigation controller, например). После выполнения некоторой работы, вы попадете в completion, где можно скрыть сафари и продолжить авторизацию.

```swift

let vc = GIDSDK.shared.app2Auth.createSafariViewController { [weak self] r in
    self?.navigationController?.popViewController(animated: true)
    switch r {
    case .success(let loginResult):
        GIDSDK.shared.app2Auth.auth(loginResult: loginResult) { r in
            switch r {
            case .success(let data):
                print(data.accessToken)
            case .failure(let e):
                print(e.description)
            }
        }
    case .failure(let e):
        print(e.description)
    }
}
self.navigationController?.pushViewController(vc, animated: true)
```

**2. Web View**

В этом примере SDK создает ссылку, которую можно открыть в webView или браузере.

Перед началом укажите делегат webView и реализуйте метод

```swift
webView.navigationDelegate = self

// ...

func webView(_ webView: WKWebView, decidePolicyFor navigationAction: WKNavigationAction, decisionHandler: @escaping (WKNavigationActionPolicy) -> Void) {
    if GIDSDK.shared.app2Auth.handleWebView(navigationAction: navigationAction) {
        decisionHandler(.allow)
    }
}
```

Получение токена

```swift

let loginURL = GIDSDK.shared.app2Auth.createLoginURL { [weak self] r in
    self?.hideWebView()
    switch r {
    case .success(let loginResult):
        GIDSDK.shared.app2Auth.auth(loginResult: loginResult) { r in
            switch r {
            case .success(let data):
                print(data.accessToken)
            case .failure(let e):
                print(e.description)
            }
        }
    case .failure(let e):
        print(e.description)
    }
}

webView.load(URLRequest(url: loginURL))
```

### Завершение сессии

Если вы хотите завершить сессию в webView, SafariViewController или браузере, то вам необходимо создать logoutURL и перейти по ней

```swift
let url = GIDSDK.shared.appToAuth.createLogoutURL()

webView.load(URLRequest(url: url))
// or
safariViewController.load(URLRequest(url: url))
// or
application.openURL(url)
```

## Change log

### 0.3.3

- Убрали Cybertonica
- В GIDApiErrorResponse параметр errorDescription теперь опциональный
- Ошибки при Anchor to Anchor теперь возвращаются в формате enum GIDApiError\<GIDApiErrorClientAuth>

### 0.3.2

- Поддержка AppGroup
- В AppToAuth добавлен метод createLogoutURL
- Code challenge, code verifier, state, nonce - теперь скрыты
- Мелкие правки

Deprecated:

```swift

// GIDMobileLight

/// Register user by phone
@available(*, unavailable, message: "Remove 'codeChallenge' parameter")
public func register(phone: String, codeChallenge: String, completion: @escaping Handler<GIDApiRegisterResponse, GIDApiErrorRegister>) {}

/// Send OTP code to phone, use GIDPKCE to generate codeChallenge and codeVerifier
@available(*, unavailable, message: "Remove 'codeChallenge' parameter")
public func getOTP(codeChallenge: String, phone: String, completion: @escaping Handler<GIDApiOTPResponse, GIDApiErrorGetOTP>) {}

/// Get tokens with otpSID from getOTP(), otp code, phone and scope, use GIDPKCE to generate codeChallenge and codeVerifier
@available(*, unavailable, message: "Remove 'codeVerifier' parameter")
public func auth(otpSID: String, otp: String, phone: String, codeVerifier: String, completion: @escaping Handler<GIDSDKAuthResponse, GIDApiErrorAuth>) {}


// GIDApp2Auth

/// Auth by loginResult
@available(*, unavailable, message: "Remove 'codeVerifier' parameter")
public func auth(loginResult: GIDSDKDeeplinkLoginResult, codeVerifier: String, completion: @escaping Handler<GIDSDKAuthResponse, GIDApiErrorAny>) {}

/// Create loginURL. You can open via webView, SafariViewController or Application.openURL. If use webView, you need to handle navigation action in delegate, see handleWebView method
/// - Parameter completion: on completion close your webView or safariViewController, use result to auth
@available(*, unavailable, message: "Remove 'codeChallenge', 'state' and 'nonce' parameter")
public func createLoginURL(state: String, nonce: String, codeChallenge: String, completion: @escaping Handler<GIDSDKDeeplinkLoginResult, GIDApiErrorAny>) -> URL {
    return URL(string: "")!
}

/// Create safari view controller with loginURL
/// - Parameter completion: on completion close your safariViewController, use result to auth
@available(*, unavailable, message: "Remove 'codeChallenge', 'state' and 'nonce' parameter")
public func createSafariViewController(state: String, nonce: String, codeChallenge: String, completion: @escaping Handler<GIDSDKDeeplinkLoginResult, GIDApiErrorAny>) -> SFSafariViewController {
    return SFSafariViewController(url: URL(string: "")!)
}

// GIDAnchor2Anchor

@available(*, unavailable, message: "Remove 'state' and 'nonce' parameter")
public func login(app: GIDSDKApp, state: String, nonce: String, completion: @escaping Handler<GIDSDKDeeplinkLoginResult, GIDApiErrorAny>) {}

```

### 0.3.1

- App to anchor
- Больше информации об ошибках при Anchor to Anchor
- API -> 0.3.0
- Функция logout() обнуляет токен в приложении и на сервере

### 0.3.0

- App to Auth
- Приватный ключ для работы с сервисом GID задается в конфиге

### 0.2.0

- tvOS support
- Cybertonica support
- Anchor to anchor
- Новая ошибка .noInternetConnectionError
- Ошибки .emptyResponse и .jsonParseError переехали в .unknownError(error)
- Прекращение поддержки CocoaPods, тк есть проблемы работы с приватными репозиториями

Deprecated:

```swift

// GIDSDK

@available(*, unavailable, renamed: "mobileLight.checkPhone")
public func checkPhone(phone: String, completion: @escaping Handler<GIDApiCheckPhoneResponse, GIDApiErrorCheckPhone>) {}

@available(*, unavailable, renamed: "mobileLight.register")
public func register(phone: String, codeChallenge: String, completion: @escaping Handler<GIDApiRegisterResponse, GIDApiErrorRegister>) {}

@available(*, unavailable, renamed: "mobileLight.getOTP")
public func getOTP(codeChallenge: String, phone: String, completion: @escaping Handler<GIDApiOTPResponse, GIDApiErrorGetOTP>) {}

@available(*, unavailable, renamed: "mobileLight.auth")
public func auth(otpSID: String, otp: String, phone: String, codeVerifier: String, completion: @escaping Handler<GIDSDKAuthResponse, GIDApiErrorAuth>) {}

@available(*, unavailable, renamed: "authTokens")
public func getAuthTokens() -> GIDSDKAuthResponse? {}

// GIDSDKConfigurationBuilder

@available(*, unavailable, message: "Not used")
public func setApiKey(_ apiKey: String) -> GIDSDKConfigurationBuilder {
    return self
}
```

### 0.1.11

- fix

### 0.1.10

- добавлен новый scope

### 0.1.9

- костыль для ошибок checkPhone

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
