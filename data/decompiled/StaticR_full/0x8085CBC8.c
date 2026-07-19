/* Function at 0x8085CBC8, size=20 bytes */
/* Stack frame: 96 bytes */
/* Calls: 1 function(s) */

void FUN_8085CBC8(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8085CBD0
    FUN_805E3430(); // bl 0x805E3430
}