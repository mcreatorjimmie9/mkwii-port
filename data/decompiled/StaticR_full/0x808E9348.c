/* Function at 0x808E9348, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_808E9348(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x808E9350
    FUN_805E3430(); // bl 0x805E3430
}