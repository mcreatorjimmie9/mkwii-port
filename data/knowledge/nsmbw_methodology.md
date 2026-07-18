# NSMBW Decompilation Methodology

> Source: https://nsmbw-community.github.io/NSMBW-Decomp/ and https://github.com/NSMBW-Community/NSMBW-Decomp
> Fetched: 2025-01-29

---

## 1. Project Overview

The New Super Mario Bros. Wii decompilation project produces an **exact binary-matching** reconstruction of the game's code. When compiled, the resulting `.dol` and `.rel` files must match the original PALv1 binaries **byte-for-byte**.

The game was written in a mix of C and C++, compiled by the **Metrowerks CodeWarrior** compiler for PowerPC.

## 2. Binary Structure

The game's code is physically divided into five files:

| File | Type | Description |
|------|------|-------------|
| `main.dol` | Primary executable | Statically linked, always loads at the same memory address. Akin to an `.exe` file. |
| `d_profileNP.rel.LZ` | Dynamic library | Dynamically loaded/linked after health & safety screen. |
| `d_basesNP.rel.LZ` | Dynamic library | Game base classes. |
| `d_enemiesNP.rel.LZ` | Dynamic library | Enemy implementations. |
| `d_en_bossNP.rel.LZ` | Dynamic library | Boss implementations. |

The `.rel` files function like `.dll` files — they are technically relocatable but deterministically load at the same addresses.

## 3. Code Structure (Logical Hierarchy)

The codebase is organized into five major layers:

### 3.1 C Standard Library (`stdlib`)
- PowerPC implementation of the C standard library.
- Written in C.

### 3.2 RVL (Revolution SDK)
- Nintendo's official Wii SDK providing hardware interface APIs.
- Written in C, used in every Wii game.
- Categories: OS, GX (graphics), AX (audio), MEM (memory), SI (serial), IPC, DVD, etc.

### 3.3 NW4R (NintendoWare 4 Revolution)
- Middleware library for graphics, audio, text rendering, disc reading, debugging.
- Written in C++.
- Proprietary file formats with associated export tools.
- Available to licensed third-party developers upon request.

### 3.4 EGG
- Higher-level middleware built on top of RVL.
- Written in C++.
- **NOT available to third-party developers** — Nintendo internal only.
- Used by MKWii, NSMBW, and other first-party Wii games.

### 3.5 Game-Specific Code
Divided into sub-layers:
- **Framework** (`f` prefix): Base game engine classes.
- **sLib** (`s` prefix): Math utilities and the state system.
- **mLib** (`m` prefix): Wraps EGG/NW4R/RVL into higher-level APIs.
- **snd**: Application-layer sound API.
- **cLib** (`c` prefix): Various utility classes.
- **Game code** (`d` prefix): Truly game-specific code (levels, entities, etc.).

## 4. Build Process (Three Stages)

### Stage 1: Compilation
All decompiled C/C++ source files are compiled into object files in `bin/compiled/`.

### Stage 2: Slicing
Parts of the binary **without** corresponding source files are extracted from the original binaries. Slice information is defined in the `slices/` directory. Produces object files in `bin/sliced/`.

### Stage 3: Linking & Rebuilding
Compiled and sliced object files are linked together to reconstruct the final `.dol` and `.rel` files.

**Key files:**
- `alias_db.txt`: Relocation helpers for rebuilding `.rel` files.
- `syms.txt`: Known symbol names for `main.dol`.
- `configure.py`: Generates the Ninja build script.
- `progress.py`: Calculates and displays decompilation progress.

## 5. Tools Used

