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
                ],
                path: "SwiftPM/GIDSDKWrapper"
        ),
        
        .binaryTarget(name: "AFNetworking",
                      url: "https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/raw/main/SwiftPM/releases/0.1.1/AFNetworking.xcframework.4.0.2.zip",
                      checksum: "04cef0cecfb7caa66bd1bd8ef8d347ed47f67f0412ef508828823655218dc7e8"
        ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/raw/main/SwiftPM/releases/0.1.1/GIDSDK.xcframework.0.1.1.zip",
                      checksum: "9e1d6a76f20506f6f027934e63afb736140c825cb7d3c0a89fbdd23c6a7fc056"
        ),
        
    ]
)
