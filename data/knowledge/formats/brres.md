# BRRES File Format (Binary Revolution Resource)

## Overview

`.brres` (Binary Revolution Resource) is Nintendo's primary 3D asset container format for the Wii. Used extensively in Mario Kart Wii for models, textures, animations, palettes, and scene data. BRRES files themselves are **uncompressed** but are typically stored inside SZS-compressed U8 archives in MKWii.

**Sub-format identifiers:**
- `.brres` = Container archive
- `.brmdl` / `mdl0` = 3D Model
- `.brtex` / `tex0` = Texture
- `.brmta` = Material animation (SRT0, PAT0, CLR0)
- `.brsha` / `shp0` = Shape/morph animation
- `.brcha` / `chr0` = Bone/skeletal animation
- `.brfnt` / `fnt0` = Font (separate format but related)

---

## BRRES Container Header (0x10 = 16 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"bres"` (0x62 0x72 0x65 0x73) |
| 0x04 | 2 | uint16 | BOM (Byte Order Mark): `0xFEFF` = big-endian, `0xFFFE` = little-endian |
| 0x06 | 2 | uint16 | Padding (usually `0x0000`; some formats like BREFT use this as version) |
| 0x08 | 4 | uint32 | Total file size in bytes |
| 0x0C | 2 | uint16 | Offset to root section (relative to file start; usually `0x0010`) |
| 0x0E | 2 | uint16 | Number of sections (including root) |

---

## Root Section

Immediately follows the main header at offset 0x10. The root section header is **8 bytes**:

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Section magic: `"root"` |
| 0x04 | 4 | uint32 | Length of root section in bytes |

### Root Index Group

The root section contains a **BRRES Index Group** — a binary tree structure that organizes sub-entries into folders. The entries point to more index groups (folders) which ultimately point to the actual data sections (MDL0, TEX0, etc.).

---

## Sub-File Section Types

Each sub-file in a BRRES has a 4-byte ASCII identifier and is organized into folders:

| Identifier | Folder Name (in root) | Subfolder | Description |
|------------|----------------------|-----------|-------------|
| `MDL0` | `3DModels(NW4R)` | — | 3D model data (vertices, faces, bones, materials) |
| `TEX0` | `Textures(NW4R)` | — | Texture data (various formats: CMPR, RGB565, RGBA32, etc.) |
| `SRT0` | `AnmTexSrt(NW4R)` | — | Texture SRT (Scale/Rotate/Translate) animation |
| `CHR0` | `AnmChr(NW4R)` | — | Bone/skeletal (character) animation |
| `PAT0` | `AnmTexPat(NW4R)` | — | Texture pattern swap animation |
| `CLR0` | `AnmClr(NW4R)` | — | Color change animation |
| `SHP0` | `AnmShp(NW4R)` | — | Shape/morph animation (polygon morphing, e.g., flags) |
| `SCN0` | `AnmScn(NW4R)` | `LightSet(NW4R)` / `AmbLights(NW4R)` / `Lights(NW4R)` / `Fogs(NW4R)` / `Cameras(NW4R)` | Scene animation (lighting, fog, cameras) |
| `PLT0` | `Palettes(NW4R)` | — | Color palettes for CI4/CI8 indexed textures |
| `VIS0` | `AnmVis(NW4R)` | — | Bone visibility animation (not seen in MKWii) |

---

## Index Group Structure

BRRES uses a binary tree index to organize entries. Each index group node contains:

- **Entry ID**: Computed from folder ID and a per-folder index
- **Left/Right child indices**: For tree traversal
- **Data offset**: Points to the actual section data

### ID Calculation

The ID is a 16-bit value where:
- High byte = folder/group index
- Low byte = entry index within that folder

---

## MDL0 (Model) Sub-Format — Key Details

The MDL0 section is the most complex sub-format. Key components:

