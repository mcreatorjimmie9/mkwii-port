/* Function at 0x807A4194, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807A4194(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r6, 0 */ // 0x807A419C
    *(0x14 + r1) = r0; // stw @ 0x807A41A0
    r3 = *(0x4c4 + r3); // lwz @ 0x807A41A4
    r3 = r3 + 0xc; // 0x807A41A8
    FUN_805E3430(r6, r3); // bl 0x805E3430
}