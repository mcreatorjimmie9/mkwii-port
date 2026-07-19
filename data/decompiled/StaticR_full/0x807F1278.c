/* Function at 0x807F1278, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_807F1278(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807F1280
    /* lis r4, 0 */ // 0x807F1284
    *(0x24 + r1) = r0; // stw @ 0x807F1288
    /* li r0, 0 */ // 0x807F128C
    /* lfd f1, 0(r5) */ // 0x807F1290
    *(0x1c + r1) = r31; // stw @ 0x807F1294
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807F129C
    /* lis r0, 0x4330 */ // 0x807F12A0
    r7 = *(0xa0 + r3); // lwz @ 0x807F12A4
    /* lfs f0, 0(r4) */ // 0x807F12A8
    /* li r4, 1 */ // 0x807F12AC
    /* stfs f0, 0xc4(r3) */ // 0x807F12B0
    r6 = *(0 + r7); // lwz @ 0x807F12B4
    *(8 + r1) = r0; // stw @ 0x807F12B8
    r0 = *(0x30 + r6); // lha @ 0x807F12BC
    /* xoris r0, r0, 0x8000 */ // 0x807F12C0
    *(0xc + r1) = r0; // stw @ 0x807F12C4
    /* lfd f0, 8(r1) */ // 0x807F12C8
    /* fsubs f0, f0, f1 */ // 0x807F12CC
    /* stfs f0, 0xbc(r3) */ // 0x807F12D0
    r5 = *(0 + r7); // lwz @ 0x807F12D4
    r0 = *(0x2c + r5); // lha @ 0x807F12D8
    *(0xcc + r3) = r0; // stw @ 0x807F12DC
    r12 = *(0 + r3); // lwz @ 0x807F12E0
    r12 = *(0x68 + r12); // lwz @ 0x807F12E4
    /* mtctr r12 */ // 0x807F12E8
    /* bctrl  */ // 0x807F12EC
    r12 = *(0 + r31); // lwz @ 0x807F12F0
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807F12F8
    /* mtctr r12 */ // 0x807F12FC
    /* bctrl  */ // 0x807F1300
    /* li r0, 1 */ // 0x807F1304
    *(0x10c + r31) = r0; // stb @ 0x807F1308
    r31 = *(0x1c + r1); // lwz @ 0x807F130C
    r0 = *(0x24 + r1); // lwz @ 0x807F1310
    return;
}