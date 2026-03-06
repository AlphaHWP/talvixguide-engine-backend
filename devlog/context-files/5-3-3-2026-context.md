# Talvixguide – Project Context (Raw Markdown)

## Vision
High-performance, decentralized media discovery backend with cryptographically signed metadata. Pluggable recommendation algorithms for user-driven content discovery.

## Status
- **Phase**: Early Development  
- **Next Step**: Begin signer tool implementation with Qt

## Core Design
- **Language**: C++17/20 → C++23 → C++26 (planned)  
- **Concurrency**: `std::execution` via NVIDIA `stdexec` (`-std=c++2c`)  
- **Metadata Formats**:  
  - **TOML**: Human-authored, creator-facing  
  - **JSON**: Machine-parsed, high-performance  
- **Libraries**:  
  - `toml++` (TOML/JSON), `yyjson` (ultra-fast JSON), `OpenSSL`/`libsodium` (Ed25519)  
- **Signing Scope**: File-wide and per-entry

## Build & Dependencies
- **Build System**: CMake  
- **Dependencies**: Managed via **CPM.cmake** (`toml++`, `yyjson`, `stdexec`, `OpenSSL`/`libsodium`)  
- **Compiler Flags**: `-std=c++23`, `-std=c++2c`  
- **Future**: Add Renovate for automated updates

## Folder Structure
 

. ├── build/ # Build artifacts ├── cmake/ # CMake modules ├── data/ # Metadata I/O ├── devlog/ # Context & conversation logs ├── docs/ # Project docs ├── extern/ # Vendored deps ├── include/ # Public headers (future) ├── licenses/ # MIT, LGPL-3.0 ├── scripts/ # Dev scripts ├── src/ # Source code ├── tests/ # Unit tests ├── INSTALLATION.md # Qt setup guide ├── ATTRIBUTIONS.md # Third-party notices └── LICENSE, README.md


## GUI Framework
- **Chosen**: **Qt (LGPL-3.0)**  
- **Why**: Native UX, cross-platform, strong tooling  
- **Licensing**:  
  - Dynamically linked → MIT code remains MIT  
  - Include `LICENSE.LGPL-3.0` and `ATTRIBUTIONS.md`  
  - Link to Qt source: https://code.qt.io  
  - Users may replace Qt (via system install or AppImage)

## In Progress Tasks
- [ ] Modularize context Markdown files (`gui.md`, `crypto.md`, etc.)  
- [ ] Create AI focus prompt for context ingestion  
- [ ] Create AI prompt for generating new context source files  
- [ ] Decide Qt inclusion method (system vs. AppImage)  
- [ ] Create `INSTALLATION.md`  
- [ ] Create `ATTRIBUTIONS.md`  
- [ ] Create `licenses/` folder with `LICENSE.LGPL-3.0`, `LICENSE.MIT`  
- [ ] Verify LGPL-3.0 compliance (link to Qt source)

## Available Work Units
- [ ] Prototype YouTube API metadata fetcher (→ TOML → signer)  
- [ ] Add unit tests (GoogleTest)  
- [ ] Implement backend ingestion pipeline (`yyjson` + signed JSON)

## Optional Future Work
- [ ] Build high-performance C++ UI library using `stdexec`  
- [ ] Migrate signer/extrator to custom UI library (replace Qt)
