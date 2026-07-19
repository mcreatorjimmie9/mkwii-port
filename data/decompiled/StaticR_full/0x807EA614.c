/* Function at 0x807EA614, size=192 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807EA614(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0x4330 */ // 0x807EA61C
    *(0x4c + r1) = r31; // stw @ 0x807EA624
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x807EA62C
    r0 = *(0xdc + r3); // lwz @ 0x807EA630
    r4 = *(0xe0 + r3); // lwz @ 0x807EA634
    *(0x38 + r1) = r5; // stw @ 0x807EA63C
    r4 = r4 + 2; // 0x807EA640
    *(0x40 + r1) = r5; // stw @ 0x807EA644
    *(0xe0 + r3) = r4; // stw @ 0x807EA648
    if (!=) goto 0x0x807ea7c8;
    /* xoris r0, r4, 0x8000 */ // 0x807EA650
    *(0x3c + r1) = r0; // stw @ 0x807EA654
    /* lis r30, 0 */ // 0x807EA658
    r5 = *(0x30 + r3); // lwz @ 0x807EA65C
    /* lfd f1, 0(r30) */ // 0x807EA660
    /* lis r4, 0 */ // 0x807EA664
    /* lfd f0, 0x38(r1) */ // 0x807EA668
    r0 = *(0x38 + r3); // lwz @ 0x807EA66C
    /* fsubs f1, f0, f1 */ // 0x807EA670
    /* lfs f0, 0(r4) */ // 0x807EA674
    r4 = *(0x34 + r3); // lwz @ 0x807EA678
    *(0x2c + r1) = r5; // stw @ 0x807EA67C
    /* fmuls f1, f1, f0 */ // 0x807EA680
    *(0x30 + r1) = r4; // stw @ 0x807EA684
    *(0x34 + r1) = r0; // stw @ 0x807EA688
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807EA690
    r0 = *(0x2c + r31); // lhz @ 0x807EA694
    r4 = *(0 + r3); // lwz @ 0x807EA698
    /* lis r3, 0 */ // 0x807EA69C
    r6 = r0 | 1; // 0x807EA6A0
    /* lfs f4, 0x30(r1) */ // 0x807EA6A4
    /* xoris r0, r4, 0x8000 */ // 0x807EA6A8
    *(0x44 + r1) = r0; // stw @ 0x807EA6AC
    r0 = *(0xb4 + r31); // lwz @ 0x807EA6B0
    /* lfd f2, 0(r30) */ // 0x807EA6B4
    /* lfd f0, 0x40(r1) */ // 0x807EA6B8
    /* lfs f3, 0x2c(r1) */ // 0x807EA6C0
    /* fsubs f2, f0, f2 */ // 0x807EA6C4
    r5 = *(0x2c + r1); // lwz @ 0x807EA6C8
    r4 = *(0x30 + r1); // lwz @ 0x807EA6CC
    /* lfs f0, 0x34(r1) */ // 0x807EA6D0
}