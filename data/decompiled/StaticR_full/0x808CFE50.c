/* Function at 0x808CFE50, size=44 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808CFE50(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808CFE58
    FUN_80694774(); // bl 0x80694774
    r0 = r3 + -2; // 0x808CFE60
    /* cntlzw r0, r0 */ // 0x808CFE64
    /* srwi r3, r0, 5 */ // 0x808CFE68
    r0 = *(0x14 + r1); // lwz @ 0x808CFE6C
    return;
}