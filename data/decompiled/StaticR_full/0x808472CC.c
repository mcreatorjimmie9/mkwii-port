/* Function at 0x808472CC, size=20 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_808472CC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808472D4
    FUN_805E3430(); // bl 0x805E3430
}