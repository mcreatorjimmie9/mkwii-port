/* Function at 0x808F4DA8, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_808F4DA8(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x808F4DB0
    FUN_805E3430(); // bl 0x805E3430
}