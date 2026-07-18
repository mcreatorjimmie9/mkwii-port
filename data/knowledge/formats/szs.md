# SZS File Format (YAZ0 + U8 Archive)

## Overview

`.szs` files are the primary container format used in Mario Kart Wii for game assets (tracks, models, textures, sounds, UI). An SZS file is a **YAZ0-compressed U8 archive**. All MKWii U8 files are compressed using YAZ0 and stored as `.szs` files. (In contrast, NSMBW uses uncompressed `.arc` files.)

**Related extensions:** `.arc`, `.sarc`, `.carc`, `.szs`

## Layer Structure

```
SZS File
├── YAZ0 Compression Layer (outermost)
│   └── U8 Archive (decompressed payload)
│       ├── U8 Header (0x20 bytes + padding)
│       ├── Node Table (file/directory entries)
│       ├── String Table (null-terminated filenames)
│       └── File Data Section (actual file contents)
```

---

## YAZ0 Compression

### Header (16 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"Yaz0"` (0x59 0x61 0x7A 0x30) |
| 0x04 | 4 | uint32 BE | Size of uncompressed data (big-endian) |
| 0x08 | 8 | - | Padding (typically zeros, unused) |

### Compression Algorithm

YAZ0 is a Nintendo-designed LZ77-style compression:

1. **Flag byte** is read (8 bits, each bit = 1 command):
   - **Bit = 1 (literal):** Next byte is copied verbatim to output.
   - **Bit = 0 (back-reference):** Next 2 bytes encode a match:
     - High nibble of first byte + high 4 bits of second byte = **length - 2** (min 2, max 258)
     - Low nibble of first byte = **distance high bits**, second byte low 8 bits = **distance low bits** (combined 12-bit distance, max 4096 bytes back)
   - Bits are processed MSB first (bit 7 first).

2. Repeat until all input consumed.

### Pseudocode

```c
while (output_pos < uncompressed_size) {
    uint8_t flags = read_byte();
    for (int bit = 7; bit >= 0; bit--) {
        if (flags & (1 << bit)) {
            // Literal
            output[output_pos++] = read_byte();
        } else {
            // Back-reference
            uint8_t b1 = read_byte();
            uint8_t b2 = read_byte();
            int length = ((b1 >> 4) << 8 | b2) + 3;
            int dist = ((b1 & 0x0F) << 8 | b2);
            // Actually: length = (b1 >> 4) + 3, dist formed from remaining bits
            // Copy 'length' bytes from output at (output_pos - dist - 1)
            for (int i = 0; i < length; i++) {
                output[output_pos] = output[output_pos - dist - 1];
                output_pos++;
            }
        }
    }
}
```

### Sources
- Wiibrew (YAZ0 references)
- Just Solve the File Format Problem (archiveteam.org/wiki/Yaz0)
- Wiimms SZS Tools source code

---

## U8 Archive Format

### Header (0x20 = 32 bytes)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | uint32 BE | Tag/Magic: `0x55AA382D` (ASCII: `"U≦8-"`) |
| 0x04 | 4 | uint32 BE | Root node offset (always `0x20`) |
| 0x08 | 4 | uint32 BE | Header size (from root_node to end of string table) |
| 0x0C | 4 | uint32 BE | Data offset (rootnode_offset + header_size, aligned to `0x40`) |
| 0x10 | 16 | uint8[16] | Zeroes (padding) |

### Node Table

Immediately follows the header (at offset 0x20). Each node is **12 bytes**:

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 1 | uint8 | Type flag: `0x00` = file, `0x01` = directory |
| 0x01 | 3 | uint24 | Name offset (from start of string table) |
| 0x04 | 4 | uint32 BE | Data offset (absolute from start of U8 header; unused for dirs) |
| 0x08 | 4 | uint32 BE | Data size (file size, or last node index for dirs) |

**For files** (type = `0x00`):
- `data_offset` = absolute offset to file contents
- `size` = file size in bytes

**For directories** (type = `0x01`):
- `data_offset` = unused (0 or 1; in MKWii, specifies parent directory index)
- `size` = node number of the **last** file in this directory (counting root as node 1)

The first node is always the **root node**. Its `size` field tells you the total number of nodes.

### String Table

Follows the node table. Contains null-terminated ASCII filenames. Each node's `name_offset` field points into this table (offset from the string table's start).

### File Data

Begins at `data_offset` (aligned to 0x40). Contains the actual file contents referenced by each file node.

### Example Structure

```
Node 1: [DIR]  root      -> size=7 (7 total nodes)
Node 2: [DIR]  meta      -> size=7
Node 3: [DIR]  course    -> size=7
Node 4: [FILE] course.kmp
Node 5: [FILE] course.kcl
Node 6: [FILE] course.bmdlr (BRRES model)
Node 7: [FILE] course.bcamer (BRRES animation)
```

---

## Parsing Libraries & Tools

| Tool | Language | URL | Notes |
|------|----------|-----|-------|
| **Wiimms SZS Tools (wszst)** | C | https://szs.wiimm.de/ | Most comprehensive; can extract, create, modify SZS/U8 files |
| **BrawlBox / BrawlCrate** | C# | GitHub | GUI tool for SZS and BRRES |
| **CTools (SZS Tool)** | C | MKWii community | Older but functional |
| **libWiiPy** | Python | docs.ninjacheetah.dev | Python library for U8 archive parsing |
| **Rust szs crate** | Rust | crates.io | Rust implementation |

## MKWii-Specific SZS Files

| File | Contents |
|------|----------|
| `course.szs` | Track model (BRRES), KMP (course data), KCL (collision), etc. |
| `race_common.szs` | Shared race assets |
| `mii.szs` | Mii character models |
| `ui_*.szs` | UI elements, fonts (BRFNT), layouts |
| `Sound.szs` | Sound data (BRSAR references) |
| `item_*.szs` | Item models and effects |

---

## Sources

- WiiBrew: https://wiibrew.org/wiki/U8_archive
- NSMBW Modding Database (Miraheze): https://horizon.miraheze.org/wiki/Wii_U8_Archive
- Archiveteam (YAZ0): http://justsolve.archiveteam.org/wiki/Yaz0
- Wiimms SZS Tools: https://szs.wiimm.de/wszst
- FileFormat.com (U8): https://docs.fileformat.com/game/u8