/* Function at 0x8091CF94, size=140 bytes */
/* Stack frame: 0 bytes */

void FUN_8091CF94(int r3, int r4, int r5, int r6)
{
    /* li r6, 0 */ // 0x8091CF94
    /* li r5, 0 */ // 0x8091CF98
    /* b 0x8091cfb4 */ // 0x8091CF9C
    /* clrlwi r0, r6, 0x10 */ // 0x8091CFA0
    r4 = *(0x1c + r3); // lwz @ 0x8091CFA4
    /* mulli r0, r0, 0x18 */ // 0x8091CFA8
    r6 = r6 + 1; // 0x8091CFAC
    /* stbx r5, r4, r0 */ // 0x8091CFB0
    r0 = *(0x18 + r3); // lhz @ 0x8091CFB4
    /* clrlwi r4, r6, 0x10 */ // 0x8091CFB8
    if (<) goto 0x0x8091cfa0;
    /* li r6, 0 */ // 0x8091CFC4
    /* li r5, 0 */ // 0x8091CFC8
    /* b 0x8091cfe0 */ // 0x8091CFCC
    r4 = *(0x28 + r3); // lwz @ 0x8091CFD0
    r0 = r6 rlwinm 2; // rlwinm
    r6 = r6 + 1; // 0x8091CFD8
    /* stwx r5, r4, r0 */ // 0x8091CFDC
    r0 = *(0x10 + r3); // lhz @ 0x8091CFE0
    /* clrlwi r4, r6, 0x10 */ // 0x8091CFE4
    if (<) goto 0x0x8091cfd0;
    /* li r6, 0 */ // 0x8091CFF0
    /* li r5, 0 */ // 0x8091CFF4
    /* b 0x8091d00c */ // 0x8091CFF8
    r4 = *(0x34 + r3); // lwz @ 0x8091CFFC
    r0 = r6 rlwinm 1; // rlwinm
    r6 = r6 + 1; // 0x8091D004
    /* sthx r5, r4, r0 */ // 0x8091D008
    r0 = *(0x10 + r3); // lhz @ 0x8091D00C
    /* clrlwi r4, r6, 0x10 */ // 0x8091D010
    if (<) goto 0x0x8091cffc;
    return;
}