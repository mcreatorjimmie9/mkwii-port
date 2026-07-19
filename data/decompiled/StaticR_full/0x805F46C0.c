/* Function at 0x805F46C0, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805F46C0(int r3)
{
    /* Stack frame: -16(r1) */
    /* li r3, 0x28 */ // 0x805F46C8
    *(0x14 + r1) = r0; // stw @ 0x805F46CC
    FUN_805E3430(r3); // bl 0x805E3430
}