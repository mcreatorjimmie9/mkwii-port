/* Function at 0x808E9C0C, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_808E9C0C(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x808E9C14
    FUN_805E3430(); // bl 0x805E3430
}