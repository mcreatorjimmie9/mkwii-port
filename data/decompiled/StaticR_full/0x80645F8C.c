/* Function at 0x80645F8C, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80645F8C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x80645F94
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80645FA4
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80645FAC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80645FB4
    r28 = r3;
    r3 = *(0 + r7); // lwz @ 0x80645FBC
    r4 = *(0x10 + r4); // lbz @ 0x80645FC0
    FUN_805A4968(); // bl 0x805A4968
    r3 = *(0 + r3); // lwz @ 0x80645FC8
    /* lfs f2, 8(r3) */ // 0x80645FD0
    /* lfs f1, 4(r3) */ // 0x80645FD4
    /* lfs f0, 0(r3) */ // 0x80645FD8
    /* stfs f0, 0(r28) */ // 0x80645FDC
    /* stfs f1, 4(r28) */ // 0x80645FE0
    /* stfs f2, 8(r28) */ // 0x80645FE4
    if (==) goto 0x0x80645ffc;
    /* lis r3, 0 */ // 0x80645FEC
    /* lfs f0, 0(r3) */ // 0x80645FF0
    /* fadds f0, f1, f0 */ // 0x80645FF4
    /* stfs f0, 4(r28) */ // 0x80645FF8
    if (==) goto 0x0x8064602c;
    /* lis r3, 0 */ // 0x80646004
    r4 = *(0x10 + r29); // lbz @ 0x80646008
    r3 = *(0 + r3); // lwz @ 0x8064600C
    FUN_805A4968(r3); // bl 0x805A4968
    r4 = *(0 + r3); // lwz @ 0x80646014
    /* lis r3, 0 */ // 0x80646018
    /* lfs f1, 0(r3) */ // 0x8064601C
    /* lfs f0, 0xc(r4) */ // 0x80646020
    /* fmuls f0, f0, f1 */ // 0x80646024
    /* stfs f0, 0(r31) */ // 0x80646028
    r0 = *(0x24 + r1); // lwz @ 0x8064602C
    r31 = *(0x1c + r1); // lwz @ 0x80646030
    r30 = *(0x18 + r1); // lwz @ 0x80646034
    r29 = *(0x14 + r1); // lwz @ 0x80646038
    r28 = *(0x10 + r1); // lwz @ 0x8064603C
    return;
}