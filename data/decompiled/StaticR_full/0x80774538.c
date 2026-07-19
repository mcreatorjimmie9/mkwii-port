/* Function at 0x80774538, size=24 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80774538(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80774540
    /* stfd f31, 8(r1) */ // 0x80774544
    /* fmr f31, f1 */ // 0x80774548
    FUN_805E3430(); // bl 0x805E3430
}