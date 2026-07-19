/* Function at 0x808FCA94, size=20 bytes */
/* Stack frame: 96 bytes */
/* Calls: 1 function(s) */

void FUN_808FCA94(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x808FCA9C
    FUN_805E3430(); // bl 0x805E3430
}