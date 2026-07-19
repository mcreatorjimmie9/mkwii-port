/* Function at 0x806400C4, size=20 bytes */
/* Stack frame: 208 bytes */
/* Calls: 1 function(s) */

void FUN_806400C4(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x806400CC
    FUN_805E3430(); // bl 0x805E3430
}