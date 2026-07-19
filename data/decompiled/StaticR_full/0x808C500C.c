/* Function at 0x808C500C, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_808C500C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x808C5014
    FUN_805E3430(); // bl 0x805E3430
}