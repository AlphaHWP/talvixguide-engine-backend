# Work Units Egress

## In Progress
- Create and upload Qt6 AppImage for portable distribution
- Create BUILD_INSTRUCTIONS.md for build and install guidance
- Create roadmap to support mobile users (Android/iOS)
- Finalize metadata directory structure (`/raw_toml`, `/processed_json`)
- Implement core signing/verification flow with libsodium
- Draft modular context files (`gui.md`, `crypto.md`, etc.)

## Available
- Prototype YouTube API metadata fetcher (→ TOML export)
- Add unit tests using GoogleTest (parsing, crypto, ingestion)
- Implement backend ingestion pipeline with yyjson and stdexec
- Set up GitHub Actions for CI/CD (build, test, lint)
- Create INSTALLATION.md for Qt6 setup
- Generate ATTRIBUTIONS.md and license files (MIT, LGPL-3.0)
- Incorporate OpenProject and GitHub Projects
- Design modular UI programs and components
- Design desired UI programs to be composable and replaceable
- Support unsigned metadata files
- Transparency for algorithms and users for unsigned metadata
- Add support for thumbnails to both the metadata and the frontend
- Optionally support direct media resource access, like videos, images, and text, through plugins on the frontend
- Design the main Qt6 frontend interface
- Support IPC and embedded modes for the backend, algorithms, and frontend integration

## Optional
- Create installation package (Flatpak, MSI, DMG) for non-technical users
- Build high-performance C++ UI library using stdexec (replace Qt long-term)
- Migrate signer/extractor tools to custom UI library
- Support JWKS for automated key discovery (future trust model)   
