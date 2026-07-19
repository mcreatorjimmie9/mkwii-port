/* Function at 0x808E028C, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E028C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808E029C
    *(8 + r1) = r30; // stw @ 0x808E02A0
    r30 = r3;
    r3 = *(8 + r30); // lwz @ 0x808E02A8
    r0 = r31 rlwinm 2; // rlwinm
    /* li r4, 0 */ // 0x808E02B0
    /* lwzx r3, r3, r0 */ // 0x808E02B4
    r12 = *(0 + r3); // lwz @ 0x808E02B8
    r12 = *(0xc + r12); // lwz @ 0x808E02BC
    /* mtctr r12 */ // 0x808E02C0
    /* bctrl  */ // 0x808E02C4
    r31 = r31 + 1; // 0x808E02C8
    if (<) goto 0x0x808e02a8;
    r3 = *(4 + r30); // lwz @ 0x808E02D4
    if (==) goto 0x0x808e02f4;
    r12 = *(0 + r3); // lwz @ 0x808E02E0
    /* li r4, 0 */ // 0x808E02E4
    r12 = *(0xc + r12); // lwz @ 0x808E02E8
    /* mtctr r12 */ // 0x808E02EC
    /* bctrl  */ // 0x808E02F0
    r3 = *(8 + r30); // lwz @ 0x808E02F4
    /* li r4, 1 */ // 0x808E02F8
    r3 = *(0 + r3); // lwz @ 0x808E02FC
    *(4 + r30) = r3; // stw @ 0x808E0300
    r12 = *(0 + r3); // lwz @ 0x808E0304
    r12 = *(0xc + r12); // lwz @ 0x808E0308
    /* mtctr r12 */ // 0x808E030C
    /* bctrl  */ // 0x808E0310
    r3 = *(4 + r30); // lwz @ 0x808E0314
    /* li r4, 0 */ // 0x808E0318
    r3 = *(0x28 + r3); // lwz @ 0x808E031C
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0324
    if (==) goto 0x0x808e0350;
    r4 = *(4 + r30); // lwz @ 0x808E0330
    /* lis r3, 0 */ // 0x808E0334
    /* lis r5, 0 */ // 0x808E0338
    /* lfs f1, 0(r3) */ // 0x808E033C
    r3 = *(0x28 + r4); // lwz @ 0x808E0340
    /* li r4, 0 */ // 0x808E0344
    /* lfs f2, 0(r5) */ // 0x808E0348
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* li r0, 0 */ // 0x808E0350
    *(0xc + r30) = r0; // stw @ 0x808E0354
    r31 = *(0xc + r1); // lwz @ 0x808E0358
    r30 = *(8 + r1); // lwz @ 0x808E035C
    r0 = *(0x14 + r1); // lwz @ 0x808E0360
    return;
}