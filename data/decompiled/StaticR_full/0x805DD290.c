/* Function at 0x805DD290, size=20 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_805DD290(int r3)
{
    /* Stack frame: -64(r1) */
    /* li r3, 0 */ // 0x805DD298
    *(0x44 + r1) = r0; // stw @ 0x805DD29C
    FUN_805E3430(r3); // bl 0x805E3430
}