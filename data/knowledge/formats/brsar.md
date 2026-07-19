# BRSAR / BRSTM Sound Formats

## Overview

`.brsar` (Binary Revolution Sound ARchive) is the sound bank/archive format used by Nintendo Wii games including Mario Kart Wii. It contains references to individual sound files (typically BRSTM) along with metadata for sound grouping, sequencing, and playback.

`.brstm` (Binary Revolution STreaM) is the individual audio file format containing ADPCM-compressed audio data.

---

## BRSTM File Format

### Header (64 bytes total)

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"RSTM"` |
| 0x04 | 4 | uint32 | File size |
| 0x08 | 4 | uint16 | Endianness: `0xFEFF` (BE) or `0xFFFE` (LE) |
| | | uint16 | Version/Format info |
| 0x0C | 4 | uint16 | File sections offset (usually 0x40) |
| | | uint16 | Unknown |
| 0x10 | 4 | uint32 | HEAD chunk offset |
| 0x14 | 4 | uint32 | HEAD chunk size |
| 0x18 | 4 | uint32 | ADPC chunk offset |
| 0x1C | 4 | uint32 | ADPC chunk size |
| 0x20 | 4 | uint32 | DATA chunk offset |
| 0x24 | 4 | uint32 | DATA chunk size |
| 0x28-0x3F | 24 | - | Padding/zeros |

### HEAD Chunk (~256 bytes)

Contains metadata about the audio:

| Field | Type | Description |
|-------|------|-------------|
| Codec | uint8 | Audio codec (0 = ADPCM) |
| Loop flag | uint8 | 1 = looping, 0 = one-shot |
| Channel count | uint8 | 1 (mono) or 2 (stereo) |
| Sample rate | uint16 | e.g., 32000, 44100, 48000 Hz |
| Loop start sample | uint32 | Sample index for loop start |
| Total samples | uint32 | Total number of samples |
| Block size | uint32 | ADPCM block size in samples |
| Num blocks | uint32 | Total number of ADPCM blocks |
| Samples per block | uint32 | Samples in each ADPCM block |
| Last block samples | uint32 | Samples in the final (potentially shorter) block |
| ADPCM info | varies | Per-channel ADPCM coefficients and initial predictor/yn values |

### ADPC Chunk (~1216 bytes)

Contains ADPCM loop filter state and prediction coefficients for each channel:

- **Loop filter state**: yn1, yn2 values at the loop point
- **Prediction coefficients**: 8 coefficient pairs per channel
- Chunks are padded to multiples of `0x20`

### DATA Chunk

The actual audio data:

- **Format**: Nintendo ADPCM (DSP-ADPCM)
- **Layout**: Sequential blocks, each containing N ADPCM-encoded nibbles
- Each nibble = 4 bits, decoded using prediction coefficients and adaptive scale
- Data is aligned/padded appropriately

### ADPCM Decoding (Simplified)

```
For each sample nibble (4 bits):
  1. Sign-extend nibble to int
  2. Multiply by step size (adaptive quantization table)
  3. Add prediction: sample = coeff[0]*yn1 + coeff[1]*yn2 + decoded_nibble
  4. Clamp to 16-bit range
  5. Update yn2 = yn1, yn1 = sample
  6. Update step size index based on nibble value
```

---

## BRSAR File Format (Sound Archive)

### Header Structure

| Offset | Size | Type | Description |
|--------|------|------|-------------|
| 0x00 | 4 | char[4] | Magic: `"RSAR"` |
| 0x04 | 4 | uint32 | File size |
| 0x08 | 4 | uint16 | Endianness marker |
| | | uint16 | Version |
| 0x0C | 4 | uint16 | Section count |
| | | uint16 | Padding |
| 0x10 | 4 | uint32 | Symb section offset (sound info/symbols) |
| 0x14 | 4 | uint32 | Symb section size |
| 0x18 | 4 | uint32 | Info section offset (file references) |
| 0x1C | 4 | uint32 | Info section size |
| 0x20+ | ... | ... | Additional sections (FILE, WAVE, etc.) |

### Key Sections

1. **SMBL / Symb**: Symbol table — maps sound effect IDs to names and file indices
2. **INFO**: File info — contains references to individual sound files (BRSTM) with offsets and sizes
3. **FILE**: File data — the actual BRSTM audio data, embedded in the archive
4. **WAVE**: Wave info — metadata about each sound (sample rate, channels, loop info)

### Structure Hierarchy

```
BRSAR Archive
├── Header
├── Symb Section (Sound symbols/names)
│   ├── Sound groups (e.g., "BGM", "SFX", "Voice")
│   └── Individual sound entries with IDs
├── Info Section (File references)
│   ├── File records (offset to BRSTM data, sizes)
│   └── Wave records (audio metadata)
├── File Section (Actual BRSTM data)
│   ├── BRSTM 1 (e.g., race music track 1)
│   ├── BRSTM 2 (e.g., race music track 2)
│   └── ...
└── (Optional) Other sections
```

### MKWii Sound Categories

The MKWii BRSAR (`Sound.brsar`, referenced from `Sound.szs`) contains:

| Category | Description |
|----------|-------------|
| BGM | Background music for all 32 tracks + battle/Menu themes |
| SFX | Sound effects (engine, drift, items, collisions, UI) |
| Voice | Character voice clips |
| Ambient | Environmental sounds (crowd, wind, etc.) |

---

## Parsing Libraries & Tools

| Tool | Language | URL | Notes |
|------|----------|-----|-------|
| **BrawlBox / BrawlCrate** | C# | GitHub | Can open and extract BRSAR/BRSTM files |
| **BRSTM Converter** | Various | community | Converts BRSTM to WAV/MP3 |
| **VGMStream** | C | https://vgmstream.hcs64.com/ | Universal game audio decoder, supports BRSTM |
| **brawltools / BrawlLib** | C# | GitHub | C# library for BRSAR/BRSTM parsing |
| **Nintendo Sound Tools** | Various | community | Various utilities |
| **Foobar2000 + vgmstream plugin** | — | — | Playback of BRSTM files |
| **Nikku** | — | blog.kenrick95.org | Web-based BRSTM tool |

---

## Sources

- WiiBrew (BRSTM): https://wiibrew.org/wiki/BRSTM_file
- NSMBW Modding Database (BRSAR): https://horizon.miraheze.org/wiki/.brsar
- Archiveteam (BRSTM): http://justsolve.archiveteam.org/wiki/Nintendo_GameCube_/_Wii_BRSTM
- Kenrick95 (Nikku): https://blog.kenrick95.org/2019/04/nikku
- Luma's Workshop (BRS): https://www.lumasworkshop.com/wiki/BRS_(File_Format)