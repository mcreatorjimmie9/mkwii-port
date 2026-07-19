/* Function at 0x805D2674, size=16 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805D2674(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805D267C
    FUN_805E3430(); // bl 0x805E3430
}