/* Function at 0x808DC674, size=212 bytes */
/* Stack frame: 32 bytes */

int FUN_808DC674(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0x4330 */ // 0x808DC678
    r5 = *(0x124 + r3); // lwz @ 0x808DC67C
    r7 = *(0x118 + r3); // lwz @ 0x808DC680
    r0 = r4 / r5; // 0x808DC684
    *(8 + r1) = r6; // stw @ 0x808DC688
    *(0x10 + r1) = r6; // stw @ 0x808DC68C
    r0 = r0 * r5; // 0x808DC690
    /* subf r6, r0, r4 */ // 0x808DC694
    if (>=) goto 0x0x808dc6bc;
    /* xoris r0, r6, 0x8000 */ // 0x808DC6A0
    *(0xc + r1) = r0; // stw @ 0x808DC6A4
    /* lis r3, 0 */ // 0x808DC6A8
    /* lfd f1, 0(r3) */ // 0x808DC6AC
    /* lfd f0, 8(r1) */ // 0x808DC6B0
    /* fsubs f1, f0, f1 */ // 0x808DC6B4
    /* b 0x808dc740 */ // 0x808DC6B8
    r4 = *(0x11c + r3); // lwz @ 0x808DC6BC
    r5 = r7 + r4; // 0x808DC6C0
    if (>=) goto 0x0x808dc6ec;
    /* subf r0, r7, r6 */ // 0x808DC6CC
    /* lis r3, 0 */ // 0x808DC6D0
    /* xoris r0, r0, 0x8000 */ // 0x808DC6D4
    *(0x14 + r1) = r0; // stw @ 0x808DC6D8
    /* lfd f1, 0(r3) */ // 0x808DC6DC
    /* lfd f0, 0x10(r1) */ // 0x808DC6E0
    /* fsubs f1, f0, f1 */ // 0x808DC6E4
    /* b 0x808dc740 */ // 0x808DC6E8
    /* slwi r3, r7, 1 */ // 0x808DC6EC
    r0 = r3 + r4; // 0x808DC6F0
    if (>=) goto 0x0x808dc71c;
    /* subf r0, r5, r6 */ // 0x808DC6FC
    /* lis r3, 0 */ // 0x808DC700
    /* xoris r0, r0, 0x8000 */ // 0x808DC704
    *(0xc + r1) = r0; // stw @ 0x808DC708
    /* lfd f1, 0(r3) */ // 0x808DC70C
    /* lfd f0, 8(r1) */ // 0x808DC710
    /* fsubs f1, f0, f1 */ // 0x808DC714
    /* b 0x808dc740 */ // 0x808DC718
    /* neg r0, r3 */ // 0x808DC71C
    /* lis r3, 0 */ // 0x808DC720
    /* subf r0, r4, r0 */ // 0x808DC724
    /* lfd f1, 0(r3) */ // 0x808DC728
    r0 = r0 + r6; // 0x808DC72C
    /* xoris r0, r0, 0x8000 */ // 0x808DC730
    *(0x14 + r1) = r0; // stw @ 0x808DC734
    /* lfd f0, 0x10(r1) */ // 0x808DC738
    /* fsubs f1, f0, f1 */ // 0x808DC73C
    return;
}