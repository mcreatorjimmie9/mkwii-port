/* Function at 0x808EE4F8, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_808EE4F8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x808EE504
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808EE50C
    r12 = *(0x70 + r12); // lwz @ 0x808EE510
    /* mtctr r12 */ // 0x808EE514
    /* bctrl  */ // 0x808EE518
    /* clrlwi r31, r3, 0x18 */ // 0x808EE51C
    /* li r8, 0 */ // 0x808EE520
    /* lis r6, 0 */ // 0x808EE524
    /* b 0x808ee57c */ // 0x808EE528
    /* clrlwi r4, r8, 0x18 */ // 0x808EE52C
    r0 = *(0x1a4 + r30); // lwz @ 0x808EE530
    /* mulli r7, r4, 0xc */ // 0x808EE534
    r3 = r0 + r7; // 0x808EE538
    *(8 + r3) = r8; // stb @ 0x808EE53C
    /* mulli r5, r4, 0xf0 */ // 0x808EE540
    r8 = r8 + 1; // 0x808EE544
    r0 = *(0 + r6); // lwz @ 0x808EE548
    r3 = *(0x1a4 + r30); // lwz @ 0x808EE54C
    r4 = r0 + r5; // 0x808EE550
    r0 = *(0xcf2 + r4); // lhz @ 0x808EE554
    /* stwx r0, r3, r7 */ // 0x808EE558
    r3 = *(0 + r6); // lwz @ 0x808EE55C
    r0 = *(0x1a4 + r30); // lwz @ 0x808EE560
    r5 = r3 + r5; // 0x808EE564
    r3 = r0 + r7; // 0x808EE568
    r4 = *(0x100 + r5); // lhz @ 0x808EE56C
    r0 = *(0xcf2 + r5); // lhz @ 0x808EE570
    /* subf r0, r4, r0 */ // 0x808EE574
    *(4 + r3) = r0; // stw @ 0x808EE578
    r3 = *(0 + r6); // lwz @ 0x808EE57C
    /* clrlwi r4, r8, 0x18 */ // 0x808EE580
    r0 = *(0x24 + r3); // lbz @ 0x808EE584
    if (<) goto 0x0x808ee52c;
    /* lis r6, 0 */ // 0x808EE590
    r3 = *(0x1a4 + r30); // lwz @ 0x808EE594
    r4 = r31;
    /* li r5, 0xc */ // 0x808EE59C
    r6 = r6 + 0; // 0x808EE5A0
    FUN_805E3430(r6, r4, r5, r6); // bl 0x805E3430
}