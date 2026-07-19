/* Function at 0x806EEEDC, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806EEEDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = r4;
    *(0x14 + r1) = r0; // stw @ 0x806EEEE8
    FUN_805E3430(r3); // bl 0x805E3430
}