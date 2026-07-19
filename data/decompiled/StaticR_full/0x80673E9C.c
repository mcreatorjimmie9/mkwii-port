/* Function at 0x80673E9C, size=20 bytes */
/* Stack frame: 208 bytes */
/* Calls: 1 function(s) */

void FUN_80673E9C(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x80673EA4
    FUN_805E3430(); // bl 0x805E3430
}