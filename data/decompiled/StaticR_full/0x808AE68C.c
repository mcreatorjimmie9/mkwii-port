/* Function at 0x808AE68C, size=20 bytes */
/* Stack frame: 240 bytes */
/* Calls: 1 function(s) */

void FUN_808AE68C(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x808AE694
    FUN_805E3430(); // bl 0x805E3430
}