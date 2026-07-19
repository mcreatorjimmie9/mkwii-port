/* Function at 0x805F1E64, size=44 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805F1E64(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805F1E6C
    *(0x14 + r1) = r0; // stw @ 0x805F1E70
    r3 = *(0 + r3); // lwz @ 0x805F1E74
    r12 = *(0 + r3); // lwz @ 0x805F1E78
    r12 = *(8 + r12); // lwz @ 0x805F1E7C
    /* mtctr r12 */ // 0x805F1E80
    /* bctrl  */ // 0x805F1E84
    r3 = *(0 + r3); // lwz @ 0x805F1E88
    FUN_805E3430(); // bl 0x805E3430
}