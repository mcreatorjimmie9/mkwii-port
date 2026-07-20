# Phase 19: Coverage Gap Analysis

**Date**: Phase 19
**Binary**: main.dol (2,749,248 bytes / 2.62 MB)
**REL**: StaticR.rel (4,902,804 bytes / 4,787.9 KB, 17 sections, big-endian)
**Relocation Delta**: `0x003F8E30` (ELF→DOL mapping)

## 1. Current Coverage Summary

| Metric | Value |
|--------|-------|
| Total `@addr` annotations | 20,327 |
| Unique addresses | 7,273 |
| DOL code size | 2,359,008 bytes (2.23 MB) |
| Code coverage | 1.23% |
| Source files | 162 |
| Existing modules | 14 |
| Coverage gaps > 64KB | **2** |

### Existing Module Footprint (sorted by DOL address)

| Module | DOL Address Range | Annotations |
|--------|-------------------|-------------|
| Runtime | 0x80006814 – 0x80325A28 | 19,234 |
| UI | 0x80107C04 – 0x80325A28 | 180 |
| AudioEngine | 0x8011727C – 0x8032ABD0 | 335 |
| Rendering | 0x801271D0 – 0x8016C1D0 | 96 |
| RaceEngine | 0x801371A8 – 0x8045ED9C | 100 |
| Network | 0x8015725C – 0x80167074 | 334 |
| ItemSystem | 0x8017BC34 – 0x803C50A4 | 48 |
| Physics, AIRace, KartMovement, Collision, Field, Scene, SaveData | Various | ~0–100 each |

> **Note**: Module ranges overlap due to shared header declarations and utility functions referenced across modules.

## 2. Coverage Gap Definitions

### Gap 1: `0x80211364` – `0x8022C76C` (DOL) / `0x8060A194` – `0x8062559C` (ELF)

| Property | Value |
|----------|-------|
| Size | 111,624 bytes (109.0 KB) |
| Instructions | 27,906 (PPC 32-bit words) |
| `blr` returns | 545 |
| `bl` calls | 1,820 |
| Estimated functions | **~545** |
| Unique external targets | 392 |
| Entropy | 6.15 bits/byte (code, not data) |

### Gap 2: `0x8022D090` – `0x80242658` (DOL) / `0x80625EC0` – `0x8063B488` (ELF)

| Property | Value |
|----------|-------|
| Size | 87,496 bytes (85.4 KB) |
| Instructions | 21,874 (PPC 32-bit words) |
| `blr` returns | 414 |
| `bl` calls | 1,276 |
| Estimated functions | **~414** |
| Unique external targets | 319 |
| Entropy | 6.05 bits/byte (code, not data) |

### Combined Gaps

| Metric | Value |
|--------|-------|
| Total size | 199,120 bytes (194.5 KB) |
| Total instructions | 49,780 |
| Estimated functions | **~959** |
| Combined external targets | 611 unique |

## 3. Binary Analysis: What Lives in the Gaps

### 3.1 Code Characteristics

- **No standard `stwu r1, -N(r1)` prologues**: Zero standard PowerPC function prologues detected across both gaps. This indicates code compiled with `-O2 -fomit-frame-pointer` or similar optimization flags that rely on the link register rather than stack frame setup for simple/leaf functions.
- **High `blr` density**: ~1 `blr` per ~52 instructions, consistent with small-to-medium C++ methods (average function ~52–80 instructions).
- **Instruction distribution** is consistent with compiled C++ code:
  - Load/store: ~29% (expected for object-oriented C++ with pointer-heavy access patterns)
  - Branch-and-link (calls): ~6.2%
  - Branches: ~2.4%
  - ALU/extended: ~3%

### 3.2 External Call Target Analysis

The 611 unique external call targets from the gap code categorize as:

