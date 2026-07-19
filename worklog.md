# MKWii PC Port — Worklog

## Task 3a: Network + SaveData GENESIS Reconstruction

### Summary
Reconstructed Network and SaveData modules from raw decompiled code into clean C++ classes. 6 new files created, 2 existing files enhanced with decompiled patterns. All 13 source files compile cleanly.

### Network Module (data/src/game/Network/)

**New files created:**

| File | Class | Description |
|------|-------|-------------|
| `Connection.hpp/.cpp` | `NW4R::Net::Connection` | Network connection base class wrapping Wii SO_* socket API. Matches decompiled player entry layout (0x30 bytes, state at +0x34, handle at +0x3C, IP at +0x40-0x4B). Init at 0x80550374 sets invalid fields to 0xFFFFFFFF. |
| `Session.hpp/.cpp` | `RKNet::Session` | Race session manager covering countdown→race→results. Session state from global offset 0xB74 (0=idle, 6=cleanup). Handles race input broadcast (0x805585fc), item sync (0x80558c24), position sync (0x80558fa8), and results (0x8055946c). |
| `Packet.hpp/.cpp` | `RKNet::Packet` + `RKNet::PacketBuilder` | Typed packet structures for MKWii online protocol. 14 packet types defined with packed payload structs. Packet dispatch in `processReceivedPacket()` matches decompiled switch at 0x8055b568. `getPacketSize()` (0x8055b180) returns size tables per type. `PacketBuilder` provides factory methods for ACK, player update, item event, countdown. |

**Enhanced existing files:**

| File | Changes |
|------|---------|
| `RKNetConnectionManager.cpp` | `findFirstConnectedPlayer()` now scans player array with 0x30 stride, checking state < 0x42 (matching 0x8055008c). `findNextConnectedPlayer()` returns +0x4C offset (matching 0x80550184). Constructor now allocates and initializes 12×0x30-byte player array with correct field defaults (0xFF for invalid). `updateMaxSequence()` scans all entries excluding local player (matching 0x805504e4). |
| `PacketHandler.cpp` | `processReceivedPacket()` now has real packet type dispatch switch. `getPacketSize()` returns per-type size table. `getMaxPayloadSize()` handles ghost data at 0x860. `allocatePacketBuffer()` now allocates 0x870-byte buffer. `readPacketHeader()`, `getReceivedPayload()`, `getPacketSenderId()` return actual values from buffer. |

### SaveData Module (data/src/game/SaveData/)

**New files created:**

| File | Class | Description |
|------|-------|-------------|
| `SaveManager.hpp/.cpp` | `Save::SaveManager` | Low-level save file I/O. Handles NAND paths (ISFS_* stubs) and PC file I/O. CRC32 integrity verification. Supports read/write/load/store of SaveData, License, Ghost, Settings. Backup/restore operations. Error code enum with 11 error types. |
| `RecordBook.hpp/.cpp` | `Save::RecordBook` | Race records manager for 32 time-trial courses. Star rating system (3★/2★/1★/none) based on staff ghost comparison thresholds (3%/7%/15%). Statistics: total records, staff ghosts beaten, best/worst course. Bulk serialization and License integration. |

### Files Verified Compiling (13 total)
- `Network/Connection.cpp` ✅
- `Network/Session.cpp` ✅
- `Network/Packet.cpp` ✅
- `Network/RKNetConnectionManager.cpp` ✅
- `Network/RacingNet.cpp` ✅
- `Network/PacketHandler.cpp` ✅
- `SaveData/SaveManager.cpp` ✅
- `SaveData/RecordBook.cpp` ✅
- `SaveData/SaveData.cpp` ✅
- `SaveData/License.cpp` ✅
- `SaveData/GhostFile.cpp` ✅
- `SaveData/RecordData.cpp` ✅
- `SaveData/Settings.cpp` ✅

### Key Decompiled Patterns Applied
1. **Player array stride 0x30** — used throughout RKNet functions for 12-player indexing
2. **Connection validity check: state < 0x42** — appears in every player scan loop
3. **0xFF initialization for invalid fields** — IP addresses, sequence numbers, connection handles
4. **Unrolled loops (groups of 4-6)** — matching PPC-optimized decompiled code
5. **Global state offsets** — 0x27A0 (player array), 0x291C (room index), 0x29C0 (max sequence), 0xB74 (session state)
6. **Packet type dispatch** — switch on byte 0 of received data
7. **0x870-byte packet buffer** — assembly buffer for outgoing packets