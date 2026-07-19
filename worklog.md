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
7. **0x870-byte packet buffer** — assembly buffer for outgoing packets---
Task ID: 13-1
Agent: AudioEngine Expansion Agent
Task: Phase 13-1 — Expand AudioEngine module with 6 new GENESIS files

Work Log:
- Read all 4 existing .cpp files (SoundPlayer, SoundArchive, SoundHandle, AxVoiceManager) and 5 .hpp files (SoundTypes, SoundPlayer, SoundArchive, SoundHandle, AxVoiceManager) to understand code patterns
- Read AX/DSP shim headers: ax_shim.h (OpenAL stubs) and audio.hpp (AX SDK stubs)
- Read rk_types.h for type definitions
- Created 6 new .hpp headers with full class/struct/enum definitions:
  1. Sequencer.hpp — MIDI-like sequence event processor with SeqEvent, SeqTrackState, track state management
  2. MusicSeqPlayer.hpp — BGM/fanfare/jingle player wrapping Sequencer with voice management
  3. StreamPlayer.hpp — BRSTM streaming player with double-buffered DMA, BRSTM header parsing structs
  4. DSPManager.hpp — DSP subsystem init, mailbox communication, output buffer config, reverb params
  5. Sound3D.hpp — 3D positional audio: distance attenuation, Doppler, stereo pan projection
  6. AudioBus.hpp — Category-based audio routing/mixing with per-category volume, fade, mute/solo
- Created 6 new .cpp files with real decompiled implementations:
  1. Sequencer.cpp (~540 lines) — Variable-length quantity parsing, BE16/BE24/BE32 reads, note-on/off handling with AX SDK callback integration
  2. MusicSeqPlayer.cpp (~380 lines) — BGM tick advancement, note-to-pitch conversion (2^(semitone/12)), note voice tracking, crossfade support
  3. StreamPlayer.cpp (~400 lines) — BRSTM header parsing, ADPCM block decode stub, double-buffer refill, loop point handling, 32-byte aligned buffer allocation
  4. DSPManager.cpp (~320 lines) — DSP init/shutdown, AXInit/AXQuit/AXSetMode calls, mailbox send/read, output buffer config, reverb, frame-done callback, singleton
  5. Sound3D.cpp (~330 lines) — Inverse distance clamp attenuation, Doppler pitch (1000 units/s speed of sound), forward×up→right vector pan projection, 64-source pool
  6. AudioBus.cpp (~330 lines) — 16-category bus system with per-category voice limits, linear volume fade, mute/solo, master volume, mix frame
- Updated CMakeLists.txt: AUDIOENGINE_SOURCES from 4 to 10 files
- Fixed compilation error: Sequencer::m_ticksPerBeat was private — added getTicksPerBeat() public inline
- Fixed compilation error: ax_shim.h and audio.hpp define duplicate AX functions — DSPManager uses only audio.hpp
- Build verified: all 94 GENESIS source files compile cleanly into libmkwii-genesis.a

Stage Summary:
- AudioEngine expanded from 9 files (4 .cpp + 5 .hpp) to 21 files (10 .cpp + 11 .hpp)
- 6 new GENESIS source files with address annotations (0x8056xxxx-0x8057xxxx range)
- All AX SDK calls properly annotated with /* AX_SDK: ... → ... */ comments
- Key MKWii audio subsystems now covered: BGM sequencing, BRSTM streaming, DSP management, 3D audio, category mixing
- Total GENESIS source count: 94 files (was 88)
