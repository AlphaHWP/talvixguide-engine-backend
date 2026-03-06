# Egress Prompt — Core Design

You are now generating the **core design context** for the next AI session.
Note, the output format is expected to be raw markdown source so that the file may be viewed 
in a markdown previewer. 
Please enclose the markdown in a four-backtick code block to ensure that the generated file 
can be easily copied. 

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

Please generate the appropriate core design egress context file using raw markdown source now.
After the context file is generated, please acknowledge this prompt with the below 
acknowledgment message. 

Acknowledge with: "Core design egress complete. Awaiting work units egress."  
