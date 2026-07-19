/* Function at 0x805AE940, size=20 bytes */
/* Stack frame: 176 bytes */
/* Calls: 1 function(s) */

void FUN_805AE940(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x805AE948
    FUN_805E3430(); // bl 0x805E3430
}