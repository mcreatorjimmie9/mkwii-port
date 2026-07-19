/* Function at 0x807816BC, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_807816BC(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x807816C4
    FUN_805E3430(); // bl 0x805E3430
}