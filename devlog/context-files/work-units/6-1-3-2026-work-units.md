# Work Units – Talvixguide Engine

## In Progress

### ✅ Git Structure for Metadata
- **Goal**: Organize raw and processed metadata with clear versioning rules. :inlineCitations{data="&#91;&#123;&quot;url&quot;&#58;&quot;https&#58;//docs.modular.com/max/coding-assistants/&quot;,&quot;favicon&quot;&#58;&quot;https&#58;//imgs.search.brave.com/-1q0WIx9hIKZl5Nw3LV-Dk1XYxTxdk04uw4RThXvxVA/rs&#58;fit&#58;32&#58;32&#58;1&#58;0/g&#58;ce/aHR0cDovL2Zhdmlj/b25zLnNlYXJjaC5i/cmF2ZS5jb20vaWNv/bnMvMmYzMzVkZmJl/NDAzOGJhNzk2YjNi/YzExMDdiYWEwZTM2/ZWNhYTZmOTVlZDJh/ZmI3NDc0YTczYTk2/MGY5MTA4Ny9kb2Nz/Lm1vZHVsYXIuY29t/Lw&quot;,&quot;title&quot;&#58;&quot;Using&#32;AI&#32;coding&#32;assistants&quot;,&quot;snippet&quot;&#58;&quot;Documentation&#32;files&#32;(llms.txt)&#58;&#32;Raw&#32;text&#32;files&#32;that&#32;AI&#32;tools&#32;use&#32;for&#32;website&#32;navigation&#32;hints&#32;and&#32;direct&#32;access&#32;to&#32;up-to-date&#32;API&#32;documentation.&#32;Project&#32;context&#32;files&#32;(CLAUDE.md&#32;and&#32;AGENTS.md)&#58;&#32;Markdown&#32;files&#32;in&#32;your&#32;project&#32;that&#32;provide&#32;A…&quot;&#125;&#93;"}
- **Status**: Implemented
- **Details**:
  - `/metadata/raw_toml/` – Creator-authored TOML files
  - `/metadata/processed_json/` – Machine-generated JSON (from TOML)
  - `.gitignore` excludes build artifacts; `.gitkeep` ensures directory tracking

### ✅ GUI Framework Decision
- **Goal**: Select a C++ GUI framework for signer and extractor tools.
- **Status**: Completed
- **Decision**: **Qt (LGPL-3.0)**
- **Rationale**:
  - Native UX across platforms
  - Strong tooling (Qt Creator, QML)
  - Dynamic linking ensures MIT project remains compliant
  - AppImage distribution planned

### 🟡 Signer & Extractor GUI Tools
- **Goal**: Shift from CLI to graphical interface for broader accessibility.
- **Status**: In development
- **Components**:
  - `talvix-signer`: TOML signing with key selection
  - `talvix-extractor`: YouTube API metadata → TOML export
- **Tech**: Qt6, CMake, OAuth 2.0 (extractor)

### 🟡 Documentation & Compliance
- **Goal**: Finalize project documentation and licensing.
- **Status**: In progress
- **Tasks**:
  - [x] Create `INSTALLATION.md` (Qt setup guide)
  - [x] Create `ATTRIBUTIONS.md` (third-party notices)
  - [x] Add `LICENSE.LGPL-3.0` and `LICENSE.MIT`
  - [x] Verify Qt source link: https://code.qt.io
  - [x] Confirm dynamic linking compliance

## Available

### 🔳 YouTube API Metadata Fetcher
- **Goal**: Prototype extractor for YouTube video metadata.
- **Output**: TOML → ready for signing
- **Requirements**:
  - Use YouTube Data API v3
  - OAuth 2.0 for user consent
  - Export fields: title, description, tags, thumbnails, publish date

### 🔳 Unit Testing (GoogleTest)
- **Goal**: Validate core logic. :inlineCitations{data="&#91;&#123;&quot;url&quot;&#58;&quot;https&#58;//github.com/MSiccDev/ai-context-kit&quot;,&quot;favicon&quot;&#58;&quot;https&#58;//imgs.search.brave.com/xxsA4YxzaR0cl-DBsH9-lpv2gsif3KMYgM87p26bs_o/rs&#58;fit&#58;32&#58;32&#58;1&#58;0/g&#58;ce/aHR0cDovL2Zhdmlj/b25zLnNlYXJjaC5i/cmF2ZS5jb20vaWNv/bnMvYWQyNWM1NjA5/ZjZmZjNlYzI2MDNk/N2VkNmJhYjE2MzZl/MDY5ZTMxMDUzZmY1/NmU3NWIzNWVmMjk0/NTBjMjJjZi9naXRo/dWIuY29tLw&quot;,&quot;title&quot;&#58;&quot;GitHub&#32;-&#32;MSiccDev/ai-context-kit&#58;&#32;AI&#32;Context&#32;Kit&#32;provides&#32;a&#32;...&quot;,&quot;snippet&quot;&#58;&quot;…evolved&#32;into&#32;a&#32;sophisticated&#32;architecture&#32;for&#32;AI&#32;collaboration&#58;\n\nLayered&#32;architecture&#32;–&#32;Personal&#32;user&#32;context&#32;+&#32;project&#32;AGENTS.md&#32;context&#32;create&#32;complete&#32;AI&#32;workspace&#32;configurations\n\nSkill-based&#32;workflows&#32;–&#32;Create&#32;and&#32;validate&#32;context&#32;files&#32;using&#32;reusable&#32;skills&#32;with&#32;detailed&#32;operational&#32;logic\n\nProvider-agno…&quot;&#125;&#93;"}
- **Scope**:
  - TOML/JSON parsing (`toml++`, `yyjson`)
  - Cryptographic signing/verification (OpenSSL/libsodium)
  - Metadata transformation pipeline

### 🔳 Backend Ingestion Pipeline
- **Goal**: Implement high-performance JSON ingestion.
- **Tech**: `yyjson` + `stdexec` concurrency
- **Flow**: Signed JSON → parse → verify → index

## Optional Future

### 🔮 Custom C++ UI Library
- **Goal**: Build high-performance UI layer using `stdexec`.
- **Vision**: Replace Qt with lightweight, project-native UI toolkit.
- **Status**: Conceptual

### 🔮 Migrate Tools to Custom UI
- **Goal**: Replace Qt in signer/extractor with custom library.
- **Benefit**: Smaller binary, tighter integration, full control.   
