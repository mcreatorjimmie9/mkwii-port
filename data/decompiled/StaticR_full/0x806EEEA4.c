/* Function at 0x806EEEA4, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806EEEA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806EEEAC
    /* mulli r0, r4, 0xc */ // 0x806EEEB0
    r3 = r3 + r0; // 0x806EEEB4
    r3 = r3 + 0x204; // 0x806EEEB8
    FUN_805E3430(r3); // bl 0x805E3430
}