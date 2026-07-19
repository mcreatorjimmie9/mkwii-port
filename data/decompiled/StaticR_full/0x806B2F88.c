/* Function at 0x806B2F88, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_806B2F88(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x806B2F90
    FUN_805E3430(); // bl 0x805E3430
}