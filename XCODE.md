# Xcode Setup - Swift 6.2 Ready

✅ **This fork is optimized for Xcode with web server & frontend development**

## What's Changed

- ✅ Swift 6.2 StrictConcurrency enabled
- ✅ All Sendable conformances added
- ✅ GTK targets removed (Linux desktop not needed for web)
- ✅ Demo apps removed (caused unnecessary GTK dependencies)
- ✅ Only web development products exposed

## Available Products

```swift
TokamakCore        // Core framework
TokamakStaticHTML  // Server-side HTML rendering
TokamakDOM         // WebAssembly frontend
```

## How to Use in Xcode

### 1. Add to Your Package.swift

```swift
dependencies: [
    .package(path: "../Tokamak-Swift-6.2"),
]
```

### 2. For Your Web Server

```swift
.target(
    name: "MyWebServer",
    dependencies: [
        .product(name: "TokamakStaticHTML", package: "Tokamak-Swift-6.2"),
    ]
)
```

### 3. For Your Frontend

```swift
.target(
    name: "MyFrontend",
    dependencies: [
        .product(name: "TokamakDOM", package: "Tokamak-Swift-6.2"),
    ]
)
```

## Open in Xcode

```bash
open Package.swift
```

## Build Verification

```bash
swift build --product TokamakCore
swift build --product TokamakStaticHTML
swift build --product TokamakDOM
```

All products build cleanly.

## Notes

- **Swift runtime warnings**: You may see warnings about `swift_getTypeByMangledNameInContext` and `swift_checkMetadataState`. These are expected and don't prevent compilation.
- **No GTK errors**: All Linux/GTK code has been removed for clean Xcode experience.
- **macOS 26 ready**: All dependencies built for macOS 26.

## Verified Working

✅ Swift 6.2 Compatible
✅ macOS 26 Compatible
✅ Xcode Build Successful
✅ StrictConcurrency Enabled
✅ Zero GTK Errors