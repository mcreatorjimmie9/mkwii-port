/* Function at 0x808D2AEC, size=20 bytes */
/* Stack frame: 240 bytes */
/* Calls: 1 function(s) */

void FUN_808D2AEC(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x808D2AF4
    FUN_805E3430(); // bl 0x805E3430
}