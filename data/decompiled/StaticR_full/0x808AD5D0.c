/* Function at 0x808AD5D0, size=20 bytes */
/* Stack frame: 688 bytes */
/* Calls: 1 function(s) */

void FUN_808AD5D0(void)
{
    /* Stack frame: -688(r1) */
    *(0x2b4 + r1) = r0; // stw @ 0x808AD5D8
    FUN_805E3430(); // bl 0x805E3430
}