/* Function at 0x805E569C, size=20 bytes */
/* Stack frame: 208 bytes */
/* Calls: 1 function(s) */

void FUN_805E569C(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x805E56A4
    FUN_805E3430(); // bl 0x805E3430
}