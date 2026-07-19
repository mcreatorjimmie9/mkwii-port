/* Function at 0x80637F8C, size=176 bytes */
/* Stack frame: 64 bytes */

void FUN_80637F8C(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* lis r8, 0x4330 */ // 0x80637F90
    r0 = *(0 + r4); // lbz @ 0x80637F94
    /* lis r7, 0 */ // 0x80637F98
    *(0xc + r1) = r0; // stw @ 0x80637F9C
    r6 = *(1 + r4); // lbz @ 0x80637FA0
    *(8 + r1) = r8; // stw @ 0x80637FA4
    r5 = *(2 + r4); // lbz @ 0x80637FA8
    /* lfd f0, 8(r1) */ // 0x80637FAC
    /* lfd f5, 0(r7) */ // 0x80637FB0
    *(0xc + r1) = r5; // stw @ 0x80637FB4
    /* fsubs f2, f0, f5 */ // 0x80637FB8
    r0 = *(3 + r4); // lbz @ 0x80637FBC
    /* lfd f0, 8(r1) */ // 0x80637FC0
    *(0x10 + r1) = r8; // stw @ 0x80637FC4
    /* fsubs f0, f0, f5 */ // 0x80637FC8
    /* fmuls f3, f2, f1 */ // 0x80637FCC
    *(0x14 + r1) = r6; // stw @ 0x80637FD0
    /* lfd f2, 0x10(r1) */ // 0x80637FD4
    /* fmuls f0, f0, f1 */ // 0x80637FD8
    /* fctiwz f4, f3 */ // 0x80637FDC
    /* fsubs f3, f2, f5 */ // 0x80637FE0
    *(0x14 + r1) = r0; // stw @ 0x80637FE4
    /* fctiwz f2, f0 */ // 0x80637FE8
    /* lfd f0, 0x10(r1) */ // 0x80637FEC
    /* stfd f2, 0x28(r1) */ // 0x80637FF0
    /* fmuls f3, f3, f1 */ // 0x80637FF4
    /* fsubs f0, f0, f5 */ // 0x80637FF8
    /* stfd f4, 0x18(r1) */ // 0x80637FFC
    /* fctiwz f2, f3 */ // 0x80638000
    r4 = *(0x2c + r1); // lwz @ 0x80638004
    /* fmuls f0, f0, f1 */ // 0x80638008
    r0 = *(0x1c + r1); // lwz @ 0x8063800C
    /* stfd f2, 0x20(r1) */ // 0x80638010
    /* fctiwz f0, f0 */ // 0x80638014
    r5 = *(0x24 + r1); // lwz @ 0x80638018
    *(0 + r3) = r0; // stb @ 0x8063801C
    /* stfd f0, 0x30(r1) */ // 0x80638020
    r0 = *(0x34 + r1); // lwz @ 0x80638024
    *(1 + r3) = r5; // stb @ 0x80638028
    *(2 + r3) = r4; // stb @ 0x8063802C
    *(3 + r3) = r0; // stb @ 0x80638030
    return;
}