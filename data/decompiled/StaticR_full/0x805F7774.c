/* Function at 0x805F7774, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805F7774(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805F7780
    r4 = *(0xc4 + r3); // lwz @ 0x805F7784
    r0 = r4 + 1; // 0x805F7788
    *(0xc4 + r3) = r0; // stw @ 0x805F778C
    FUN_805E3430(); // bl 0x805E3430
}