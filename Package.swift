// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GIDSDK",
    platforms: [.iOS(.v11), .tvOS(.v10)],
    products: [
        .library(
            name: "GIDSDK",
            targets: ["GIDSDKTarget"]
        ),
    ],
    
    targets: [
        .target(
              name: "GIDSDKTarget",
              dependencies: [.target(name: "GIDSDKWrapper",
                                     condition: .when(platforms: [.iOS, .tvOS])),
                             ],
              path: "SwiftPM/GIDSDKTarget"
        ),
        
        .target(name: "GIDSDKWrapper",
                dependencies: [
                    .target(name: "GIDSDK", condition: .when(platforms: [.iOS, .tvOS])),
                    .target(name: "AFNetworking", condition: .when(platforms: [.iOS, .tvOS])),
                    .target(name: "Cybertonica", condition: .when(platforms: [.iOS, .tvOS])),
                ],
                path: "SwiftPM/GIDSDKWrapper"
        ),
        
        .binaryTarget(name: "AFNetworking",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.2/AFNetworking.xcframework.4.0.1.zip",
                      checksum: "82e72117537856b320804bee2f694d232b25a168b989099ad470bd1e52396c2d"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.2/Cybertonica.xcframework.4.3.1.zip",
                      checksum: "d014cf483bee9c37a4ea2fa5e271da8334bdbcf0ed138f10d98e7795b1f3c6ce"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.2/GIDSDK.xcframework.0.3.2.zip",
                      checksum: "01b6a53c2609ec95f6faa885f7ec3a46dd7c98b111b2e35c4197a8446be84dcf"
        ),
        
    ]
)
