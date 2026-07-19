/* Function at 0x80839A40, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80839A40(int r3, int r4, int r5)
{
    /* fmr f0, f1 */ // 0x80839A40
    r0 = *(0x2b8 + r3); // lwz @ 0x80839A44
    /* lis r5, 0 */ // 0x80839A48
    /* fmr f1, f2 */ // 0x80839A4C
    r0 = r0 + r4; // 0x80839A50
    /* fmr f2, f3 */ // 0x80839A54
    /* lfs f4, 0(r5) */ // 0x80839A58
    /* fmr f3, f0 */ // 0x80839A5C
    *(0x2b8 + r3) = r0; // stw @ 0x80839A60
    /* clrlwi r4, r0, 0x10 */ // 0x80839A64
    /* li r5, 0 */ // 0x80839A68
    /* b 0x8083961c */ // 0x80839A6C
}