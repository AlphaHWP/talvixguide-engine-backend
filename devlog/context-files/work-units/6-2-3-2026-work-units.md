# Work Units – Talvixguide Engine

## In Progress

### 🟡 Create and Upload Qt6 AppImage for Portable Distribution
- **Goal**: Provide a single-file, portable Linux binary.
- **Steps**:
  - Use `linuxdeployqt` or `appimage-builder` in CI
  - Generate AppImage via GitHub Actions on tag push
  - Upload to GitHub Releases (not in repo)
- **Tools**: `aqtinstall`, `linuxdeployqt`, `actions/upload-release-asset`
- **Compliance**: Dynamically linked, LGPL-3.0 compliant

### 🟡 Create BUILD_INSTRUCTIONS.md
- **Goal**: Document build options for developers and advanced users.
- **Content**:
  - System requirements (Qt6, CMake, dependencies)
  - Build steps:
    ```bash
    cmake -B build -DCMAKE_PREFIX_PATH=/usr/lib/qt6
    cmake --build build
    ```
  - Distribution notes: AppImage vs. system-linked binary
- **Location**: Root of repo

### 🟡 Create Roadmap to Support Mobile Users
- **Goal**: Enable Android/iOS participation.
- **Path**:
  - Use Qt for Android/iOS with CMake
  - Target Qt 6.8+ for latest mobile support
  - Build with Android NDK / Xcode
  - Distribute via Google Play / App Store
- **UI Strategy**: Qt Quick (QML) for touch-first interfaces
- **CI/CD**: Extend GitHub Actions for cross-compilation

## Available

### 🔳 Prototype YouTube API Metadata Fetcher
- **Goal**: Extract public video metadata → TOML.
- **Fields**: title, description, tags, thumbnails, publish date
- **Auth**: OAuth 2.0 (user consent)
- **Output**: Valid TOML → ready for signing

### 🔳 Add Unit Tests (GoogleTest)
- **Goal**: Validate core logic with automated tests.
- **Scope**:
  - TOML/JSON parsing (`toml++`, `yyjson`)
  - Signing/verification (Ed25519, RSA)
  - Metadata transformation pipeline
- **Location**: `/tests/`

### 🔳 Implement Backend Ingestion Pipeline
- **Goal**: High-performance ingestion of signed JSON.
- **Flow**: Signed JSON → `yyjson` parse → verify → index
- **Concurrency**: Use `stdexec` for parallel parsing/verification

## Optional

### 🔳 Create Installation Package for Non-Technical Users
- **Goal**: Simplify installation across platforms.
- **Options**:
  - **Linux**: AppImage (portable), Flatpak (sandboxed, auto-updates)
  - **Windows**: MSI installer (WiX/NSIS)
  - **macOS**: DMG bundle (signed app)
- **Automation**: Build packages in CI and attach to GitHub Releases   
