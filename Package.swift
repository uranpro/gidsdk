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
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.1/AFNetworking.xcframework.4.0.1.zip",
                      checksum: "2993ea595ba3a625eeb7a8fcd3549b061ece54de796b611ba3b1571d81ebfa58"
        ),
        
        .binaryTarget(name: "Cybertonica",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.1/Cybertonica.xcframework.4.3.1.zip",
                      checksum: "19ba7c4f93b844e603503f59fc7719417e4b8e2627b8601b40ed390ee5f6f2fe"
                      ),
        
        .binaryTarget(name: "GIDSDK",
                      url: "https://gitlab.zxz.su/gid-public/gidsdk.ios/-/raw/main/SwiftPM/releases/0.3.1/GIDSDK.xcframework.0.3.1.zip",
                      checksum: "7039d7beff4a158523cbd41d59993988e20e49c181b88ac806f850d5080ee509"
        ),
        
    ]
)
