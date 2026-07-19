/* Function at 0x806EECF8, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806EECF8(int r3)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 0x1c; // 0x806EED00
    *(0x14 + r1) = r0; // stw @ 0x806EED04
    FUN_805E3430(r3); // bl 0x805E3430
}