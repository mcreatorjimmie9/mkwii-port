/* Function at 0x807FBEC4, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_807FBEC4(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x807FBECC
    FUN_805E3430(); // bl 0x805E3430
}