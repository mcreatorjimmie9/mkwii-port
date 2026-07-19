/* Function at 0x8062DE9C, size=20 bytes */
/* Stack frame: 240 bytes */
/* Calls: 1 function(s) */

void FUN_8062DE9C(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8062DEA4
    FUN_805E3430(); // bl 0x805E3430
}