# Egress Prompt — Core Design

You are now generating the **core design context** for the next AI session.

## Transfer Keywords
- **SESSION_HANDOFF**
- **CORE_DESIGN_TRANSFER**
- **PRESERVE_ARCHITECTURE**
- **CONTINUE_PROJECT**

## Instructions
Preserve and transfer the following:
- Vision and scope of Talvixguide Engine
- Major components: backend, signer, extractor, frontend
- Data flow: extraction → signing → ingestion → discovery
- Technology stack: C++23/26, stdexec, toml++, yyjson, libsodium
- Architectural constraints: decentralized trust, performance, LGPL compliance

Generate the **core design prompt** exactly as structured in the ingestion phase.

Acknowledge with: "Core design egress complete. Awaiting work units egress."   
