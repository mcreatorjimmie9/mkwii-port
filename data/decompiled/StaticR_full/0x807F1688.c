/* Function at 0x807F1688, size=20 bytes */
/* Stack frame: 160 bytes */
/* Calls: 1 function(s) */

void FUN_807F1688(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x807F1690
    FUN_805E3430(); // bl 0x805E3430
}