| Target Category | Count | Percentage | Description |
|-----------------|-------|------------|-------------|
| OS/System Runtime (0x8000xxxx–0x800Bxxxx) | 230 | 37.6% | OSAlloc, OSReport, DVD, MEM, SC, etc. |
| Known UI/Scene/SaveData (0x8018xxxx–0x8021xxxx) | 130 | 21.3% | Calls into existing annotated modules |
| EGG/NW4R utility layer (0x8016C000–0x80178000) | 109 | 17.8% | **Unannotated** framework code |
| ItemSystem/utilities (0x8017xxxx) | 77 | 12.6% | Item + additional EGG utilities |
| Gap-internal calls | 106 | 17.3% | Functions within the gaps calling each other |
| Known Rendering (0x8012xxxx) | 2 | 0.3% | GX/rendering calls |

### 3.3 Data Reference Analysis (via `lis` instruction upper-16 targets)

| Upper-16 Address | Gap 1 | Gap 2 | Purpose |
|-----------------|-------|-------|---------|
| `0x802A0000` | 91 | 66 | **BSS globals** (0x8029FD00–0x80384DFB) |
| `0x80380000` | 95 | 43 | **Data section 6/7** (vtables, RTTI, small read-only data) |
| `0x80250000` | 30 | 31 | **Data section 4** (resource pointers, strings, NW4R descriptors) |

### 3.4 String Reference Analysis

Key strings referenced from the gap code (found in data sections):

**Scene/UI Framework:**
- `SceneCreatorStatic.cpp` — Scene factory/registration system
- `homebutton::FrameController`, `homebutton::GroupAnmController` — Home menu button handlers
- `_hmMenu_bar_in.brlan`, `_hmMenu_bar_psh.brlan`, `_link_msg_in.brlan` — UI animation files

**NW4R Graphics Library:**
- `AnmObjMatClrRes`, `AnmObjTexPat`, `AnmObjTexSrt`, `AnmObjChr`, `AnmObjShp`, `AnmScn` — NW4R animation object types
- `G3dObj`, `g3d_restex_ac.h`, `g3d_resfile_ac.h` — NW4R 3D graphics
- `Textures(NW4R)`, `LightSet(NW4R)`, `Cameras(NW4R)` — NW4R subsystem names
- `nw4hbm::lyt::Material`, `nw4hbm::lyt::ResourceAccessor`, `nw4hbm::ut::Font` — Layout/font system

**Online/Network (DWC/GameSpy):**
- `DWC_MATCH_STATE_*` — Nintendo Wi-Fi Connection matchmaking states
- `GP_LOGIN_*`, `GP_NEWUSER*`, `GP_UPDATEUI_*` — GameSpy authentication
- `sakeCreateRecord`, `sakeDeleteRecord`, `sakeUpdateRecord` — GameSpy Sake storage
- `NWC24ResumeScheduler`, `NWC24iRequestShutdown` — Nintendo Wi-Fi Connection 24

**System/Framework:**
- `EGGRootMEM1`, `EGGRootMEM2`, `EGGRootDebug`, `EGGSystem` — EGG memory heaps
- `BTM:`, `BTA_`, `GAP Inquiry`, `L2CAP`, `SDP` — Bluetooth stack (Wii Remote)
- `OSReset.c`, `OSReturnToMenu` — OS reset handlers

## 4. REL File (StaticR.rel) Analysis

| Property | Value |
|----------|-------|
| File size | 4,902,804 bytes (4,787.9 KB) |
| Sections | 17 (5 non-empty: 1 code, 2 data, 1 BSS, 1 extra) |
| Format | Big-endian |
| Version | 3 |
| BSS size | 30,896 bytes |

| Section | File Offset | Size | Notes |
|---------|------------|------|-------|
| 0 | — | 0 | BSS placeholder |
| 1 | 0x0000D5 | 3,579,964 B (3.4 MB) | **Main .text** |
| 2 | 0x37F070 | 772 B | Small code/data |
| 3 | 0x37F374 | 12 B | Tiny data |
| 4 | 0x37F380 | 140,672 B (137 KB) | **.rodata / read-only data** |
| 5 | 0x3A25C0 | 173,500 B (169 KB) | **.data / initialized data** |
| 6 | — | 30,896 B | BSS |

