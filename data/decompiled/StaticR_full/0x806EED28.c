/* Function at 0x806EED28, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806EED28(int r3)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 0x5c; // 0x806EED30
    *(0x14 + r1) = r0; // stw @ 0x806EED34
    FUN_805E3430(r3); // bl 0x805E3430
}