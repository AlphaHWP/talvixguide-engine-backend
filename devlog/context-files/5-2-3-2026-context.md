# Talvixguide Engine – Project Context Summary  
> **Last Updated**: March 05, 2026  
> **Status**: Early Development  
> **Next Step**: Finalize GUI framework decision and begin signer tool implementation  

## ✅ Completed Work Units
- **Switch to AI-native Markdown context files**  
  Project continuity is now managed via human- and AI-readable `.md` files.
- **Remove "Set up GitHub Project board"**  
  Unnecessary — context files provide sufficient tracking.

## 🟡 In Progress
- **Git structure for metadata**  
  Create `/metadata/raw_toml` and `/metadata/processed_json` with `.gitignore` rules and `.gitkeep`.
- **Choose C++ GUI framework**  
  Evaluating **Qt**, **Dear ImGui**, and **wxWidgets** for signer and extractor tools.
- **Build UI signer and extractor tools**  
  Shift from CLI to graphical interface for broader accessibility.
- **Draft `ROADMAP.md` and `PROJECT_CONTEXT.md`**  
  Capture evolving vision and priorities in versioned Markdown.

## 🔳 Available Work Units
- **Prototype YouTube API metadata fetcher**  
  Extract video metadata → output TOML → feed to signer.
- **Add unit tests (GoogleTest)**  
  Validate parsing, signing, and ingestion logic.
- **Implement backend ingestion pipeline**  
  Use `yyjson` to parse and verify signed JSON metadata for indexing.

## 🔮 Vision
High-performance, decentralized media discovery backend enabling creators to publish cryptographically signed metadata and users to discover content via scalable, pluggable recommendation algorithms.

## 🧱 Core Design Choices
- **Language**: C++17/20 → C++23 → C++26 (planned)  
- **Concurrency**: `std::execution` via NVIDIA `stdexec` (experimental `-std=c++2c`)  
- **Metadata Formats**:  
  - **TOML**: Human-authored, safe, creator-facing  
  - **JSON**: Machine-generated, high-performance parsing  
- **Parsing Libraries**:  
  - **toml++**: Header-only, TOML + JSON/YAML output  
  - **yyjson**: Ultra-fast JSON parsing  
- **Cryptography**:  
  - **Signing**: OpenSSL (RSA/ECDSA) or Libsodium (Ed25519)  
  - **Trust Model**: Explicit key trust (out-of-band); optional JWKS later  
  - **Signature Scope**: File-wide and per-entry signatures  

## 🛠️ Build & Dependency Management
- **Build System**: CMake  
- **Dependencies**: Managed via **CPM.cmake** (embedded)  
  - `toml++`, `yyjson`, `stdexec`, `OpenSSL`/`libsodium`  
- **Compiler Flags**: `-std=c++23`, `-std=c++2c` (C++26)  
- **Future**: Add Renovate for automated updates  

## 📁 Current Folder Structure
```
.
├── build/
├── cmake/
├── CMakeLists.txt
├── CMakePresets.json
├── data/
├── devlog/
│   ├── context-files/
│   └── conversations/
├── docs/
├── extern/              # For submodules (e.g., vendored deps)
├── include/             # Public headers (future use)
├── LICENSE
├── README.md
├── scripts/
├── src/
│   └── talvixguide/     # Private headers & implementation
├── tests/
└── talvixguide/         # To be moved → include/talvixguide/
```

## 🖥️ GUI Framework Evaluation
| Framework | Pros | Cons | Best For |
|---------|------|------|--------|
| **Qt** | Native look, mature, cross-platform, Qt Creator IDE | Larger binary, MOC step, license considerations | Non-technical users, production apps |
| **Dear ImGui** | Lightweight, immediate-mode, fast iteration | Not for traditional UIs, less accessible | Dev tools, debug interfaces |
| **wxWidgets** | Wraps native controls, lightweight | Limited ecosystem, maintenance concerns | Simple native apps |

✅ **Recommendation**: Use **Qt** for signer and extractor tools — best balance of **native UX**, **cross-platform support**, and **developer tooling** for non-technical users.
   
