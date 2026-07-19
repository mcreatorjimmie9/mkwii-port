/* Function at 0x8088CED0, size=40 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8088CED0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8088CED8
    /* lis r3, 0 */ // 0x8088CEDC
    /* lfs f2, 0(r4) */ // 0x8088CEE0
    /* lfs f0, 0(r3) */ // 0x8088CEE4
    /* fmuls f1, f1, f2 */ // 0x8088CEE8
    *(0x14 + r1) = r0; // stw @ 0x8088CEEC
    /* fmuls f1, f0, f1 */ // 0x8088CEF0
    FUN_805E3430(); // bl 0x805E3430
}