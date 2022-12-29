// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "MoneyHashTask",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "MoneyHashTask",
            targets: ["MoneyHashTask"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MoneyHashTask",
            path: "./MoneyHashTask.xcframework"
        ),
    ]
)
