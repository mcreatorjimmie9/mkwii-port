/* Function at 0x807D6404, size=20 bytes */
/* Stack frame: 448 bytes */
/* Calls: 1 function(s) */

void FUN_807D6404(void)
{
    /* Stack frame: -448(r1) */
    *(0x1c4 + r1) = r0; // stw @ 0x807D640C
    FUN_805E3430(); // bl 0x805E3430
}