/* Function at 0x80838538, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80838538(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80838538
    /* li r0, 0 */ // 0x8083853C
    /* lfs f0, 0(r4) */ // 0x80838540
    *(0x280 + r3) = r0; // stw @ 0x80838544
    /* stfs f0, 0x284(r3) */ // 0x80838548
    *(0x2ac + r3) = r0; // stw @ 0x8083854C
    return;
}