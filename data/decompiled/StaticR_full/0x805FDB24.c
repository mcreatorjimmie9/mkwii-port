/* Function at 0x805FDB24, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805FDB24(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805FDB30
    r31 = r7;
    r29 = r5;
    r27 = r3;
    r28 = r4;
    r30 = r6;
    r5 = r31;
    FUN_805FDB80(r5); // bl 0x805FDB80
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r7 = r31;
    /* li r8, 1 */ // 0x805FDB64
    FUN_805FDC54(r4, r5, r6, r7, r8); // bl 0x805FDC54
    r0 = *(0x24 + r1); // lwz @ 0x805FDB70
    return;
}