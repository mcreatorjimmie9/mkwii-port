/* Function at 0x807FA330, size=20 bytes */
/* Stack frame: 304 bytes */
/* Calls: 1 function(s) */

void FUN_807FA330(void)
{
    /* Stack frame: -304(r1) */
    *(0x134 + r1) = r0; // stw @ 0x807FA338
    FUN_805E3430(); // bl 0x805E3430
}