/* Function at 0x806DC8D8, size=20 bytes */
/* Stack frame: 672 bytes */
/* Calls: 1 function(s) */

void FUN_806DC8D8(void)
{
    /* Stack frame: -672(r1) */
    *(0x2a4 + r1) = r0; // stw @ 0x806DC8E0
    FUN_805E3430(); // bl 0x805E3430
}