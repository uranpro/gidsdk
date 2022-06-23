// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GIDSDK",
    platforms: [.iOS(.v11), .tvOS(.v9)],
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
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.0/AFNetworking.xcframework.4.0.1.zip",
                      checksum: "37fd46f4b39249ae23bbca68af3dc11a91d32abf1409f72ea9d3760b6c3c5e48"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.0/Cybertonica.xcframework.4.3.1.zip",
                      checksum: "044a69e6c49bd8afa8ed4ad2fafba245d939feb2080c59b20456ed58984f8095"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.0/GIDSDK.xcframework.0.3.0.zip",
                      checksum: "d24ce88d0608813a134e428bc4f80edcd8d76ddb13c17ffc855649ced39cf37d"
        ),
        
    ]
)
