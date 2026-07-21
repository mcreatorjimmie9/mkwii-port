/**
 * @file szs_reader.hpp
 * @brief YAZ0 decompressor and U8 archive parser for Mario Kart Wii SZS files.
 *
 * Phase 7 M3 — Track Loading
 *
 * An SZS file is a YAZ0-compressed U8 archive. This reader handles both layers:
 *
 *   Layer 1 — YAZ0 Decompression (LZ77 variant)
 *     16-byte header: 4B magic "Yaz0" | 4B uncompressed size (BE) | 8B padding
 *     Followed by LZ77-compressed data using flag-byte + back-reference encoding.
 *
 *   Layer 2 — U8 Archive (Nintendo's standard archive format)
 *     0x20-byte header: 4B magic 0x55AA382D | 4B root offset | 4B header size | 4B data offset | 16B pad
 *     Node table (12B per node): type | name offset (24b) | data offset | data size
 *     String table: null-terminated filenames referenced by nodes.
 *     Raw file data section (typically 0x40-aligned).
 *
 * No external dependencies — pure C++17, big-endian aware.
 *
 * @see YAZ0: https://wiki.tockdom.com/wiki/YAZ0
 * @see U8:   https://wiki.tockdom.com/wiki/U8_(File_Format)
 */

#pragma once

#include <vector>
#include <string>
#include <cstdint>
#include <cstring>

// Pull in the project's Wii type aliases (u8, u16, u32, etc.)
#include "rk_types.h"

namespace Loaders {

/**
 * @class SzsReader
 * @brief Reads and parses Mario Kart Wii SZS (YAZ0-compressed U8) archives.
 *
 * Usage:
 *   Loaders::SzsReader reader;
 *   if (reader.loadFromFile("course.szs")) {
 *       const auto* kmp = reader.findEntry("course/course.kmp");
 *       if (kmp) { / * use kmp->data * / }
 *   }
 */
class SzsReader {
public:
    SzsReader();
    ~SzsReader();

    // ------------------------------------------------------------------
    //  Loading
    // ------------------------------------------------------------------

    /**
     * @brief Load an SZS file from a memory buffer.
     *
     * Validates the YAZ0 magic, decompresses the payload, then parses
     * the resulting U8 archive.  Clears any previously loaded entries.
     *
     * @param data  Raw file bytes (must start with "Yaz0" magic).
     * @return true on success, false on any format / bounds error.
     */
    bool loadFromMemory(const std::vector<u8>& data);

    /**
     * @brief Load an SZS file from disk.
     *
     * Reads the entire file into memory, then delegates to loadFromMemory().
     *
     * @param path  Filesystem path to the .szs file.
     * @return true on success, false on I/O or format error.
     */
    bool loadFromFile(const char* path);

    // ------------------------------------------------------------------
    //  Entry access
    // ------------------------------------------------------------------

    /**
     * @brief A single file extracted from the U8 archive.
     */
    struct Entry {
        std::string     name;   ///< Full path inside archive (e.g. "course/course.kmp")
        std::vector<u8> data;   ///< Raw file content (decompressed)
        u32             offset; ///< Absolute offset within the U8 archive
        u32             size;   ///< File size in bytes
    };

    /**
     * @brief Get the full list of file entries extracted from the archive.
     */
    const std::vector<Entry>& getEntries() const { return m_entries; }

    /**
     * @brief Find a file entry by its full path.
     *
     * Performs an exact match against the entry's full path name.
     * Example: findEntry("course/course.kmp")
     *
     * @param name  Full path to search for.
     * @return Pointer to the matching entry, or nullptr if not found.
     */
    const Entry* findEntry(const std::string& name) const;

    /**
     * @brief Get all entries whose name ends with the given extension.
     *
     * The extension should include the dot (e.g. ".kmp", ".brres").
     * Comparison is case-sensitive.
     *
     * @param ext  File extension to match (e.g. ".kmp").
     * @return Vector of pointers to matching entries (empty if none match).
     */
    std::vector<const Entry*> getEntriesByExtension(const std::string& ext) const;

private:
    // ------------------------------------------------------------------
    //  Internal: YAZ0 decompression
    // ------------------------------------------------------------------

