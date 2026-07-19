/* Function at 0x8064D5C4, size=468 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_8064D5C4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x8064D5CC
    /* li r4, 1 */ // 0x8064D5D0
    /* li r0, -1 */ // 0x8064D5D8
    /* li r5, 0 */ // 0x8064D5DC
    *(0x1c + r1) = r31; // stw @ 0x8064D5E0
    *(0x18 + r1) = r30; // stw @ 0x8064D5E4
    *(0x14 + r1) = r29; // stw @ 0x8064D5E8
    r29 = r3;
    *(0xa4c + r3) = r4; // stw @ 0x8064D5F0
    /* li r4, 1 */ // 0x8064D5F4
    *(0x820 + r3) = r6; // stw @ 0x8064D5F8
    *(0x824 + r3) = r6; // stw @ 0x8064D5FC
    *(0xa50 + r3) = r0; // stw @ 0x8064D600
    *(0xa54 + r3) = r0; // stw @ 0x8064D604
    r12 = *(0x828 + r3); // lwzu @ 0x8064D608
    r12 = *(0x10 + r12); // lwz @ 0x8064D60C
    /* mtctr r12 */ // 0x8064D610
    /* bctrl  */ // 0x8064D614
    r3 = r29;
    r4 = r29 + 0x828; // 0x8064D61C
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r29 + 0x828; // 0x8064D624
    r5 = r29 + 0x80c; // 0x8064D628
    /* li r4, 1 */ // 0x8064D62C
    /* li r6, 0 */ // 0x8064D630
    /* li r7, 0 */ // 0x8064D634
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r29;
    /* li r4, 4 */ // 0x8064D640
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r29;
    r5 = r29 + 0x44; // 0x8064D64C
    /* li r4, 0 */ // 0x8064D650
    /* li r6, 0 */ // 0x8064D654
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r0 = *(4 + r29); // lwz @ 0x8064D65C
    if (!=) goto 0x0x8064d678;
    r3 = r29 + 0x44; // 0x8064D668
    /* li r4, 1 */ // 0x8064D66C
    FUN_808D5444(r3, r4); // bl 0x808D5444
    /* b 0x8064d684 */ // 0x8064D674
    r3 = r29 + 0x44; // 0x8064D678
    /* li r4, 0 */ // 0x8064D67C
    FUN_808D5444(r4, r3, r4); // bl 0x808D5444
    r3 = r29;
    r5 = r29 + 0x1b8; // 0x8064D688
    /* li r4, 1 */ // 0x8064D68C
    /* li r6, 0 */ // 0x8064D690
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8064D698
    r3 = r29 + 0x1b8; // 0x8064D69C
    r4 = r31 + 0; // 0x8064D6A0
    /* li r7, 0x1f */ // 0x8064D6A4
    r5 = r4 + 0xf; // 0x8064D6A8
    /* li r8, 0 */ // 0x8064D6AC
    r6 = r4 + 0x19; // 0x8064D6B0
    /* li r9, 0 */ // 0x8064D6B4
    FUN_80649914(r7, r5, r8, r6, r9); // bl 0x80649914
    r3 = r29 + 0x1b8; // 0x8064D6BC
    r4 = r29 + 0x7e4; // 0x8064D6C0
    /* li r5, 0 */ // 0x8064D6C4
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r29;
    r5 = r29 + 0x40c; // 0x8064D6D0
    /* li r4, 2 */ // 0x8064D6D4
    /* li r6, 0 */ // 0x8064D6D8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x8064D6E0
    r3 = r29 + 0x40c; // 0x8064D6E4
    r4 = r31 + 0x1c; // 0x8064D6E8
    /* li r7, 0x1f */ // 0x8064D6EC
    r5 = r31 + 0x2b; // 0x8064D6F0
    r6 = r31 + 0x30; // 0x8064D6F4
    /* li r8, 0 */ // 0x8064D6F8
    /* li r9, 1 */ // 0x8064D6FC
    FUN_80649914(r7, r5, r6, r8, r9); // bl 0x80649914
    r3 = r29 + 0x40c; // 0x8064D704
    r4 = r29 + 0x7f8; // 0x8064D708
    /* li r5, 0 */ // 0x8064D70C
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r29;
    r5 = r29 + 0x670; // 0x8064D718
    /* li r4, 3 */ // 0x8064D71C
    /* li r6, 0 */ // 0x8064D720
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x670; // 0x8064D728
    r4 = r31 + 0x40; // 0x8064D72C
    r5 = r31 + 0x4f; // 0x8064D730
    r6 = r31 + 0x61; // 0x8064D734
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    /* li r30, 0 */ // 0x8064D73C
    /* li r31, 1 */ // 0x8064D740
    r3 = *(0xa4c + r29); // lwz @ 0x8064D744
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x8064D74C
    if (==) goto 0x0x8064d760;
    r4 = r30;
    r3 = r29 + 0x1b8; // 0x8064D758
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r30 = r30 + 1; // 0x8064D760
    if (<) goto 0x0x8064d744;
    r3 = r29 + 0x1b8; // 0x8064D76C
    /* li r4, 0x7d0 */ // 0x8064D770
    /* li r5, 0 */ // 0x8064D774
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x24 + r1); // lwz @ 0x8064D77C
    r31 = *(0x1c + r1); // lwz @ 0x8064D780
    r30 = *(0x18 + r1); // lwz @ 0x8064D784
    r29 = *(0x14 + r1); // lwz @ 0x8064D788
    return;
}