# Как подключить SDK через SPM

## Через git

1. Откройте проект
2. В меню выберите *File > AddPackages* 
3.  В появившемся окне найдите строку поиска и укажите адрес репозитория: https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod.git
5. Выберите нужную версию или хэш коммита, проект и нажмите *AddPackage*

## Локально

1. Откройте проект
2. В меню выберите *File > AddPackages* 
3. В появившемся окне найдите строку поиска и укажите путь до папки: file:///Users/.../gidsdk.pod
5. Выберите нужную версию или хэш коммита, проект и нажмите *AddPackage*

# Как выложить новую версию в SPM

## Подготовка

Выполните команду в папке с SDK

```
./upload_to_nexus_spm
```

Она сделает специальный билд для SPM и отправит его в Nexus. Папка _gid/sdk/spm_, файлы _GIDSDK-public-spm.xcframework-$sdk_version.zip_ и _KFPMobileKit.xcframework-$kfp_version.zip_.  При удачном завершении, в конце отобразится их checksum, далее он нам понадобится.

```
GIDSDK-public-spm.xcframework-1.2.1.zip checksum
03d98c260977157f982acbac75108525155161c2e4b804f908d3f0374e4ff99e
KFPMobileKit.xcframework-5.3.0.24.zip checksum
701c93afc4a120ae4d13fb1c4cbcfec24cef04828b5c67d2d40e9615e704f761
```

## Package.swift

Перейдите в проект с https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod. Откройте файл _Package.swift_, измените ссылки и checksum на актуальные.

```
# Было

.binaryTarget(
    name: "KFPMobileKit",
    url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/KFPMobileKit.xcframework-5.3.0.24.zip",
    checksum: "701c93afc4a120ae4d13fb1c4cbcfec24cef04828b5c67d2d40e9615e704f761"
),

.binaryTarget(
    name: "GIDSDK",
    url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/GIDSDK-public-spm.xcframework-1.2.1.zip",
    checksum: "03d98c260977157f982acbac75108525155161c2e4b804f908d3f0374e4ff99e"
),

# Стало

.binaryTarget(
    name: "KFPMobileKit",
    url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/KFPMobileKit.xcframework-5.3.0.24.zip",
    checksum: "03d98c260977157f982acbac75108525155161c2e4b804f908d3f0374e4ff99e"
),

.binaryTarget(
    name: "GIDSDK",
    url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/GIDSDK-public-spm.xcframework-2.0.0.zip",
    checksum: "701c93afc4a120ae4d13fb1c4cbcfec24cef04828b5c67d2d40e9615e704f761"
),
```

## Проверка

Сделайте коммит изменений. Создайте новый проект, добавьте наш SDK через SPM и укажите вместо версии хэш коммита. Попробуйте сделать import SDK, инициализировать его.

## Новая версия

Если все ОК, то создаем тэг с версией




# Как подключить SDK через Cocoapods

## Через git

Добавьте в Podfile

```
pod 'GIDSDK', :git => 'https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod.git', :tag => '1.2.1'
```

## Локально

Добавьте папку с репозиторием в проект, добавьте в Podfile

```
pod 'GIDSDK', :path => 'gidsdk.pod', :tag => '1.2.1'
```

# Как выложить новую версию в Pod

## Подготовка

Переходим в папку с SDK и выполняем

```
./make public
```

Открываем папку build, копируем GIDSDK-public.xcframework и KFPMobileKit.xcframework, переходим в папку gidsdk.pod, удаляем старые *.xcframework и вставляем новые. Далее переименовываем:

GIDSDK-public.xcframework -> GIDKit.xcframework
KFPMobileKit.xcframework -> KfpMobileKit.xcframework

## GIDSDK.podspec

Заходим в GIDSDK.podspec, меняем версию, коммитим изменения и добавляем тэг.