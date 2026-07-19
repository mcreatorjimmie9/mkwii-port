/* Function at 0x80613280, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80613280(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80613288
    FUN_8061EE94(); // bl 0x8061EE94
    FUN_80644CCC(); // bl 0x80644CCC
    r0 = *(0x14 + r1); // lwz @ 0x80613294
    return;
}