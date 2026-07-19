/* Function at 0x807F84F0, size=260 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807F84F0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x807F8504
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x807F850C
    if (==) goto 0x0x807f85d8;
    /* lis r4, 0 */ // 0x807F8518
    r4 = *(0 + r4); // lwz @ 0x807F851C
    r0 = *(0x25 + r4); // lbz @ 0x807F8520
    if (!=) goto 0x0x807f8544;
    r12 = *(0 + r3); // lwz @ 0x807F852C
    r12 = *(0x38 + r12); // lwz @ 0x807F8530
    /* mtctr r12 */ // 0x807F8534
    /* bctrl  */ // 0x807F8538
    r30 = r3;
    /* b 0x807f8558 */ // 0x807F8540
    r12 = *(0 + r3); // lwz @ 0x807F8544
    r12 = *(0x3c + r12); // lwz @ 0x807F8548
    /* mtctr r12 */ // 0x807F854C
    /* bctrl  */ // 0x807F8550
    r30 = r3;
    /* li r31, 0 */ // 0x807F8558
    /* lis r5, 0 */ // 0x807F855C
    *(0x18 + r1) = r31; // stw @ 0x807F8560
    r5 = r5 + 0; // 0x807F8568
    /* li r4, 1 */ // 0x807F856C
    FUN_805EB338(r5, r3, r5, r4); // bl 0x805EB338
    r0 = *(0x18 + r1); // lwz @ 0x807F8574
    /* lis r6, 0 */ // 0x807F8578
    *(0x14 + r1) = r0; // stw @ 0x807F857C
    r6 = r6 + 0; // 0x807F8584
    /* li r4, 0 */ // 0x807F8588
    *(8 + r1) = r31; // stw @ 0x807F858C
    /* li r7, 0 */ // 0x807F8590
    /* li r8, 0 */ // 0x807F8594
    /* li r9, 0 */ // 0x807F8598
    r3 = *(8 + r29); // lwz @ 0x807F859C
    /* li r10, 9 */ // 0x807F85A0
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    r0 = *(0x18 + r1); // lwz @ 0x807F85A8
    r6 = r30;
    *(0x10 + r1) = r0; // stw @ 0x807F85B0
    /* li r4, 1 */ // 0x807F85B8
    /* li r7, 1 */ // 0x807F85BC
    *(8 + r1) = r31; // stw @ 0x807F85C0
    /* li r8, 0 */ // 0x807F85C4
    /* li r9, 0 */ // 0x807F85C8
    /* li r10, 9 */ // 0x807F85CC
    r3 = *(8 + r29); // lwz @ 0x807F85D0
    FUN_805EDB0C(r8, r9, r10); // bl 0x805EDB0C
    r0 = *(0x34 + r1); // lwz @ 0x807F85D8
    r31 = *(0x2c + r1); // lwz @ 0x807F85DC
    r30 = *(0x28 + r1); // lwz @ 0x807F85E0
    r29 = *(0x24 + r1); // lwz @ 0x807F85E4
    return;
}