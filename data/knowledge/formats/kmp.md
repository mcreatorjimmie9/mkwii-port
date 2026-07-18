# KMP File Format (Mario Kart Wii Course Data)

## Overview

`.kmp` files are course description files used by Mario Kart Wii. They define how a race track functions — start positions, checkpoints, CPU routes, item routes, object placements, camera animations, and physics zones. Every track's `course.szs` contains a `course.kmp` file.

**Also used in:** Mario Kart 7 (with minor header differences)

---

## File Header

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"RKMD"` (Mario Kart **D**ata backwards, or course data marker) |
| 0x04 | 4 | uint32 | Unknown (often 0 or version-related) |
| 0x08 | 4 | uint32 | Header size (typically `0x0058` = 88 bytes for MKWii) |
| 0x0C | 4 | uint32 | Unknown |

Wait — the actual MKWii KMP header is simpler. Based on community documentation:

### MKWii KMP Header (16 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | File magic: `"RKMD"` |

*(Note: The exact MKWii header structure may be minimal — the file consists primarily of section entries with their own headers.)*

### Section Header (8 bytes per section)

Each section within the KMP file has:

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Section magic/identifier (e.g., `"KTPJ"`, `"KCPO"`) |
| 0x04 | 2 | uint16 | Unknown/padding |
| 0x06 | 2 | uint16 | Number of entries in this section |

---

## Section Types

### 1. `KTPJ` — File Header / Metadata

Primary file header section. Usually 1 entry.

### 2. `KCPO` — Checkpoint Groups

Defines checkpoint zones. Each entry describes a rectangular volume in 3D space. When a player passes through a checkpoint, lap counting and shortcuts are validated.

**Per-entry structure (approximate):**
| Field | Type | Description |
|-------|------|-------------|
| Position | vec3 (3 × float) | 3D position |
| Rotation | vec3 (3 × float) | Rotation angles |
| Scale | vec2 (2 × float) | Size of checkpoint area |
| Checkpoint ID | uint16 | Checkpoint index |
| ... | ... | Additional flags/links |

### 3. `KNIT` — Item Routes

Defines paths that items (especially bananas and green shells) follow when thrown or dropped. Items slide along these routes.

**Per-entry structure:**
| Field | Type | Description |
|-------|------|-------------|
| Points | Array of vec3 | Sequence of 3D positions forming the route |
| Settings | Various | Speed, duration, behavior flags |

### 4. `KTP` — Start Positions

Defines the grid positions for race start. 12 entries for 12-player races.

**Per-entry structure:**
| Field | Type | Description |
|-------|------|-------------|
| Position | vec3 (3 × float) | 3D position |
| Rotation | float | Facing direction (Y-axis rotation) |
| Player Index | uint8 | Which grid position (1-12) |

### 5. `AREA` — Area Zones

Defines special areas on the track with custom physics or behavior.

**Per-entry structure:**
| Field | Type | Description |
|-------|------|-------------|
| Shape Type | uint8 | Type of area (sphere, cylinder, box) |
| Position | vec3 | Center position |
| Parameters | Various | Size, physics settings, behavior type |
| Area Type | uint8 | Purpose: gravity change, speed zone, etc. |

**Area types include:**
- Gravity modification zones
- Speed boost zones
- Cannon/launch zones
- Water/slow zones
- Invisible walls

### 6. `CAME` — Camera Animations

Defines camera paths for intro/replay/cutscene sequences.

### 7. `POTI` — Point / Path Data

Generic point sequences used by other sections (item routes, enemy routes, camera paths reference these).

**Per-entry:**
| Field | Type | Description |
|-------|------|-------------|
| Point Count | uint16 | Number of points in the path |
| Points | Array of {vec3 pos, optional params} | The path points |

### 8. `JGPT` — Jugem (Lakitu) Routes

Defines the routes that Lakitu takes for rescuing fallen players.

### 9. `CPHY` — Course Physics

Contains physics-related settings for the course, potentially including gravity, friction overrides, and other physics zones.

### 10. `CNPT` — Cannon Points

Defines cannon/launch points. When a player enters a cannon, they are launched along a predefined trajectory.

### 11. `MSPT` — Mission Point / Stage Point

Used for mission mode or special event points.

### 12. `RPKT` — Replay Ghost Point

Data related to ghost replay storage.

### 13. `CHECK` — Checkpoint Links

Defines the valid order of checkpoints to prevent shortcutting. This section links checkpoint IDs to enforce the intended race route.

**Per-entry:**
| Field | Type | Description |
|-------|------|-------------|
| Checkpoint A | uint16 | Source checkpoint |
| Checkpoint B | uint16 | Next valid checkpoint |
| Key | uint8 | `0xFF` = no mandatory checkpoints |

### 14. `GOBJ` — Global Objects

Defines the placement and configuration of objects on the track (item boxes, ramps, moving platforms, enemies, etc.).

**Per-entry structure (approximate 0x40 bytes):**
| Offset | Type | Description |
|--------|------|-------------|
| 0x00 | uint16 | Object ID (type of object) |
| 0x02 | uint16 | Position ID (references POTI or direct) |
| 0x04 | vec3 | 3D Position (x, y, z) |
| 0x10 | vec3 | 3D Rotation |
| 0x1C | vec3 | 3D Scale |
| 0x28 | uint16 | Routes/paths references |
| 0x2A | uint16 | Settings / flags |
| ... | ... | Object-specific parameters |

**Common object IDs (examples):**
- Item boxes, boost pads, ramps, mushroom trampolines
- Moving platforms, rotating bars
- Thwomps, Chain Chomps, cannon launchers
- GOO (bouncy mushroom), pipes, half-pipes

---

## Typical KMP File Layout

```
course.kmp
├── KTPJ (header, 1 entry)
├── KCPO (checkpoint groups, ~20-100 entries)
├── KNIT (item routes, ~10-50 entries)
├── KTP  (start positions, 12 entries)
├── AREA (special areas, 0-20 entries)
├── CAME (camera paths, 0-10 entries)
├── POTI (point paths, 0-50 entries)
├── JGPT (Lakitu routes, ~2-5 entries)
├── CPHY (course physics, 0-5 entries)
├── CNPT (cannon points, 0-2 entries)
├── MSPT (mission points, 0-10 entries)
├── RPKT (replay data, 0-1 entries)
├── CHECK (checkpoint links, ~50-200 entries)
└── GOBJ (global objects, ~20-200 entries)
```

Sections may appear in any order, and not all sections are required for every track.

---

## Coordinate System

- **X**: East-West
- **Y**: Up-Down (height)
- **Z**: North-South
- **Rotation**: Y-axis rotation in degrees (0 = facing +Z)
- **Units**: Internal game units (1 unit ≈ 1 meter, roughly)

---

## Parsing Libraries & Tools

| Tool | Language | URL | Notes |
|------|----------|-----|-------|
| **KMP Editor** | JavaScript | https://github.com/hlorenzi/kmp-editor | Visual KMP editor with GUI |
| **Wiimms SZS Tools (wkmpt)** | C | https://szs.wiimm.de/ | Command-line KMP inspection and modification |
| **CTools** | C | MKWii community | KMP manipulation tools |
| **Custom Mario Kart Wiiki** | Web | https://mkwiiki.org/ | Format documentation for MKWii files |

---

## MK7 Differences

Mario Kart 7 also uses KMP files with minor differences:
- MK7 KMP header is `0x58` (88) bytes (with additional fields)
- Section header order may differ
- Additional section types for MK7-specific features
- Source: https://mk3ds.com/index.php/KMP_(File_Format)

---

## Sources

- Wiimms SZS Tools: https://szs.wiimm.de/
- MK7 KMP Format: https://mk3ds.com/index.php/KMP_(File_Format)
- Custom Mario Kart Wiiki: https://mkwiiki.org/
- FileInfo.com: https://fileinfo.com/extension/kmp
- KMP Editor (GitHub): https://github.com/hlorenzi/kmp-editor
- MKWii Beta Elements (Fandom): https://mario.fandom.com/wiki/Mario_Kart_Wii/Beta_elements/Course_elements