/* Function at 0x807E31F0, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_807E31F0(int r3, int r4)
{
    /* lfs f2, 0(r4) */ // 0x807E31F0
    /* li r0, 5 */ // 0x807E31F4
    /* lfs f1, 4(r4) */ // 0x807E31F8
    /* lfs f0, 8(r4) */ // 0x807E31FC
    *(0xb0 + r3) = r0; // stw @ 0x807E3200
    /* stfs f2, 0xb4(r3) */ // 0x807E3204
    /* stfs f1, 0xb8(r3) */ // 0x807E3208
    /* stfs f0, 0xbc(r3) */ // 0x807E320C
    return;
}