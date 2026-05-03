Pod::Spec.new do |spec|
    spec.name                     = 'GIDSDK'
    spec.version                  = '2.0.1'
    spec.homepage                 = 'https://gid.ru'
    spec.source                   = { :http=> '' }
    spec.authors                  = 'GID'
    spec.license                  = 'GID'
    spec.summary                  = 'GID SSO SDK for iOS & tvOS'

    # spec.source_files = "**/*.{swift}"

    spec.vendored_frameworks     = 'GIDKit_pod.xcframework', 'KfpMobileKit.xcframework'

    spec.dependency 'Analytics', '~> 4.1.8'
    spec.dependency 'Sentry', '~> 8.53.2'

    spec.swift_version = '5.0'

    spec.ios.deployment_target  = '14.1'
    spec.tvos.deployment_target  = '13.0'

end
