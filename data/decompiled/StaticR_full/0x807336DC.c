/* Function at 0x807336DC, size=428 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807336DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807336F8
    *(0x10 + r1) = r28; // stw @ 0x807336FC
    r0 = *(0x25 + r3); // lbz @ 0x80733700
    if (==) goto 0x0x80733718;
    r0 = *(0x27 + r3); // lbz @ 0x8073370C
    if (==) goto 0x0x80733940;
    r0 = *(0x28 + r3); // lbz @ 0x80733718
    if (!=) goto 0x0x80733940;
    r0 = *(7 + r3); // lbz @ 0x80733724
    if (!=) goto 0x0x80733940;
    /* lis r4, 0 */ // 0x80733730
    r4 = *(0 + r4); // lwz @ 0x80733734
    r0 = *(0x10 + r4); // lbz @ 0x80733738
    if (==) goto 0x0x80733748;
    /* b 0x80733940 */ // 0x80733744
    r28 = r3 + 0x30; // 0x80733748
    /* li r29, 0xc */ // 0x8073374C
    r3 = *(0x2d8 + r28); // lwz @ 0x80733750
    if (==) goto 0x0x807337d0;
    r3 = r3 + 0x74; // 0x8073375C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733774;
    /* li r3, 0 */ // 0x8073376C
    /* b 0x80733778 */ // 0x80733770
    r3 = *(0xc + r3); // lwz @ 0x80733774
    /* li r0, 0 */ // 0x8073377C
    if (==) goto 0x0x8073378c;
    if (!=) goto 0x0x80733790;
    /* li r0, 1 */ // 0x8073378C
    if (==) goto 0x0x807337d0;
    /* slwi r0, r29, 0x1e */ // 0x80733798
    /* srwi r3, r29, 0x1f */ // 0x8073379C
    /* subf r0, r3, r0 */ // 0x807337A0
    /* rotlwi r0, r0, 2 */ // 0x807337A4
    r0 = r0 + r3; // 0x807337A8
    r3 = r30 + r0; // 0x807337AC
    r0 = *(0x848 + r3); // lbz @ 0x807337B0
    if (==) goto 0x0x807337d0;
    r3 = *(0x2d8 + r28); // lwz @ 0x807337BC
    r12 = *(0 + r3); // lwz @ 0x807337C0
    r12 = *(0x18 + r12); // lwz @ 0x807337C4
    /* mtctr r12 */ // 0x807337C8
    /* bctrl  */ // 0x807337CC
    r29 = r29 + 1; // 0x807337D0
    r28 = r28 + 4; // 0x807337D4
    if (<) goto 0x0x80733750;
    r28 = r30;
    /* li r29, 0 */ // 0x807337E4
    r3 = *(0x2d8 + r28); // lwz @ 0x807337E8
    if (==) goto 0x0x80733828;
    /* slwi r0, r29, 0x1e */ // 0x807337F4
    /* srwi r4, r29, 0x1f */ // 0x807337F8
    /* subf r0, r4, r0 */ // 0x807337FC
    /* rotlwi r0, r0, 2 */ // 0x80733800
    r0 = r0 + r4; // 0x80733804
    r4 = r30 + r0; // 0x80733808
    r0 = *(0x848 + r4); // lbz @ 0x8073380C
    if (==) goto 0x0x80733828;
    r12 = *(0 + r3); // lwz @ 0x80733818
    r12 = *(0x18 + r12); // lwz @ 0x8073381C
    /* mtctr r12 */ // 0x80733820
    /* bctrl  */ // 0x80733824
    r29 = r29 + 1; // 0x80733828
    r28 = r28 + 4; // 0x8073382C
    if (<) goto 0x0x807337e8;
    r28 = r30 + 0x10; // 0x80733838
    /* li r29, 4 */ // 0x8073383C
    r3 = *(0x2d8 + r28); // lwz @ 0x80733840
    if (==) goto 0x0x807338c0;
    r3 = r3 + 0x74; // 0x8073384C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733864;
    /* li r3, 0 */ // 0x8073385C
    /* b 0x80733868 */ // 0x80733860
    r3 = *(0xc + r3); // lwz @ 0x80733864
    /* li r0, 0 */ // 0x8073386C
    if (==) goto 0x0x8073387c;
    if (!=) goto 0x0x80733880;
    /* li r0, 1 */ // 0x8073387C
    if (==) goto 0x0x807338c0;
}