| Tool | Purpose |
|------|---------|
| **CodeWarrior for Embedded PowerPC** | Original compiler (v1.1, `mwcceppc.exe`), run via WINE or wibo |
| **objdiff** (encounter/objdiff) | Binary diffing for decompilation work |
| **decomp.me** | Collaborative function matching website |
| **Ninja** | Build system (fast, parallel builds) |
| **wibo** | Minimal 32-bit Windows binary wrapper for Linux/macOS |
| **WINE** | Alternative Windows binary runner |
| **Doxygen** | Source documentation generation |
| **ppcdis** (Seeky's) | PowerPC disassembler for auto-generating assembly |

## 6. SDK Code vs Game Code Handling

### Shared Infrastructure (Already Available)
Both NSMBW and MKWii share:
- **RVL SDK** — identical across all Wii games
- **NW4R** — shared middleware, though versions may differ
- **EGG** — shared Nintendo-internal middleware
- **MSL** — Metrowerks Standard Library (C runtime)

### Approach to SDK Code
- SDK libraries are decompiled as part of the project.
- They are maintained in the `source/lib/` directory, separated from game code.
- This separation allows potential sharing across Wii decompilation projects.

### Approach to Game Code
- Game code lives in `source/dol/` (for main.dol) and per-REL subdirectories.
- Further separated into logical subdirectories: `framework/`, `sLib/`, `mLib/`, etc.
- Constants that appear in multiple TUs go into `constants/game_constants.h`.
- Japanese text strings go into `constants/sjis_constants.h`.

## 7. Code Style & Conventions

- **Line limit**: 100 characters
- **Naming**: Known symbols must match exactly (including typos)
- **Member variables**: Prefixed with `m` (and `p` if pointer)
- **Static members**: Prefixed with `s` (and `p` if pointer)
- **Unknown functions**: Use camelCase
- **Pointer style**: `*`/`&` near the variable name
- **Casts**: Use C-style casts
- **Enums**: Tag is `UPPERCASE_e`, identifiers are `UPPERCASE`, global enum IDs must be prefixed
- **File extensions**: `.cpp`/`.hpp` for C++, `.c`/`.h` for C, `.s` for ASM
- **Nonmatching code**: Use `NONMATCHING` macro with explanatory comment
- **Documentation**: Doxygen with `@` commands; `@unofficial` for uncracked symbols
- **Class member order**: Nested types → Functions (static last) → Variables (static last) → Friends

## 8. Decompilation Progress (as of Jan 2025)

| Binary | Code Bytes Done | Total | Progress |
|--------|----------------|-------|----------|
| wiimj2d.dol | 492,240 | 3,054,592 | ~16.1% |
| d_profileNP.rel | 8,120 | 8,120 | 100% |
| d_basesNP.rel | 14,688 | 1,859,588 | ~0.8% |
| d_enemiesNP.rel | 25,120 | 1,221,672 | ~2.1% |
| d_en_bossNP.rel | 112 | 356,396 | ~0.03% |

## 9. Lessons Applicable to MKWii

### 9.1 Shared SDKs Mean Shared Decompilation Effort
NSMBW and MKWii both use RVL, NW4R, and EGG. Any SDK decompilation from one project can potentially be reused in the other. The MKWii repo already has substantial SDK decompilation.

### 9.2 Slicing/Build Architecture is Nearly Identical
Both projects use the same fundamental approach:
- Slice definitions mapping address ranges to translation units
- Auto-generated ASM for non-decompiled regions
- Ninja build system
- Byte-for-byte verification
- CodeWarrior compiler via wibo/WINE

### 9.3 The "framework" Pattern
NSMBW identifies a base game engine (`f`-prefixed classes) that appears to be extensively reused by Nintendo. MKWii's structure (`RKSystem`, `SceneCreator`, etc.) likely follows similar patterns. Studying NSMBW's framework may accelerate MKWii decompilation.

### 9.4 REL/DOL Splitting is the Same Challenge
Both games split code across a main `.dol` and multiple `.rel` files. The MKWii repo has `main.dol` + `StaticR.rel`; NSMBW has `wiimj2d.dol` + 4 REL files. The tooling and techniques for handling REL rebuilding are directly transferable.

### 9.5 Symbol Recovery
NSMBW benefited from recovered symbol names (referenced at rootcubed.dev/nsmbw-symbols). MKWii has its own symbol map (`symbols.txt`), and the approach to managing and refining symbols is shared.

### 9.6 NONMATCHING Macro Pattern
NSMBW's approach of using a `NONMATCHING` macro for code that doesn't yet match but is functionally correct is a practical pattern. This allows progress to continue on other functions while difficult matches are deferred.

### 9.7 Documentation-Driven Development
NSMBW's use of Doxygen for generating source documentation is noteworthy. This creates browsable HTML documentation that helps contributors understand the codebase structure, which would be valuable for MKWii as well.