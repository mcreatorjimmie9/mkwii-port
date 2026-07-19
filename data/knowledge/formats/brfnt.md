# BRFNT / BREFT Font & Effect Texture Formats

## Overview

### BRFNT (Binary Revolution FoNT)

`.brfnt` (Binary Revolution Font) is the font file format used by Nintendo Wii games, including Mario Kart Wii. It stores bitmap font data — the visual representation of text characters as texture images, along with glyph metrics (width, height, advance, bearing).

### BREFT (Binary Revolution EffeCT)

`.breft` (Binary Revolution Effect) is the effect texture format used for particle effects, UI animations, and visual effects in MKWii. It is structurally similar to BRFNT but optimized for effect sprites rather than text glyphs.

**Related formats:**
- `.bffnt` — Nintendo 3DS version of the font format (BFFNT)
- Font files in MKWii are indicated by `"RFNT"` section magic within BRRES, or as standalone `.brfnt` files.

---

## BRFNT File Format

### File Header (0x14 = 20 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"RFNT"` |
| 0x04 | 2 | uint16 | BOM: `0xFEFF` (BE) or `0xFFFE` (LE) |
| 0x06 | 2 | uint16 | Version |
| 0x08 | 4 | uint32 | File size |
| 0x0C | 2 | uint16 | Section count |
| 0x0E | 2 | uint16 | Padding |
| 0x10 | 4 | uint32 | Offset to first section |

### RFNT Header (within first section, 0x10 = 16 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Section magic: `"RFNT"` |
| 0x04 | 4 | uint32 | Section size |
| 0x08 | 1 | uint8 | Font height - 1 |
| 0x09 | 1 | uint8 | Character width - 1 |
| 0x0A | 1 | uint8 | Ascent (pixels above baseline) |
| 0x0B | 1 | uint8 | Line gap (spacing between lines) |
| 0x0C | 2 | uint16 | Character width in pixels |
| 0x0E | 2 | uint16 | Character height in pixels |
| 0x10 | 4 | uint32 | Maximum character code + 1 |

### Font File Sections

A BRFNT file contains multiple sections:

#### 1. `TGLP` — Texture GLYPH Page

Contains the actual bitmap data for font glyphs (character images).

| Field | Type | Description |
|-------|------|-------------|
| Texture format | uint8 | Wii GX texture format (CMPR, RGB565, RGBA32, etc.) |
| Sheet width | uint16 | Width of texture sheet in pixels |
| Sheet height | uint16 | Height of texture sheet in pixels |
| Cell width | uint16 | Width of each glyph cell |
| Cell height | uint16 | Height of each glyph cell |
| Base line position | uint16 | Baseline Y offset |
| Maximum character width | uint8 | Widest character pixel width |
| Sheet count | uint8 | Number of texture sheets (fonts may span multiple sheets) |
| Sheet data | varies | Raw texture data for each sheet |

**MKWii commonly uses:** `C8` (8-bit indexed with PLT0 palette) or `RGBA32` formats.

#### 2. `CWDH` — Character/WIDTH Data

Per-glyph width and advance metrics.

| Per Glyph | Type | Description |
|-----------|------|-------------|
| Left bearing | int8 | Offset from cursor to glyph left edge |
| Glyph width | uint8 | Actual drawn width of the glyph |
| Character width | uint8 | Total advance width (including spacing) |

#### 3. `CINF` — Character INFo / Mapping

Maps character codes (Unicode/codepage) to glyph indices.

#### 4. `FINF` — Font INFo

Global font metadata: font name, font type, encoding, etc.

| Field | Type | Description |
|-------|------|-------------|
| Font type | uint8 | Type of font (e.g., standard, proportional) |
| Encoding | Various | Character encoding used |
| Font name | string | Name of the font |

#### 5. `TPLY` — Texture PaYer / Layer Info

Information about how texture sheets are laid out.

#### 6. `WDTH` — WiDTH Table

Alternative/complementary width data table.

---

## Character Encoding

MKWii fonts typically use:
- **Shift-JIS** for Japanese text
- **ASCII / basic Latin** for English
- **Custom codepages** for some UI fonts

### Glyph Mapping

Characters are mapped from their code (e.g., ASCII 0x41 = 'A') to a glyph index within the TGLP texture sheet. The mapping is defined in the CINF section.

---

## BREFT File Format

### BREFT Header (0x20 = 32 bytes per sub-file)

A BREFT (effect texture) sub-file starts with a 32-byte header:

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"REFT"` |
| 0x04 | 4 | uint32 | Sub-file size |
| 0x08-0x1B | varies | | Effect metadata |
| 0x1C | 4 | uint32 | Image data offset |
| 0x20+ | varies | | Image data |

The image data follows the header. The sub-file size field counts only the image data portion (excluding the header).

### BREFT in BRRES Context

In MKWii, BREFT data is typically embedded within a BRRES file as a texture animation section (`AnmTexPat` / PAT0).

---

## MKWii Font Files

| File | Description |
|------|-------------|
| `font_EU_en.brfnt` | European English font |
| `font_EU_de.brfnt` | German font |
| `font_EU_fr.brfnt` | French font |
| `font_EU_es.brfnt` | Spanish font |
| `font_EU_it.brfnt` | Italian font |
| `font_KO.brfnt` | Korean font |
| `font_US_en.brfnt` | US English font |
| `font_JP.brfnt` | Japanese font |
| `ui_font*.brfnt` | UI-specific fonts |

These are typically found inside `ui_*.szs` archives.

---

## Parsing Libraries & Tools

| Tool | Language | URL | Notes |
|------|----------|-----|-------|
| **BrawlBox / BrawlCrate** | C# | GitHub | Can open, view, and export BRFNT font textures |
| **Wiimms SZS Tools** | C | https://szs.wiimm.de/ | Can extract BRFNT from SZS archives |
| **Layout Editor** | Various | MKWii community | Edits UI layouts that reference BRFNT fonts |
| **Switch-Toolbox** | C# | GitHub (KillzXGaming) | Can convert BRFNT ↔ BFFNT; exports font textures |
| **CTools** | C | MKWii community | Font manipulation tools |

---

## Sources

- WiiBrew (BRFNT): https://wiibrew.org/wiki/BRFNT_files
- Custom Mario Kart Wiiki (BRFNT): https://mkwiiki.org/wiki/BRFNT_(File_Format)
- Archiveteam (BRFNT): http://justsolve.archiveteam.org/wiki/BRFNT
- NSMBW Modding Database (BREFT): https://horizon.miraheze.org/wiki/.breft
- FileInfo.com (BRFNT): https://fileinfo.com/extension/brfnt
- Luma's Workshop (Layouts): https://www.lumasworkshop.com/wiki/Layouts
- Nintendo-Formats.com (BFFNT): https://nintendo-formats.com/libs/nw/bffnt.html