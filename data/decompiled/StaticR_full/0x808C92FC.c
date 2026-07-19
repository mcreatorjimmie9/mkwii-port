/* Function at 0x808C92FC, size=20 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

void FUN_808C92FC(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x808C9304
    FUN_805E3430(); // bl 0x805E3430
}