1. **MDL0 Header**: Magic `"MDL0"`, size, format version
2. **Bones (Joint Data)**: Skeletal hierarchy with transform matrices
3. **Vertices**: Position data (can be indexed)
4. **Normals**: Vertex normals
5. **Colors (Vertex Colors)**: Per-vertex RGBA
6. **UV Coordinates**: Texture mapping coordinates
7. **Materials**: Shader/material definitions referencing textures
8. **Draw Calls (Displays/Meshes)**: Indexed face data for rendering
9. **Envelope Data**: Skin weights for bone-driven vertex deformation

### MKWii-Specific Notes
- MKWii uses BRRES version `0x0008` (or `0x000B` in some cases)
- Models typically use NW4R rendering pipeline
- Vertex format is flexible per-vertex set

---

## TEX0 (Texture) Sub-Format — Key Details

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"TEX0"` |
| 0x04 | 4 | uint32 | Section size |
| 0x08 | 4 | uint16 | Number of images |
| ... | ... | ... | Image data entries |

### Supported Texture Formats (Wii GX)

| Format Code | Name | Description |
|-------------|------|-------------|
| `0x00` | I4 | 4-bit intensity (grayscale) |
| `0x01` | I8 | 8-bit intensity |
| `0x02` | IA4 | 4-bit intensity + 4-bit alpha |
| `0x03` | IA8 | 8-bit intensity + 8-bit alpha |
| `0x04` | RGB565 | 16-bit RGB (5-6-5) |
| `0x05` | RGB5A3 | 16-bit RGB+Alpha (3-bit or 1-bit alpha) |
| `0x06` | RGBA32 | 32-bit RGBA (8-8-8-8) |
| `0x08` | C4 | 4-bit indexed (CI4) |
| `0x09` | C8 | 8-bit indexed (CI8) |
| `0x0A` | C14X2 | 14-bit indexed (CI14) |
| `0x0B` | CMPR | S3TC compressed (DXT1-like, 4x4 blocks) |
| `0xE` | C8 (with PLT0) | CI8 with external palette |

---

## String Pool & Naming

BRRES files contain a string pool for entry names. Two naming conventions exist:

1. **Old format**: Names are stored as null-terminated C strings directly
2. **Current format**: Names are stored with a length prefix (more efficient for lookups)

---

## Parsing Libraries & Tools

| Tool | Language | URL | Notes |
|------|----------|-----|-------|
| **BrawlBox / BrawlCrate** | C# | GitHub | Most full-featured BRRES editor. Can view/edit MDL0, TEX0, CHR0, etc. |
| **BRRESViewer** | C++ | VG-Resource community | Lightweight viewer/exporter for models, textures, animations |
| **Wiimms SZS Tools** | C | https://szs.wiimm.de/ | Can list, extract, and modify BRRES contents |
| **brres (Rust crate)** | Rust | https://crates.io/crates/brres | Rust library for BRRES parsing |
| **CTools** | C | MKWii community | Command-line BRRES tools |
| **Noesis** | C++ | Rich Whitehouse | 3D viewer that can import BRRES models |
| **libWiiPy** | Python | docs.ninjacheetah.dev | Python BRRES support |

---

## MKWii BRRES Files

| BRRES File | Contents |
|------------|----------|
| `model.brres` (in course.szs) | Track 3D model (MDL0), textures (TEX0), animations |
| `kart_*.brres` | Vehicle models |
| `driver_*.brres` | Character models |
| `item_*.brres` | Item models (banana, shell, mushroom, etc.) |
| `effect_*.brres` | Particle effects and visual effects |

---

## Sources

- VG Resource Wiki: https://wiki.vg-resource.com/BRRES
- NSMBW Modding Database (Miraheze): https://horizon.miraheze.org/wiki/.brres
- Retro Reversing: https://www.retroreversing.com/wii-file-formats
- docs.rs (brres crate): https://docs.rs/brres
- Wiimms SZS Tools documentation: https://szs.wiimm.de/