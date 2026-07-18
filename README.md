# Mario Kart Wii AI-Assisted Decompilation & PC Port

## Project Overview
AI-assisted decompilation of Mario Kart Wii (Wii, 2008) to produce a readable, modifiable C++ PC port.

## Architecture
- **MAESTRO** (Master Agent): Orchestrates subagents, manages state via GitHub
- **Copyparty**: Self-hosted binary file server (original game files)
- **GitHub**: All generated code, knowledge, reports, and project state

## Approach
- Clean-room reconstruction (NOT matching/byte-identical decompilation)
- Functional PC port: Wii SDK calls replaced with PC equivalents (SDL2, OpenGL, OpenAL)
- Microtask dispatch: subagents handle atomic tasks (50-100 functions at a time)

## Binary Targets
- `main.dol` — SDK/framework libraries (nw4r, EGG, RTL) — lower priority
- `StaticR.rel` — Game logic (physics, items, AI, rendering, UI) — **priority target**

## Progress
See `data/reports/heartbeat.json` for live state.

## Legal Note
Original game files remain on the user's copyparty server. Only generated C++ source
code and converted assets are stored in this repository (clean-room reconstruction).
