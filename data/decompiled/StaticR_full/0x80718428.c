/* Function at 0x80718428, size=20 bytes */
/* Stack frame: 272 bytes */
/* Calls: 1 function(s) */

void FUN_80718428(void)
{
    /* Stack frame: -272(r1) */
    *(0x114 + r1) = r0; // stw @ 0x80718430
    FUN_805E3430(); // bl 0x805E3430
}