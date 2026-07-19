/* Function at 0x807C07F4, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807C07F4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x807C0800
    /* stmw r27, 0xc(r1) */ // 0x807C0804
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x807c0874;
    /* lis r4, 0 */ // 0x807C0814
    r30 = r27;
    r4 = r4 + 0; // 0x807C081C
    *(0 + r3) = r4; // stw @ 0x807C0820
    /* li r29, 0 */ // 0x807C0824
    /* li r31, 0 */ // 0x807C0828
    r3 = *(4 + r30); // lwz @ 0x807C082C
    if (==) goto 0x0x807c0854;
    if (==) goto 0x0x807c0850;
    r12 = *(0 + r3); // lwz @ 0x807C083C
    /* li r4, 1 */ // 0x807C0840
    r12 = *(8 + r12); // lwz @ 0x807C0844
    /* mtctr r12 */ // 0x807C0848
    /* bctrl  */ // 0x807C084C
    *(4 + r30) = r31; // stw @ 0x807C0850
    r29 = r29 + 1; // 0x807C0854
    r30 = r30 + 4; // 0x807C0858
    if (<) goto 0x0x807c082c;
    if (<=) goto 0x0x807c0874;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x807C087C
    return;
}