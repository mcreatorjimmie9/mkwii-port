/* Function at 0x808B36D4, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808B36D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808B36F0
    r28 = r3;
    *(0x50 + r3) = r4; // stw @ 0x808B36F8
    r12 = *(0 + r3); // lwz @ 0x808B36FC
    r12 = *(0x68 + r12); // lwz @ 0x808B3700
    /* mtctr r12 */ // 0x808B3704
    /* bctrl  */ // 0x808B3708
    r4 = r3;
    r3 = r29;
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    /* li r30, 0 */ // 0x808B3718
    /* li r31, 1 */ // 0x808B371C
    r12 = *(0 + r28); // lwz @ 0x808B3720
    r3 = r28;
    r12 = *(0x68 + r12); // lwz @ 0x808B3728
    /* mtctr r12 */ // 0x808B372C
    /* bctrl  */ // 0x808B3730
    r0 = r31 << r30; // slw
    /* and. r0, r0, r3 */ // 0x808B3738
    if (==) goto 0x0x808b3768;
    r3 = r29;
    r4 = r30;
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r12 = *(0 + r28); // lwz @ 0x808B374C
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x808B375C
    /* mtctr r12 */ // 0x808B3760
    /* bctrl  */ // 0x808B3764
    r30 = r30 + 1; // 0x808B3768
    if (<) goto 0x0x808b3720;
    r0 = *(0x24 + r1); // lwz @ 0x808B3774
    r31 = *(0x1c + r1); // lwz @ 0x808B3778
    r30 = *(0x18 + r1); // lwz @ 0x808B377C
    r29 = *(0x14 + r1); // lwz @ 0x808B3780
    r28 = *(0x10 + r1); // lwz @ 0x808B3784
    return;
}