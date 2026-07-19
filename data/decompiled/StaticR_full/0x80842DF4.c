/* Function at 0x80842DF4, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_80842DF4(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80842DF4
    /* li r0, 0 */ // 0x80842DF8
    /* lfs f0, 0(r4) */ // 0x80842DFC
    *(0 + r3) = r0; // stw @ 0x80842E00
    *(4 + r3) = r0; // stw @ 0x80842E04
    /* stfs f0, 8(r3) */ // 0x80842E08
    /* stfs f0, 0xc(r3) */ // 0x80842E0C
    /* stfs f0, 0x10(r3) */ // 0x80842E10
    return;
}