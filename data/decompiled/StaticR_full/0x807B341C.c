/* Function at 0x807B341C, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_807B341C(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x807B3424
    FUN_805E3430(); // bl 0x805E3430
}