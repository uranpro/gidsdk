// swift-tools-version:6.0
import PackageDescription

let package = Package(
    name: "GIDKit",
    platforms: [.iOS(.v13), .tvOS(.v13)],
    products: [
        .library(
            name: "GIDKit",
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
                .target(name: "GIDSDKWrapper"),
            ],
            path: "SwiftPM/GIDSDKTarget"
        ),
        .target(
            name: "GIDSDKDependencies",
            dependencies: [
                .product(name: "Segment", package: "analytics-swift"),
                .product(name: "Sentry", package: "sentry-cocoa")
            ],
            path: "SwiftPM/GIDSDKDependencies"
        ),
        .target(
            name: "GIDSDKWrapper",
            dependencies: [
                .target(name: "GIDKitBinary"),
                .target(name: "KFPMobileKit"),
                .target(name: "GIDSDKDependencies"),
            ],
            path: "SwiftPM/GIDSDKWrapper"
        ),
        .binaryTarget(
            name: "KFPMobileKit",
            path: "KFPMobileKit.xcframework"
        ),
        .binaryTarget(
            name: "GIDKitBinary",  // ← переименовано
            path: "GIDKit.xcframework"
        ),
    ]
)