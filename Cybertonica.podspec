Pod::Spec.new do |s|  
    s.name              = 'Cybertonica' # Name for your pod
    s.version           = '2.6.2'
    s.summary           = 'Cybertonica SDK'
    s.homepage          = 'https://gid.ru'

    s.author            = { 'Rizabek Abdulgamidov' => 'rabdulgamidov@gid.ru' }
    s.license = { :type => "MIT", :text => "MIT License" }

    s.swift_version = '5.0.0'

    s.platform          = :ios
    s.source            = { :git => 'https://gitlab.zxz.su/mbushuev/gidsdk.pod', 
			   :tag => 'Cybertonica-' + s.version.to_s } 

    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks = 'Cybertonica.xcframework'
end 

