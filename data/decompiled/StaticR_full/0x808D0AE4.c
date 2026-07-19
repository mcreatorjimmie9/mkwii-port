/* Function at 0x808D0AE4, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808D0AE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808D0AF4
    r31 = r31 + 0; // 0x808D0AF8
    *(0x28 + r1) = r30; // stw @ 0x808D0AFC
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x808D0B04
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x808D0B0C
    r28 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808D0B14
    *(0x644 + r3) = r0; // stw @ 0x808D0B18
    /* li r3, 0x78 */ // 0x808D0B1C
    FUN_808E4258(r3); // bl 0x808E4258
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_808E4948(r3, r4, r5, r6); // bl 0x808E4948
    r3 = *(0x644 + r28); // lwz @ 0x808D0B34
    /* lis r5, 0x4330 */ // 0x808D0B38
    /* lis r4, 0 */ // 0x808D0B3C
    *(8 + r1) = r5; // stw @ 0x808D0B40
    r0 = r3 + 1; // 0x808D0B44
    /* xoris r3, r3, 0x8000 */ // 0x808D0B48
    *(0xc + r1) = r3; // stw @ 0x808D0B4C
    /* xoris r0, r0, 0x8000 */ // 0x808D0B50
    /* lfd f5, 0x38(r31) */ // 0x808D0B54
    r4 = r4 + 0; // 0x808D0B58
    /* lfd f0, 8(r1) */ // 0x808D0B5C
    r3 = r28 + 0x660; // 0x808D0B60
    *(0x14 + r1) = r0; // stw @ 0x808D0B64
    r4 = r4 + 0xf0; // 0x808D0B68
    /* fsubs f1, f0, f5 */ // 0x808D0B6C
    /* lfs f2, 0x28(r31) */ // 0x808D0B70
    *(0x10 + r1) = r5; // stw @ 0x808D0B74
    /* lfs f3, 0x2c(r31) */ // 0x808D0B78
    /* lfd f0, 0x10(r1) */ // 0x808D0B7C
    /* fmuls f1, f2, f1 */ // 0x808D0B80
    /* lfs f4, 0x30(r31) */ // 0x808D0B84
    /* fsubs f0, f0, f5 */ // 0x808D0B88
    /* fmuls f2, f2, f0 */ // 0x808D0B8C
    FUN_806A1244(); // bl 0x806A1244
    r0 = *(0x34 + r1); // lwz @ 0x808D0B94
    r31 = *(0x2c + r1); // lwz @ 0x808D0B98
    r30 = *(0x28 + r1); // lwz @ 0x808D0B9C
    r29 = *(0x24 + r1); // lwz @ 0x808D0BA0
    r28 = *(0x20 + r1); // lwz @ 0x808D0BA4
    return;
}