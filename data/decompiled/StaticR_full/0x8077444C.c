/* Function at 0x8077444C, size=24 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8077444C(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80774454
    /* stfd f31, 8(r1) */ // 0x80774458
    /* fmr f31, f1 */ // 0x8077445C
    FUN_805E3430(); // bl 0x805E3430
}