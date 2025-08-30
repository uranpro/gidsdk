// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GIDSDK",

    platforms: [.iOS(.v13), .tvOS(.v13)],

    products: [
        .library(
            name: "GIDSDK",
            targets: ["GIDSDKTarget"]
        ),
    ],

    dependencies: [
        .package(url: "https://github.com/segmentio/analytics-swift.git", from: "1.8.0"),
        .package(url: "https://github.com/getsentry/sentry-cocoa.git", from: "8.53.2")
    ],

    targets: [
        .target(
            name: "GIDSDKTarget",
            dependencies: [
                .target(name: "GIDSDKWrapper", condition: .when(platforms: [.iOS, .tvOS])),
            ],
            path: "SwiftPM/GIDSDKTarget"
        ),
        
        .target(
            name: "GIDSDKWrapper",
            dependencies: [
                .target(name: "GIDSDK", condition: .when(platforms: [.iOS, .tvOS])),
                .target(name: "KFPMobileKit", condition: .when(platforms: [.iOS, .tvOS])), 
                .product(name: "Segment", package: "analytics-swift"),
                .product(name: "Sentry", package: "sentry-cocoa")
            ],
            path: "SwiftPM/GIDSDKWrapper"
        ),
        
        .binaryTarget(
            name: "KFPMobileKit",
            url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/KFPMobileKit.xcframework-5.3.0.24.zip",
            checksum: "701c93afc4a120ae4d13fb1c4cbcfec24cef04828b5c67d2d40e9615e704f761"
        ),
        
        .binaryTarget(
            name: "GIDSDK",
            url: "https://nexus.gid.team/repository/sso-sdk-ios/gid/sdk/spm/GIDSDK-public-spm.xcframework-1.2.1.zip",
            checksum: "03d98c260977157f982acbac75108525155161c2e4b804f908d3f0374e4ff99e"
        ),
    ]
)
