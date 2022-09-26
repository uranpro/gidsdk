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
                      checksum: "dd22f8c21c2a8bb13390450df438a96fc2b4634fd6b3730207e70d3820ec0cb8"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.2/Cybertonica.xcframework.4.3.1.zip",
                      checksum: "309d2a3e9cd4c7f9b4f2b37105f9b7be9b5adc0de15305d1940b013ff408e477"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.2/GIDSDK.xcframework.0.3.2.zip",
                      checksum: "8ab5dd75b7467b1c0cee767da37b4b6da0786649a394bb64b65cd10a5387f3fe"
        ),
        
    ]
)
