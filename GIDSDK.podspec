Pod::Spec.new do |spec|
    spec.name                     = 'GIDSDK'
    spec.version                  = '1.3.2'
    spec.homepage                 = 'https://gid.ru'
    spec.source                   = { :http=> '' }
    spec.authors                  = 'GID'
    spec.license                  = 'GID'
    spec.summary                  = 'GID SSO SDK for iOS & tvOS'
    # spec.preserve_paths = '*'

    spec.vendored_frameworks     = 'KfpMobileKit.xcframework', 'GIDKit.xcframework'

    spec.ios.deployment_target  = '13.0'
    spec.tvos.deployment_target  = '13.0'

end