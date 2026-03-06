# Extra Context Egress

## Licensing & Compliance
- Qt6 used under LGPL-3.0; dynamically linked
- Distribution allows user replacement of Qt libraries
- Includes `LICENSE.LGPL-3.0`, `ATTRIBUTIONS.md`, Qt source link: https://code.qt.io
- Project code remains MIT

## Distribution Strategy
- Primary: GitHub Releases with AppImage (portable)
- Secondary: System-linked builds (via package managers)
- CI/CD: GitHub Actions builds AppImage and uploads to Releases
- No direct AppImage commits to repo

## Project Conventions
- Folder structure:
  - `/work-units`, `/ingestion-context`, `/core-design`, `/extra-context`, `/egress-context`
  - `/metadata/raw_toml`, `/metadata/processed_json`
- Context files: AI-readable Markdown, modular, versioned
- Prompt flow: ingestion → core-design → work units → extra context → task

## Tooling References
- Qt6: https://code.qt.io
- CPM.cmake: https://github.com/cpm-cmake/CPM.cmake
- stdexec: https://github.com/NVIDIA/stdexec
- toml++: https://github.com/marzer/tomlplusplus
- yyjson: https://github.com/ibireme/yyjson
- libsodium: https://github.com/jedisct1/libsodium

## Future Vision
- Mobile apps (Android/iOS) using Qt for mobile
- Custom C++ UI library using `stdexec` (long-term Qt replacement)
- Installer packages: Flatpak (Linux), MSI (Windows), DMG (macOS)
- Support JWKS for automated key discovery
- Pluggable recommenders with decentralized indexing   