    /**
     * @brief Decompress YAZ0 (LZ77 variant) compressed data.
     *
     * Algorithm:
     *   1. Read a flag byte (8 bits, processed MSB-first).
     *   2. For each bit:
     *      - Bit = 1 -> copy next input byte literally to output.
     *      - Bit = 0 -> read two bytes (b1, b2) and decode a back-reference:
     *          length = (b1 >> 4) + 3              (range 3..18)
     *          disp   = ((b1 & 0x0F) << 8) + b2 + 1 (range 1..4096)
     *        Copy `length` bytes from output[current_pos - disp].
     *        Byte-by-byte copy handles overlapping references correctly.
     *
     * @param compressed     Input: YAZ0-compressed data (including 16B header).
     * @param decompressed   Output: decompressed data (resized internally).
     * @return true if decompression completed without error.
     */
    bool decompressYaz0(const std::vector<u8>& compressed,
                        std::vector<u8>& decompressed);

    // ------------------------------------------------------------------
    //  Internal: U8 archive parsing
    // ------------------------------------------------------------------

    /**
     * @brief Parse a decompressed U8 archive and extract all file entries.
     *
     * U8 archive layout:
     *   [0x00]  Header (32 bytes)
     *     0x00: uint32 BE magic  0x55AA382D ("U.8-")
     *     0x04: uint32 BE root node offset (always 0x20)
     *     0x08: uint32 BE header size (nodes + strings, from offset 0)
     *     0x0C: uint32 BE data offset (start of file data, aligned 0x40)
     *     0x10: 16 bytes padding (zeros)
     *   [0x20]  Node table (12 bytes per node)
     *     0x00: uint8  type        (0 = file, 1 = directory)
     *     0x01: uint24 BE name_off  (offset into string table)
     *     0x04: uint32 BE data_off  (absolute from U8 start)
     *     0x08: uint32 BE data_size (file size, or last-child-index for dirs)
     *   After nodes: String table (null-terminated names)
     *   After strings: Raw file data
     *
     * @param u8Data  The full decompressed U8 archive.
     * @return true on success, false on format / bounds error.
     */
    bool parseU8(const std::vector<u8>& u8Data);

    // ------------------------------------------------------------------
    //  Internal: big-endian read helpers (Wii is big-endian)
    // ------------------------------------------------------------------

    /** @brief Read a 32-bit big-endian unsigned integer. */
    u32 readBE32(const u8* p) const;

    /** @brief Read a 24-bit big-endian unsigned integer (used for U8 name offsets). */
    u32 readBE24(const u8* p) const;

    // ------------------------------------------------------------------
    //  Internal: U8 node tree traversal
    // ------------------------------------------------------------------

    /**
     * @brief Internal U8 node representation used during parsing.
     */
    struct U8Node {
        u8  type;        ///< 0 = file, 1 = directory
        u32 nameOffset;  ///< Offset into string table (24-bit BE value)
        u32 dataOffset;  ///< Absolute data offset in U8 archive
        u32 dataSize;    ///< File size (files) or end-node index (directories)
    };

    /**
     * @brief Recursively walk the U8 node tree and collect file entries.
     *
     * @param nodes          Parsed node array.
     * @param stringTable    Pointer to the string table within the U8 data.
     * @param nodeIdx        Current node index to process.
     * @param endIdx         Exclusive upper bound for sibling nodes.
     * @param dirPath        Current directory path (for building full names).
     * @param u8Data         Raw U8 archive bytes (for extracting file data).
     * @param u8Size         Total size of the U8 archive in bytes.
     */
    void collectEntries(const std::vector<U8Node>& nodes,
                        const char* stringTable,
                        u32 nodeIdx, u32 endIdx,
                        const std::string& dirPath,
                        const u8* u8Data, u32 u8Size);

    // ------------------------------------------------------------------
    //  Data members
    // ------------------------------------------------------------------

    std::vector<Entry> m_entries;     ///< All file entries extracted from the archive
    std::string        m_sourceName;  ///< Source identifier (file path or empty for memory)
};

} // namespace Loaders
