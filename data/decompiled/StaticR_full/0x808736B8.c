/* Function at 0x808736B8, size=20 bytes */
/* Stack frame: 160 bytes */
/* Calls: 1 function(s) */

void FUN_808736B8(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x808736C0
    FUN_805E3430(); // bl 0x805E3430
}