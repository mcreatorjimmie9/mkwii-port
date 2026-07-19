/* Function at 0x807C559C, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C559C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C55AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C55B4
    r30 = r3;
    if (==) goto 0x0x807c5670;
    r0 = *(0x168 + r3); // lwz @ 0x807C55C0
    /* lis r4, 0 */ // 0x807C55C4
    r4 = r4 + 0; // 0x807C55C8
    *(0x34 + r3) = r4; // stw @ 0x807C55CC
    if (==) goto 0x0x807c55f0;
    r3 = r0;
    /* li r4, 1 */ // 0x807C55DC
    r12 = *(0 + r3); // lwz @ 0x807C55E0
    r12 = *(8 + r12); // lwz @ 0x807C55E4
    /* mtctr r12 */ // 0x807C55E8
    /* bctrl  */ // 0x807C55EC
    r3 = *(0x16c + r30); // lwz @ 0x807C55F0
    /* li r0, 0 */ // 0x807C55F4
    *(0x168 + r30) = r0; // stw @ 0x807C55F8
    if (==) goto 0x0x807c5618;
    r12 = *(0 + r3); // lwz @ 0x807C5604
    /* li r4, 1 */ // 0x807C5608
    r12 = *(8 + r12); // lwz @ 0x807C560C
    /* mtctr r12 */ // 0x807C5610
    /* bctrl  */ // 0x807C5614
    r3 = *(0x170 + r30); // lwz @ 0x807C5618
    /* li r0, 0 */ // 0x807C561C
    *(0x16c + r30) = r0; // stw @ 0x807C5620
    if (==) goto 0x0x807c5640;
    r12 = *(0 + r3); // lwz @ 0x807C562C
    /* li r4, 1 */ // 0x807C5630
    r12 = *(8 + r12); // lwz @ 0x807C5634
    /* mtctr r12 */ // 0x807C5638
    /* bctrl  */ // 0x807C563C
    r3 = *(0x190 + r30); // lwz @ 0x807C5640
    /* li r0, 0 */ // 0x807C5644
    *(0x170 + r30) = r0; // stw @ 0x807C5648
    if (==) goto 0x0x807c5658;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x807C565C
    *(0x190 + r30) = r0; // stw @ 0x807C5660
    if (<=) goto 0x0x807c5670;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807C5674
    r30 = *(8 + r1); // lwz @ 0x807C5678
    r0 = *(0x14 + r1); // lwz @ 0x807C567C
    return;
}