/* Function at 0x805E6F5C, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805E6F5C(int r3)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 4; // 0x805E6F64
    *(0x14 + r1) = r0; // stw @ 0x805E6F68
    FUN_805E3430(r3); // bl 0x805E3430
}