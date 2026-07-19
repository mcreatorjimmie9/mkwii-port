/* Function at 0x807F41F0, size=20 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

void FUN_807F41F0(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x807F41F8
    FUN_805E3430(); // bl 0x805E3430
}