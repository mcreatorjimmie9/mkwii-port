/* Function at 0x807D067C, size=20 bytes */
/* Stack frame: 272 bytes */
/* Calls: 1 function(s) */

void FUN_807D067C(void)
{
    /* Stack frame: -272(r1) */
    *(0x114 + r1) = r0; // stw @ 0x807D0684
    FUN_805E3430(); // bl 0x805E3430
}