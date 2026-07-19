/* Function at 0x8066EC88, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8066EC88(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8066EC90
    /* slwi r0, r5, 2 */ // 0x8066EC94
    r3 = r3 + r0; // 0x8066EC98
    /* mulli r0, r4, 0x24 */ // 0x8066EC9C
    r3 = *(8 + r3); // lwz @ 0x8066ECA0
    r3 = r3 + r0; // 0x8066ECA4
    FUN_805E3430(); // bl 0x805E3430
}