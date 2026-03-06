# Core Design Context (Egress)

## Vision & Scope
High-performance, decentralized media discovery backend enabling creators to publish cryptographically signed metadata. Users discover content via scalable, pluggable recommendation algorithms.

## Major Components & Responsibilities
- **Backend Engine**: Core ingestion, parsing, indexing (C++23/26)
- **Signer Tool**: Creator-facing GUI/CLI for signing TOML metadata (Qt6)
- **Extractor Tool**: Pulls metadata from platforms (e.g., YouTube API) → TOML
- **Frontend Clients**: User-facing discovery apps (future)
- **Metadata Store**: `/metadata/raw_toml`, `/metadata/processed_json`

## Component Interactions & Data Flow
1. **Creator Workflow**: Extractor → YouTube API → TOML → Signer → Signed TOML → Export
2. **Ingestion Workflow**: Signed TOML → Parse (toml++) → Convert to JSON → Verify (libsodium) → Index (yyjson)
3. **Discovery Workflow**: Indexed JSON → Pluggable recommenders → Frontend

## Technology Stack
- **Language**: C++23 → C++26 (`-std=c++2c`)
- **Concurrency**: NVIDIA `stdexec` (senders/receivers)
- **Metadata**: TOML (creator), JSON (machine)
- **Libraries**: `toml++`, `yyjson`, `stdexec`, `libsodium`/`OpenSSL`
- **GUI**: Qt6 (LGPL-3.0) for signer/extractor
- **Build**: CMake + CPM.cmake

## Architectural Constraints
- **Decentralized Trust**: No central authority; explicit key verification
- **Performance**: Sub-second parsing/verification for large JSON
- **Portability**: Support Linux, Windows, macOS
- **Compliance**: LGPL-3.0 for Qt6 (dynamic linking)
- **Extensibility**: Pluggable recommenders, modular tooling   
