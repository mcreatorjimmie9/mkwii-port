# Mario Kart Wii PC Port - Source Modules

This directory contains the classified and organized decompiled functions
from StaticR.rel (the main game logic module).

## Module Overview

| Module | Description | Functions |
|--------|-------------|-----------|
| Physics | Player physics, boost, drift, tricks, wheelie | See _manifest.json |
| KartMovement | Kart dynamics, suspension, tires, steering | See _manifest.json |
| Collision | Kart-kart and kart-course collision | See _manifest.json |
| RaceEngine | Race flow, state machine, timing | See _manifest.json |
| AIRace | AI driver behavior and pathfinding | See _manifest.json |
| ItemSystem | Item spawning, behavior, roulette | See _manifest.json |
| Network | Online networking and packets | See _manifest.json |
| UI | Menus, pages, controls | See _manifest.json |
| Audio | Sound effects, music, voice | See _manifest.json |
| Rendering | Graphics, display, camera | See _manifest.json |
| Scene | Course objects, effects, map objects | See _manifest.json |
| Runtime | EGG engine, memory, system | See _manifest.json |
| Data | Static data, vtables, RTTI | See _manifest.json |

## Classification Method

Functions are classified using:
1. **Known symbols** (highest confidence) - Exact address matches from community symbol databases
2. **Address range analysis** - Functions near known modules are likely in the same module
3. **Code pattern analysis** - Float-heavy = physics, vtable calls = C++ methods, etc.

## Naming Convention

- Known functions retain their original names (e.g., `ItemObj_update`)
- Unknown functions get generated names like `phys_PlayerSub10_calc_80578040`
- Address suffix preserved for traceability

## Source decompiled files

The raw decompiled .c files (48MB total) are in:
`/home/z/my-project/data/ghidra_staticr/`

Each module's `_manifest.json` maps addresses to source files.