> **Note**: The coverage gaps are in the **DOL binary** itself, not in StaticR.rel. The REL is loaded separately at runtime. The ELF addresses (0x8060xxxx–0x8063xxxx) correspond to the original ELF's virtual layout before final DOL linking; the gap code resides at DOL addresses 0x8021xxxx–0x8024xxxx.

## 5. Functional Identification of Gap Code

Based on the combined evidence (call patterns, string references, data access patterns), the gap code falls into these functional categories:

### 5.1 Scene Management Framework (~30% of gap code)

**Estimated: ~280 functions**

- Scene creation, destruction, and transition management
- `SceneCreatorStatic.cpp` factory pattern implementation
- Scene lifecycle (init, update, draw, destroy)
- Scene stack management (push, pop, transitions)
- Integration with the existing `SceneDirector`, `SceneRace`, `SceneCaryard` modules

**Evidence**: Calls to UI/Scene modules (130 external targets), `SceneCreatorStatic.cpp` string, `homebutton` references, scene state management patterns.

### 5.2 NW4R Graphics Wrapper Layer (~25% of gap code)

**Estimated: ~240 functions**

- NW4R `g3d` (3D graphics) object management
- NW4R animation system (`AnmObj*` types: texture pattern, texture swap, color, shape, character)
- NW4R layout system (`nw4hbm::lyt::*`) integration
- NW4R font and text rendering (`nw4hbm::ut::Font`)
- Material and texture resource management

**Evidence**: 95+43=138 `lis 0x80380000` references (vtables/RTTI for NW4R types), `AnmObj*` and `G3dObj` strings, NW4R assertion messages.

### 5.3 UI Page Controller System (~20% of gap code)

**Estimated: ~190 functions**

- UI page lifecycle management (create, show, hide, destroy)
- Animation controller for UI transitions (brlan files)
- Pane/layout management and event routing
- Home button handler (`homebutton::FrameController`)
- Menu bar animation (`_hmMenu_bar_in.brlan`)
- Message display system (`_link_msg_in.brlan`)

**Evidence**: Direct adjacency to existing `PageManager` (0x8062559C) and `TimeAttackBackPage` (0x8063B488) annotations, brlan animation file references, `homebutton` namespace strings.

### 5.4 Online/Network Integration Layer (~15% of gap code)

**Estimated: ~145 functions**

- DWC (Nintendo Wi-Fi Connection) matchmaking state machine
- GameSpy authentication and profile management
- Sake (GameSpy storage) record CRUD operations
- NWC24 scheduler and connection management
- Network error handling and retry logic

**Evidence**: DWC_MATCH_STATE strings, GP_LOGIN/GP_NEWUSER strings, sake* function strings, NWC24 strings — all in data section 5 which the gap code references via `lis 0x80250000`.

### 5.5 EGG Framework Extensions (~10% of gap code)

**Estimated: ~95 functions**

- EGG heap management wrappers
- EGG threading utilities
- EGG display/rendering integration
- System-level initialization (memory, heaps, OS callbacks)

**Evidence**: 109 unique calls to unannotated 0x8016C000–0x80178000 range (EGG library), `EGGRoot*` and `EGGSystem` strings.

## 6. Existing Annotations in Gap Ranges

### Files with Annotations at Gap Boundaries

| File | Address | Location |
|------|---------|----------|
| `UI/PageManager.hpp` | 0x8062559C – 0x80625EC0 | **End of Gap 1** / between gaps |
| `UI/PageManager.cpp` | 0x8062559C – 0x80625EC0 | Same as above |
| `UI/MenuPage.hpp` | 0x8060A194 area | **Start of Gap 1** (single annotation) |
| `RaceEngine/TimeAttackBackPage.hpp` | 0x8063B488 | **End of Gap 2** |
| `RaceEngine/TimeAttackBackPage.cpp` | 0x8063B488 | Same as above |

> The PageManager annotations at 0x8062559C–0x80625EC0 sit in the **tiny bridging region** between the two gaps (only 2,396 bytes). This confirms the gaps contain the supporting framework code that PageManager builds upon.

## 7. Recommended GENESIS Modules (Priority Order)

### Priority 1: Scene Management Framework

