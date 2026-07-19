/* Function at 0x80899968, size=320 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80899968(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80899970
    /* lis r0, 0x4330 */ // 0x80899978
    *(0x2c + r1) = r31; // stw @ 0x8089997C
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x80899984
    *(0x24 + r1) = r29; // stw @ 0x80899988
    r29 = r4;
    r6 = *(0 + r5); // lwz @ 0x80899990
    /* lis r5, 0 */ // 0x80899994
    *(8 + r1) = r0; // stw @ 0x80899998
    r0 = *(0x20 + r6); // lwz @ 0x8089999C
    /* lfd f1, 0(r5) */ // 0x808999A0
    /* subf r0, r4, r0 */ // 0x808999A4
    *(0xc + r1) = r0; // stw @ 0x808999A8
    r0 = *(0x130 + r3); // lwz @ 0x808999AC
    /* lfd f0, 8(r1) */ // 0x808999B0
    /* fsubs f0, f0, f1 */ // 0x808999B4
    /* fctiwz f0, f0 */ // 0x808999B8
    /* stfd f0, 0x10(r1) */ // 0x808999BC
    r4 = *(0x14 + r1); // lwz @ 0x808999C0
    if (>=) goto 0x0x808999d4;
    /* li r30, 0 */ // 0x808999CC
    /* b 0x80899a30 */ // 0x808999D0
    /* stfd f0, 0x10(r1) */ // 0x808999D4
    r0 = *(0x134 + r3); // lwz @ 0x808999D8
    r4 = *(0x14 + r1); // lwz @ 0x808999DC
    if (>=) goto 0x0x808999f0;
    /* li r30, 1 */ // 0x808999E8
    /* b 0x80899a30 */ // 0x808999EC
    /* stfd f0, 0x10(r1) */ // 0x808999F0
    r4 = *(0x138 + r3); // lwz @ 0x808999F4
    r0 = *(0x14 + r1); // lwz @ 0x808999F8
    if (>=) goto 0x0x80899a0c;
    /* li r30, 2 */ // 0x80899A04
    /* b 0x80899a30 */ // 0x80899A08
    /* lis r3, 0 */ // 0x80899A0C
    /* stfd f0, 0x10(r1) */ // 0x80899A10
    r0 = *(0 + r3); // lwz @ 0x80899A14
    /* li r30, 4 */ // 0x80899A18
    r3 = *(0x14 + r1); // lwz @ 0x80899A1C
    r0 = r4 + r0; // 0x80899A20
    if (>=) goto 0x0x80899a30;
    /* li r30, 3 */ // 0x80899A2C
    r12 = *(0 + r31); // lwz @ 0x80899A30
    r3 = r31;
    r4 = r30;
    r12 = *(0x158 + r12); // lwz @ 0x80899A3C
    /* mtctr r12 */ // 0x80899A40
    /* bctrl  */ // 0x80899A44
    if (==) goto 0x0x80899a8c;
    if (!=) goto 0x0x80899a5c;
    /* b 0x80899a8c */ // 0x80899A58
    r12 = *(0 + r31); // lwz @ 0x80899A5C
    r3 = r31;
    r4 = r29;
    r12 = *(0x130 + r12); // lwz @ 0x80899A68
    /* mtctr r12 */ // 0x80899A6C
    /* bctrl  */ // 0x80899A70
    r3 = *(0xac + r31); // lwz @ 0x80899A74
    /* stfs f1, 0x64(r3) */ // 0x80899A78
    r3 = *(0x16c + r31); // lwz @ 0x80899A7C
    if (==) goto 0x0x80899a8c;
    /* stfs f1, 0x64(r3) */ // 0x80899A88
    r0 = *(0x34 + r1); // lwz @ 0x80899A8C
    r31 = *(0x2c + r1); // lwz @ 0x80899A90
    r30 = *(0x28 + r1); // lwz @ 0x80899A94
    r29 = *(0x24 + r1); // lwz @ 0x80899A98
    return;
}