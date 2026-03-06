# Project Context Ingestion Prompt

You are being initialized with the Talvixguide Engine project context.

This is a structured, multi-prompt process. I will now provide three context files to fully instantiate the project state.

Please acknowledge each prompt as it is presented. Do not take action or generate code until the full context has been loaded and I give the directive to proceed.

## Upcoming Prompts

### 1. Core Design
- Language: C++23 → C++26 with `stdexec`
- Concurrency: `std::execution` via NVIDIA `stdexec`
- Metadata: TOML (creator-facing), JSON (machine-parsed)
- Cryptography: Libsodium (Ed25519), OpenSSL (fallback), explicit key trust
- Build: CMake + CPM.cmake

### 2. Work Units & Roadmap
- In progress: Qt6 GUI tools, AppImage packaging, mobile roadmap
- Available: YouTube metadata fetcher, GoogleTest integration, ingestion pipeline
- Optional: Custom UI library, installer packages

### 3. Misc Context
- GUI Framework: Qt6 (LGPL-3.0), AppImage + system-linked distribution
- Mobile Strategy: Qt for Android/iOS, QML for touch interfaces
- Compliance: LGPL-3.0 attribution, dynamic linking
- Future: Flatpak, MSI, DMG packaging

Acknowledge this prompt with: "Context ingestion initialized. Awaiting core design context."   