**Rationale**: Foundation for all game scenes. Called by nearly every other module. Filling this gap provides the most cross-module benefit.

| Aspect | Detail |
|--------|--------|
| Estimated size | ~33 KB of decompiled source |
| Estimated functions | ~280 |
| Impact | Enables Scene/SceneDirector module completion |
| Key classes | `Scene`, `SceneCreator`, `SceneFactory`, scene state machine |
| Dependencies | EGG framework, Runtime (OS, Memory) |

### Priority 2: NW4R Graphics Wrappers

**Rationale**: The NW4R library is the core rendering pipeline. Understanding these wrappers is essential for the Rendering module and Scene draw calls.

| Aspect | Detail |
|--------|--------|
| Estimated size | ~28 KB of decompiled source |
| Estimated functions | ~240 |
| Impact | Enables completion of Rendering, CourseObj, Material modules |
| Key classes | `AnmObj*` family, `G3dObj`, `ResTex`, resource accessors |
| Dependencies | GX/Display, Runtime (Heap, Archive) |

### Priority 3: UI Page Controller System

**Rationale**: Directly adjacent to existing UI module. Building this connects the PageManager to the Scene framework and NW4R layout system.

| Aspect | Detail |
|--------|--------|
| Estimated size | ~22 KB of decompiled source |
| Estimated functions | ~190 |
| Impact | Completes the UI pipeline from scene to rendered page |
| Key classes | `PageController`, `PageAnimCtrl`, `HomeButtonHandler`, message system |
| Dependencies | Scene framework, NW4R layout, PageManager (existing) |

### Priority 4: Online/Network Integration (DWC/GameSpy)

**Rationale**: Contains the Wii-specific online infrastructure. Lower priority for single-player understanding but essential for completeness.

| Aspect | Detail |
|--------|--------|
| Estimated size | ~17 KB of decompiled source |
| Estimated functions | ~145 |
| Impact | Completes online multiplayer understanding |
| Key classes | DWC state machine, GameSpy auth wrapper, Sake storage |
| Dependencies | Network (existing), Runtime (Network) |

### Priority 5: EGG Framework Utility Layer (0x8016C000–0x80178000)

**Rationale**: This is the unannotated code that BOTH gaps call into heavily (109 unique targets). It's not in the gaps themselves but is a dependency. Adding this unlocks cleaner decompilation of the gap code.

| Aspect | Detail |
|--------|--------|
| Estimated size | ~48 KB (0x8016C000–0x80178000 = 48 KB) |
| Estimated functions | ~350–400 (estimated) |
| Impact | Provides context for 17.8% of all external calls from gaps |
| Key classes | `EGG::Heap`, `EGG::Thread`, `EGG::Display`, utility functions |
| Dependencies | OS runtime only |

## 8. Strategy for Closing the Gaps

### Recommended Approach

1. **Phase 20**: Create the **EGG Framework Utility** module (Priority 5) — this is the dependency that the gaps call into most. Without it, gap decompilation will produce many opaque external calls.

2. **Phase 21–22**: Create the **Scene Management Framework** (Priority 1) — the largest gap component and most cross-referenced.

3. **Phase 23**: Create **NW4R Graphics Wrappers** (Priority 2) — essential for rendering understanding.

4. **Phase 24**: Create **UI Page Controller System** (Priority 3) — ties together Scene + NW4R + existing PageManager.

5. **Phase 25**: Create **Online/Network Integration** (Priority 4) — lowest priority, optional for single-player focus.

### Expected Coverage After Completion

| Phase | Module | New Functions | Cumulative Coverage |
|-------|--------|--------------|---------------------|
| 20 | EGG Framework Utilities | ~400 | ~1.9% |
| 21–22 | Scene Management | ~280 | ~2.4% |
| 23 | NW4R Graphics Wrappers | ~240 | ~2.8% |
| 24 | UI Page Controllers | ~190 | ~3.1% |
| 25 | Online Integration | ~145 | ~3.4% |

> Closing both gaps would add ~959 functions, raising total from 7,273 to ~8,232 unique addresses and code coverage from 1.23% to ~1.4%.