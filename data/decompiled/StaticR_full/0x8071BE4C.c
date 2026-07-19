/* Function at 0x8071BE4C, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_8071BE4C(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8071BE54
    FUN_805E3430(); // bl 0x805E3430
}