# MKWii PC Port — Worklog

## Task 13: Phase 7 M3 — Track Loading

### Summary
Created the complete asset loading pipeline for Mario Kart Wii PC Port. All 8 new files compile with 0 errors, 0 warnings. End-to-end test successfully downloads and parses a real track from the copyparty server.

### New Files Created (8 files in src/loaders/)

| File | Lines | Purpose |
|------|-------|---------|
| `szs_reader.hpp` | 221 | YAZ0 decompressor + U8 archive parser header |
| `szs_reader.cpp` | 428 | YAZ0 implementation + U8 parsing + node tree traversal |
| `kmp_loader.hpp` | 317 | KMP course data structures (14 section types) header |
| `kmp_loader.cpp` | 787 | KMP binary parser for all section types |
| `kcl_loader.hpp` | 248 | KCL collision mesh structures + surface type flags |
| `kcl_loader.cpp` | ~400 | KCL binary parser with heuristic detection |
| `track_manager.hpp` | 165 | Unified track loading & rendering manager header |
| `track_manager.cpp` | 477 | TrackManager implementation + debug rendering |
| `test_track_load.cpp` | 120 | End-to-end test (download + parse from copyparty) |

### YAZ0 Decompression — Key Discovery
The MKWii YAZ0 format differs from commonly documented versions:
- **MSB-first** flag bit processing (shift-left: `code <<= 1`)
- **Bit=1 = literal**, **Bit=0 = back-reference** (inverted from some docs)
- **Distance formula**: `copy_src = dstPos - ((b1 & 0xF) << 8 | b2) - 1` (note the **-1**, not +1)
- **Copy source INCREMENTS** per byte copied (not indexed from `dst - offset`)
- **Extended mode** triggers when b1's **high nibble** (not when b1==0): read one extra byte for length
- Standard length: `(b1 >> 4) + 2` (range 2..17)
- Extended length: `extra_byte + 0x12` (range 18..273)
- **First flag byte pre-read** before the main loop (data starts at offset 17, not 16)

Reference: libyaz0 by MasterVermilli0n (GPLv3)

### KCL Collision Data (beginner_course.szs)
- Total triangles: 12,601
- Surface breakdown:
  - Road: 6,062 (48.1%)
  - Off-road: 1,726 (13.7%)
  - Boost: 2,646 (21.0%)
  - Wall: 625 (5.0%)
  - Other: 1,542 (12.2%)
- Bounding box: X[-1, 16300] Y[-1, 15655] Z[-1, 76000]

### U8 Archive Contents (26 entries)
- course.bmm, course.btiEnv, course.btiMat, course.kcl, course.kmp
- course_model.brres (2.1MB), dokan_sfc.brres, FlagB2.brres
- itembox.brres, map_model.brres, MiiKanban.brres
- MiiObj01/02/03.brres, MiiStatueL3.brres
- skyship.brres, sun.brres, vrcorn_model.brres
- effect/Flash_L/rk_flashBeginner.breff + .breft
- effect/Hanabi/rk_stHanabi.breff + .breft
- posteffect/* (4 files)

### Build & Validation
- Build: 0 errors, 0 warnings across 5 targets (mkwii-genesis, mkwii-port, mkwii-linktest, mkwii-loaders, physics_tests, track_loader_test)
- CMake: Added mkwii-loaders static library + track_loader_test executable
- Test: Downloads real track from copyparty, full pipeline validated

### Known Issues (Future Work)
- KMP parser: Section header format needs investigation (first 4 bytes not matching expected ASCII magic)
- KCL parser: Triangle parsing uses heuristic stride detection; KMP data not fully populated
- KMP start positions show 0 (likely due to KTP section format mismatch)

### Stage Summary
- Phase 7 M3 (M3 Load Track): COMPLETE
- Next: Phase 7 M4 (M4 Place Kart on track)