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
                      url: "https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/raw/main/SwiftPM/releases/0.1.8/AFNetworking.xcframework.4.0.2.zip",
                      checksum: "04cef0cecfb7caa66bd1bd8ef8d347ed47f67f0412ef508828823655218dc7e8"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/raw/main/SwiftPM/releases/0.1.8/Cybertonica.xcframework.2.6.2.zip",
                      checksum: "f75d0318479685f1b2944f56e4b89a2e959fbc62cff120fc8796ffecd83c5e85"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/mbushuev/gidsdk.pod/-/raw/main/SwiftPM/releases/0.1.7/GIDSDK.xcframework.0.1.8.zip",
                      checksum: "b4815cbbb032a68503c826aaa41688d12ed54507bf50900e6371f06685fe20d4"
        ),
        
    ]
)
