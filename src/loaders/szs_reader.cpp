/**
 * @file szs_reader.cpp
 * @brief Implementation of YAZ0 decompressor and U8 archive parser.
 *
 * Phase 7 M3 — Track Loading
 *
 * This file implements the two-layer SZS reader:
 *   1. YAZ0 decompression (LZ77 variant used by Nintendo Wii)
 *   2. U8 archive parsing (Nintendo's standard archive container)
 *
 * All multi-byte values in both formats are big-endian (Wii is PPC BE).
 */

#include "loaders/szs_reader.hpp"

#include <algorithm>  // std::min
#include <fstream>    // std::ifstream

namespace Loaders {

// =============================================================================
// Construction / Destruction
// =============================================================================

SzsReader::SzsReader()  = default;
SzsReader::~SzsReader() = default;

// =============================================================================
// Big-endian read helpers
// =============================================================================

u32 SzsReader::readBE32(const u8* p) const {
    return (static_cast<u32>(p[0]) << 24) |
           (static_cast<u32>(p[1]) << 16) |
           (static_cast<u32>(p[2]) << 8)  |
            static_cast<u32>(p[3]);
}

u32 SzsReader::readBE24(const u8* p) const {
    return (static_cast<u32>(p[0]) << 16) |
           (static_cast<u32>(p[1]) << 8)  |
            static_cast<u32>(p[2]);
}

// =============================================================================
// Loading
// =============================================================================

bool SzsReader::loadFromMemory(const std::vector<u8>& data) {
    // Reset state
    m_entries.clear();
    m_sourceName.clear();

    // ------------------------------------------------------------------
    // Step 1: Validate the YAZ0 header (minimum 16 bytes)
    // ------------------------------------------------------------------
    // YAZ0 header layout:
    //   [0x00] 4 bytes: magic "Yaz0" (0x59 0x61 0x7A 0x30)
    //   [0x04] 4 bytes: uint32 BE — uncompressed size
    //   [0x08] 8 bytes: padding (zeros)
    if (data.size() < 16) {
        return false;
    }

    // Check the 4-byte magic signature
    if (data[0] != 'Y' || data[1] != 'a' ||
        data[2] != 'z' || data[3] != '0') {
        return false;
    }

    // ------------------------------------------------------------------
    // Step 2: Decompress the YAZ0 payload
    // ------------------------------------------------------------------
    std::vector<u8> decompressed;
    if (!decompressYaz0(data, decompressed)) {
        return false;
    }

    // ------------------------------------------------------------------
    // Step 3: Parse the resulting U8 archive
    // ------------------------------------------------------------------
    if (!parseU8(decompressed)) {
        return false;
    }

    return true;
}

bool SzsReader::loadFromFile(const char* path) {
    // Reset state
    m_entries.clear();
    m_sourceName = (path != nullptr) ? path : "";

    // Open the file in binary mode, seek to end to get size
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        return false;
    }

    const auto fileSize = file.tellg();
    if (fileSize <= 0) {
        return false;
    }

    file.seekg(0, std::ios::beg);

    // Read the entire file into a buffer
    const auto uSize = static_cast<size_t>(fileSize);
    std::vector<u8> buffer(uSize);
    if (!file.read(reinterpret_cast<char*>(buffer.data()),
                   static_cast<std::streamsize>(uSize))) {
        return false;
    }

    // Delegate to the memory-based loader
    return loadFromMemory(buffer);
}

// =============================================================================
// Entry access
// =============================================================================

const SzsReader::Entry* SzsReader::findEntry(const std::string& name) const {
    for (const auto& entry : m_entries) {
        if (entry.name == name) {
            return &entry;
        }
    }
    return nullptr;
}

std::vector<const SzsReader::Entry*>
SzsReader::getEntriesByExtension(const std::string& ext) const {
    std::vector<const Entry*> result;
    for (const auto& entry : m_entries) {
        // Case-sensitive suffix match (Wii filenames are case-sensitive)
        if (entry.name.size() >= ext.size() &&
            entry.name.compare(entry.name.size() - ext.size(),
                               ext.size(), ext) == 0) {
            result.push_back(&entry);
        }
    }
    return result;
}

// =============================================================================
// YAZ0 Decompression
// =============================================================================

