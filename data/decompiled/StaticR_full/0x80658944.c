/* Function at 0x80658944, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80658944(int r3)
{
    /* Stack frame: -16(r1) */
    /* li r3, 0x18 */ // 0x8065894C
    *(0x14 + r1) = r0; // stw @ 0x80658950
    FUN_805E3430(r3); // bl 0x805E3430
}