/* Function at 0x80652B50, size=20 bytes */
/* Stack frame: 192 bytes */
/* Calls: 1 function(s) */

void FUN_80652B50(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80652B58
    FUN_805E3430(); // bl 0x805E3430
}