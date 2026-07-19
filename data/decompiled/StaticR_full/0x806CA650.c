/* Function at 0x806CA650, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806CA650(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806CA658
    *(0x14 + r1) = r29; // stw @ 0x806CA668
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806CA670
    r28 = r3;
    *(0x17c + r3) = r4; // stw @ 0x806CA678
    r3 = *(0 + r5); // lwz @ 0x806CA67C
    r3 = *(0 + r3); // lwz @ 0x806CA680
    r30 = *(0x204 + r3); // lwz @ 0x806CA684
    if (!=) goto 0x0x806ca698;
    /* li r30, 0 */ // 0x806CA690
    /* b 0x806ca6ec */ // 0x806CA694
    /* lis r31, 0 */ // 0x806CA698
    r31 = r31 + 0; // 0x806CA69C
    if (==) goto 0x0x806ca6e8;
    r12 = *(0 + r30); // lwz @ 0x806CA6A4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CA6AC
    /* mtctr r12 */ // 0x806CA6B0
    /* bctrl  */ // 0x806CA6B4
    /* b 0x806ca6d0 */ // 0x806CA6B8
    if (!=) goto 0x0x806ca6cc;
    /* li r0, 1 */ // 0x806CA6C4
    /* b 0x806ca6dc */ // 0x806CA6C8
    r3 = *(0 + r3); // lwz @ 0x806CA6CC
    if (!=) goto 0x0x806ca6bc;
    /* li r0, 0 */ // 0x806CA6D8
    if (==) goto 0x0x806ca6e8;
    /* b 0x806ca6ec */ // 0x806CA6E4
    /* li r30, 0 */ // 0x806CA6E8
    r4 = *(0x174 + r28); // lbz @ 0x806CA6EC
    r3 = r30;
    r5 = r29;
    FUN_806CC89C(r3, r5); // bl 0x806CC89C
    r3 = r28;
    FUN_806CA9EC(r3, r5, r3); // bl 0x806CA9EC
    r0 = *(0x24 + r1); // lwz @ 0x806CA704
    r31 = *(0x1c + r1); // lwz @ 0x806CA708
    r30 = *(0x18 + r1); // lwz @ 0x806CA70C
    r29 = *(0x14 + r1); // lwz @ 0x806CA710
    r28 = *(0x10 + r1); // lwz @ 0x806CA714
    return;
}