/* Function at 0x806E6A5C, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806E6A5C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806E6A64
    r3 = *(0x24 + r3); // lwz @ 0x806E6A68
    FUN_805E3430(); // bl 0x805E3430
}