bool SzsReader::decompressYaz0(const std::vector<u8>& compressed,
                               std::vector<u8>& decompressed) {
    // ------------------------------------------------------------------
    // Read the uncompressed size from the YAZ0 header at offset 0x04
    // ------------------------------------------------------------------
    const u32 uncompressedSize = readBE32(compressed.data() + 4);

    // Sanity: an empty archive is technically valid but useless
    if (uncompressedSize == 0) {
        decompressed.clear();
        return true;
    }

    // Allocate the output buffer
    decompressed.resize(uncompressedSize);

    // ------------------------------------------------------------------
    // Decompress the LZ77-encoded stream
    // ------------------------------------------------------------------
    // Based on the reference implementation in libyaz0 (MasterVermilli0n).
    //
    // Key details of MKWii's YAZ0 encoding:
    //   - MSB-first bit processing (code <<= 1 shifts through bits 7..0)
    //   - Bit = 1 (MSB set): literal — copy next input byte to output.
    //   - Bit = 0 (MSB clear): back-reference from output buffer.
    //   - First flag byte is read BEFORE the main loop (src starts at 17).
    //   - Back-reference distance uses -1 (not +1): copy_src = dst - ((b1&0xF)<<8|b2) - 1
    //   - Copy source INCREMENTS each byte (not indexed from dst-offset).
    //   - Extended mode when b1's HIGH NIBBLE is 0:
    //       Read one extra byte for length: n = extra + 0x12 (range 18..273)
    //       Standard mode: n = (b1 >> 4) + 2 (range 2..17)
    // ------------------------------------------------------------------

    const size_t srcEnd = compressed.size();

    // Read the first flag byte (data starts at offset 17, not 16)
    if (srcEnd <= 17) {
        return false;
    }
    u8 code = compressed[16];
    size_t srcPos = 17;
    size_t dstPos = 0;

    while (srcPos < srcEnd && dstPos < uncompressedSize) {
        // Process 8 chunks per flag byte
        for (int i = 0; i < 8; i++) {
            if (srcPos >= srcEnd || dstPos >= uncompressedSize) {
                break;
            }

            if (code & 0x80) {
                // ---- Literal byte ----
                // MSB is set: copy one byte directly from input to output.
                decompressed[dstPos++] = compressed[srcPos++];
            } else {
                // ---- Back-reference ----
                // MSB is clear: decode length/distance from output buffer.
                if (srcPos + 1 >= srcEnd) {
                    return false;
                }

                const u8 b1 = compressed[srcPos++];
                const u8 b2 = compressed[srcPos++];

                // Distance: ((b1 & 0x0F) << 8 | b2) + 1, subtracted from dstPos
                const size_t copySrc = dstPos -
                    (static_cast<size_t>(b1 & 0x0F) << 8 | static_cast<size_t>(b2)) - 1;

                // Length: high nibble of b1 determines encoding
                size_t copyLength;
                const u8 highNibble = b1 >> 4;
                if (highNibble == 0) {
                    // Extended 3-byte: read one extra length byte
                    if (srcPos >= srcEnd) {
                        return false;
                    }
                    copyLength = static_cast<size_t>(compressed[srcPos++]) + 0x12;
                } else {
                    // Standard 2-byte: high nibble + 2
                    copyLength = static_cast<size_t>(highNibble) + 2;
                }

                // Copy bytes with INCREMENTING source (handles RLE correctly)
                size_t src = copySrc;
                for (size_t j = 0; j < copyLength; j++) {
                    if (dstPos >= uncompressedSize) {
                        break;
                    }
                    decompressed[dstPos++] = decompressed[src++];
                }
            }

            // Shift left to process next bit (MSB-first)
            code <<= 1;
        }

        // Read next flag byte for the next 8 chunks
        if (srcPos >= srcEnd || dstPos >= uncompressedSize) {
            break;
        }
        code = compressed[srcPos++];
    }

    return (dstPos == uncompressedSize);
}

// =============================================================================
// U8 Archive Parsing
// =============================================================================

