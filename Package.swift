// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GIDSDK",
    platforms: [.iOS(.v13), .tvOS(.v10)],
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
                    .target(name: "KFPMobileKit", condition: .when(platforms: [.iOS, .tvOS])),
                    
                ],
                path: "SwiftPM/GIDSDKWrapper"
        ),
        
        .binaryTarget(name: "KFPMobileKit",
                      url: "https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod/-/raw/main/SwiftPM/releases/1.2.0/KFPMobileKit.xcframework.zip",
                      checksum: "25beb3a16b988025bfc9f72164ced749cd05a8c76995dc9452e1dc7c4c710db7"
        ),
        
        
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.gid.team/sso/sdk/mobile/gidsdk.pod/-/raw/main/SwiftPM/releases/1.2.0/GIDSDK.xcframework.zip",
                      checksum: "0811e4a86e24b6f91680b24b8d3318356c2973fb304eac58e2219cbab50536b4"
        ),
        
    ]
)
