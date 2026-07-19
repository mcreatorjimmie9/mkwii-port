/* Function at 0x807EC008, size=176 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807EC008(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807EC010
    *(0x54 + r1) = r0; // stw @ 0x807EC014
    /* lis r0, 0x4330 */ // 0x807EC018
    /* lfd f1, 0(r4) */ // 0x807EC01C
    *(0x4c + r1) = r31; // stw @ 0x807EC020
    r31 = r3;
    r6 = *(0xa0 + r3); // lwz @ 0x807EC028
    *(0x38 + r1) = r0; // stw @ 0x807EC02C
    r5 = *(0 + r6); // lwz @ 0x807EC030
    r0 = *(0x2a + r5); // lha @ 0x807EC034
    /* xoris r0, r0, 0x8000 */ // 0x807EC038
    *(0x3c + r1) = r0; // stw @ 0x807EC03C
    /* lfd f0, 0x38(r1) */ // 0x807EC040
    /* fsubs f0, f0, f1 */ // 0x807EC044
    /* stfs f0, 0xb4(r3) */ // 0x807EC048
    r4 = *(0 + r6); // lwz @ 0x807EC04C
    r0 = *(0x2c + r4); // lha @ 0x807EC050
    if (!=) goto 0x0x807ec064;
    /* fneg f0, f0 */ // 0x807EC05C
    /* stfs f0, 0xb4(r3) */ // 0x807EC060
    r0 = *(0x54 + r3); // lbz @ 0x807EC064
    /* li r4, 0 */ // 0x807EC068
    *(0xb0 + r3) = r4; // stw @ 0x807EC06C
    if (==) goto 0x0x807ec080;
    r4 = r3 + 0x48; // 0x807EC078
    /* b 0x807ec0b0 */ // 0x807EC07C
    /* li r0, 1 */ // 0x807EC080
    *(0x54 + r3) = r0; // stb @ 0x807EC084
    r4 = r31 + 0x58; // 0x807EC08C
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807EC094
    r4 = r31 + 0x48; // 0x807EC098
    /* stfs f0, 0x48(r31) */ // 0x807EC09C
    /* lfs f0, 0xc(r1) */ // 0x807EC0A0
    /* stfs f0, 0x4c(r31) */ // 0x807EC0A4
    /* lfs f0, 0x10(r1) */ // 0x807EC0A8
    /* stfs f0, 0x50(r31) */ // 0x807EC0AC
    r3 = r31 + 0xc8; // 0x807EC0B0
    FUN_805E3430(r3); // bl 0x805E3430
}