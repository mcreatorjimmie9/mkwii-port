/* Function at 0x807BA888, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_807BA888(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x807BA890
    FUN_805E3430(); // bl 0x805E3430
}