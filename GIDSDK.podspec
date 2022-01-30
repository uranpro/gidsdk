Pod::Spec.new do |s|  
    s.name              = 'GIDSDK' # Name for your pod
    s.version           = '0.1'
    s.summary           = 'GIDSDK'
    s.homepage          = 'https://gid.ru'

    s.author            = { 'Mikhail Bushuev' => 'mbushuev@uma.tech' }
    s.license = { :type => "MIT", :text => "MIT License" }

    s.swift_version = '5.0.0'

    s.platform          = :ios
    s.source            = { :git => 'https://gitlab.zxz.su/gid/sdk/mobile/gidsdk.pod.git', :tag => "#{s.version}" } 
    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks = 'GIDSDK.xcframework'
    s.dependency 'AFNetworking', '4.0.1'
end 