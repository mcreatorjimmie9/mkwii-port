/* Function at 0x80637E8C, size=256 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */

void FUN_80637E8C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r12 = *(0 + r4); // lbz @ 0x80637E8C
    /* lis r8, 0 */ // 0x80637E90
    r6 = *(0 + r5); // lbz @ 0x80637E94
    /* subf r6, r12, r6 */ // 0x80637E9C
    r11 = *(1 + r4); // lbz @ 0x80637EA0
    *(0x3c + r1) = r31; // stw @ 0x80637EA4
    /* lis r31, 0x4330 */ // 0x80637EA8
    /* xoris r7, r6, 0x8000 */ // 0x80637EAC
    r0 = *(1 + r5); // lbz @ 0x80637EB0
    *(8 + r1) = r31; // stw @ 0x80637EB4
    /* subf r0, r11, r0 */ // 0x80637EB8
    /* lfd f5, 0(r8) */ // 0x80637EBC
    /* xoris r6, r0, 0x8000 */ // 0x80637EC0
    *(0xc + r1) = r7; // stw @ 0x80637EC4
    r10 = *(2 + r4); // lbz @ 0x80637EC8
    /* lfd f0, 8(r1) */ // 0x80637ECC
    r9 = *(3 + r4); // lbz @ 0x80637ED0
    /* fsubs f2, f0, f5 */ // 0x80637ED4
    r4 = *(2 + r5); // lbz @ 0x80637ED8
    r0 = *(3 + r5); // lbz @ 0x80637EDC
    /* subf r4, r10, r4 */ // 0x80637EE0
    *(0x10 + r1) = r31; // stw @ 0x80637EE4
    /* subf r0, r9, r0 */ // 0x80637EE8
    *(0x14 + r1) = r6; // stw @ 0x80637EEC
    /* fmuls f2, f1, f2 */ // 0x80637EF0
    /* xoris r4, r4, 0x8000 */ // 0x80637EF4
    /* xoris r0, r0, 0x8000 */ // 0x80637EF8
    /* lfd f0, 0x10(r1) */ // 0x80637EFC
    /* fctiwz f4, f2 */ // 0x80637F00
    *(0xc + r1) = r4; // stw @ 0x80637F04
    /* fsubs f3, f0, f5 */ // 0x80637F08
    *(0x14 + r1) = r0; // stw @ 0x80637F0C
    /* lfd f2, 8(r1) */ // 0x80637F10
    /* lfd f0, 0x10(r1) */ // 0x80637F14
    /* fmuls f3, f1, f3 */ // 0x80637F18
    /* fsubs f2, f2, f5 */ // 0x80637F1C
    /* stfd f4, 0x18(r1) */ // 0x80637F20
    /* fsubs f0, f0, f5 */ // 0x80637F24
    /* fctiwz f3, f3 */ // 0x80637F28
    r0 = *(0x1c + r1); // lwz @ 0x80637F2C
    /* fmuls f2, f1, f2 */ // 0x80637F30
    /* fmuls f0, f1, f0 */ // 0x80637F34
    /* stfd f3, 0x20(r1) */ // 0x80637F38
    r6 = r12 + r0; // 0x80637F3C
    /* fctiwz f1, f2 */ // 0x80637F40
    r0 = *(0x24 + r1); // lwz @ 0x80637F44
    /* fctiwz f0, f0 */ // 0x80637F48
    /* stfd f1, 0x28(r1) */ // 0x80637F4C
    r5 = r11 + r0; // 0x80637F50
    /* stfd f0, 0x30(r1) */ // 0x80637F54
    r4 = *(0x2c + r1); // lwz @ 0x80637F58
    *(0 + r3) = r12; // stb @ 0x80637F5C
    r0 = *(0x34 + r1); // lwz @ 0x80637F60
    r4 = r10 + r4; // 0x80637F64
    *(1 + r3) = r11; // stb @ 0x80637F68
    r0 = r9 + r0; // 0x80637F6C
    *(0 + r3) = r6; // stb @ 0x80637F70
    *(1 + r3) = r5; // stb @ 0x80637F74
    *(2 + r3) = r4; // stb @ 0x80637F78
    *(3 + r3) = r0; // stb @ 0x80637F7C
    r31 = *(0x3c + r1); // lwz @ 0x80637F80
    return;
}