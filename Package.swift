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
                      checksum: "49a893aafb2f14d203f22eaa6d8e677fc3cdd23f05dde859b78b30788a7428a2"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.0/Cybertonica.xcframework.4.3.1.zip",
                      checksum: "e8738e96fa925343a413e795bfb82f5b3a3bbf26de21234a1f3daf0d66ebdc5a"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.0/GIDSDK.xcframework.0.3.0.zip",
                      checksum: "d24ce88d0608813a134e428bc4f80edcd8d76ddb13c17ffc855649ced39cf37d"
        ),
        
    ]
)
