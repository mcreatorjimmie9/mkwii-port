/* Function at 0x806BC58C, size=20 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

void FUN_806BC58C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x806BC594
    FUN_805E3430(); // bl 0x805E3430
}