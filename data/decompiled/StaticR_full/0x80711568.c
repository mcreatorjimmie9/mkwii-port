/* Function at 0x80711568, size=20 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

void FUN_80711568(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80711570
    FUN_805E3430(); // bl 0x805E3430
}