bool SzsReader::parseU8(const std::vector<u8>& u8Data) {
    // ------------------------------------------------------------------
    // Validate the U8 header (minimum 32 bytes)
    // ------------------------------------------------------------------
    // U8 header layout (32 bytes at offset 0x00):
    //   0x00: uint32 BE magic         0x55AA382D ("U\xAA8-")
    //   0x04: uint32 BE root_offset   Offset of the first node (always 0x20)
    //   0x08: uint32 BE header_size   Total header+nodes+strings size
    //   0x0C: uint32 BE data_offset   Where raw file data begins (0x40-aligned)
    //   0x10: 16 bytes padding        (zeros)
    //
    // Node table starts at root_offset (0x20), each node is 12 bytes:
    //   0x00: uint8  type        (0 = file, 1 = directory)
    //   0x01: uint24 BE name_off  Offset into the string table
    //   0x04: uint32 BE data_off  Absolute offset in U8 archive (files only)
    //   0x08: uint32 BE data_size File size in bytes OR end-node index (dirs)
    // ------------------------------------------------------------------

    if (u8Data.size() < 32) {
        return false;
    }

    // Verify the U8 magic: 0x55AA382D
    const u32 magic = readBE32(u8Data.data());
    if (magic != 0x55AA382Du) {
        return false;
    }

    // Read header fields
    const u32 rootOffset  = readBE32(u8Data.data() + 0x04);
    const u32 headerSize  = readBE32(u8Data.data() + 0x08);
    const u32 dataOffset  = readBE32(u8Data.data() + 0x0C);

    // Validate offsets
    if (rootOffset < 0x20 || rootOffset >= u8Data.size()) {
        return false;
    }
    if (headerSize > u8Data.size()) {
        return false;
    }
    if (dataOffset > u8Data.size()) {
        return false;
    }

    // ------------------------------------------------------------------
    // Parse the root node to determine the total node count
    // ------------------------------------------------------------------
    // The root node is always a directory (type=1) at rootOffset.
    // For directory nodes, data_size contains the index of the first node
    // AFTER this directory's children — which for the root equals the
    // total number of nodes in the archive.
    if (rootOffset + 12 > u8Data.size()) {
        return false;
    }

    const u8* rootNodePtr = u8Data.data() + rootOffset;
    const u8  rootType    = rootNodePtr[0];

    if (rootType != 1) {
        return false;  // Root must be a directory
    }

    const u32 totalNodes = readBE32(rootNodePtr + 8);
    if (totalNodes == 0 || rootOffset + totalNodes * 12 > headerSize) {
        return false;
    }

    // ------------------------------------------------------------------
    // Parse all nodes into a local array
    // ------------------------------------------------------------------
    std::vector<U8Node> nodes(totalNodes);

    for (u32 i = 0; i < totalNodes; i++) {
        const u32 nodeOff = rootOffset + i * 12;
        if (nodeOff + 12 > u8Data.size()) {
            return false;  // Node extends beyond archive
        }

        const u8* np = u8Data.data() + nodeOff;

        nodes[i].type       = np[0];
        nodes[i].nameOffset = readBE24(np + 1);
        nodes[i].dataOffset = readBE32(np + 4);
        nodes[i].dataSize   = readBE32(np + 8);
    }

    // ------------------------------------------------------------------
    // Locate the string table
    // ------------------------------------------------------------------
    // The string table immediately follows the node table.
    const u32 stringTableOffset = rootOffset + totalNodes * 12;
    if (stringTableOffset >= u8Data.size()) {
        return false;
    }
    const char* stringTable = reinterpret_cast<const char*>(
        u8Data.data() + stringTableOffset
    );

    // ------------------------------------------------------------------
    // Recursively traverse the node tree and collect file entries
    // ------------------------------------------------------------------
    // The root directory's children span from node index 1 to
    // (totalNodes - 1), but we use the root's dataSize as the
    // exclusive upper bound (it equals totalNodes for the root).
    collectEntries(nodes, stringTable,
                   0, totalNodes,
                   "",  // root has no path prefix
                   u8Data.data(), static_cast<u32>(u8Data.size()));

    return true;
}

// =============================================================================
// U8 Node Tree Traversal
// =============================================================================

void SzsReader::collectEntries(const std::vector<U8Node>& nodes,
                               const char* stringTable,
                               u32 nodeIdx, u32 endIdx,
                               const std::string& dirPath,
                               const u8* u8Data, u32 u8Size) {
    // Process nodes in the range [nodeIdx+1, endIdx).
    // nodeIdx itself is the parent directory; its children start at nodeIdx+1.
    u32 i = nodeIdx + 1;

    while (i < endIdx) {
        const U8Node& node = nodes[i];

        // --- Read the node's name from the string table ---
        const u32 nameOff = node.nameOffset;
        const char* rawName = stringTable + nameOff;

        // Build the full path: "dirPath/name" or just "name" if at root
        std::string fullPath;
        if (dirPath.empty()) {
            fullPath = rawName;
        } else {
            fullPath = dirPath + "/" + rawName;
        }

        if (node.type == 1) {
            // ---- Directory node ----
            // For directories, dataSize is the index of the first node
            // AFTER all children of this directory.
            // Recurse into the directory, then skip past all its children.
            const u32 dirEnd = node.dataSize;
            collectEntries(nodes, stringTable, i, dirEnd, fullPath,
                           u8Data, u8Size);
            i = dirEnd;  // Advance past all children
        } else {
            // ---- File node ----
            // dataOffset: absolute offset of file data in the U8 archive
            // dataSize:   file size in bytes
            if (node.dataOffset + node.dataSize <= u8Size) {
                Entry entry;
                entry.name   = fullPath;
                entry.offset = node.dataOffset;
                entry.size   = node.dataSize;
                entry.data.assign(u8Data + node.dataOffset,
                                  u8Data + node.dataOffset + node.dataSize);
                m_entries.push_back(std::move(entry));
            }
            i++;  // Advance to the next sibling
        }
    }
}

} // namespace Loaders
