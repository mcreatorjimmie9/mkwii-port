/* Function at 0x808C2974, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_808C2974(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x808C297C
    FUN_805E3430(); // bl 0x805E3430
}