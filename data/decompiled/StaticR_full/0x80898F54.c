/* Function at 0x80898F54, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80898F54(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80898F64
    r31 = r31 + 0; // 0x80898F68
    *(0x28 + r1) = r30; // stw @ 0x80898F6C
    /* lis r30, 0 */ // 0x80898F70
    r30 = r30 + 0; // 0x80898F74
    *(0x24 + r1) = r29; // stw @ 0x80898F78
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x80898F80
    r28 = r3;
    r5 = *(0 + r31); // lha @ 0x80898F88
    if (>) goto 0x0x80898f9c;
    /* lfs f1, 0x104(r3) */ // 0x80898F94
    /* b 0x80899074 */ // 0x80898F98
    r0 = *(2 + r31); // lha @ 0x80898F9C
    r0 = r5 + r0; // 0x80898FA0
    if (>) goto 0x0x80898fdc;
    r0 = *(0x10d + r3); // lbz @ 0x80898FAC
    if (!=) goto 0x0x80898fcc;
    /* lfs f1, 0(r30) */ // 0x80898FB8
    /* li r4, 0x308 */ // 0x80898FBC
    FUN_808A0AC8(r4); // bl 0x808A0AC8
    /* li r0, 1 */ // 0x80898FC4
    *(0x10d + r28) = r0; // stb @ 0x80898FC8
    /* lfs f1, 0x104(r28) */ // 0x80898FCC
    /* lfs f0, 4(r31) */ // 0x80898FD0
    /* fadds f1, f1, f0 */ // 0x80898FD4
    /* b 0x80899074 */ // 0x80898FD8
    /* lfs f1, 0(r30) */ // 0x80898FDC
    /* li r4, 0x307 */ // 0x80898FE0
    FUN_808A0AA8(r4); // bl 0x808A0AA8
    r0 = *(0 + r31); // lha @ 0x80898FE8
    /* lis r3, 0x4330 */ // 0x80898FEC
    r5 = *(2 + r31); // lha @ 0x80898FF0
    /* subf r29, r0, r29 */ // 0x80898FF4
    *(8 + r1) = r3; // stw @ 0x80898FF8
    r4 = r29 / r5; // 0x80898FFC
    /* xoris r0, r5, 0x8000 */ // 0x80899000
    *(0x14 + r1) = r0; // stw @ 0x80899004
    /* lfd f5, 8(r30) */ // 0x80899008
    *(0x10 + r1) = r3; // stw @ 0x8089900C
    /* lfs f3, 0x14(r30) */ // 0x80899010
    r0 = r4 * r5; // 0x80899014
    /* lfd f1, 0x10(r1) */ // 0x80899018
    /* lfs f2, 0x10(r30) */ // 0x8089901C
    /* fsubs f1, f1, f5 */ // 0x80899020
    /* lfs f0, 0x18(r30) */ // 0x80899024
    /* subf r0, r0, r29 */ // 0x80899028
    /* xoris r0, r0, 0x8000 */ // 0x8089902C
    *(0xc + r1) = r0; // stw @ 0x80899030
    /* lfd f4, 8(r1) */ // 0x80899034
    /* fsubs f4, f4, f5 */ // 0x80899038
    /* fsubs f3, f4, f3 */ // 0x8089903C
    /* fmuls f2, f2, f3 */ // 0x80899040
    /* fdivs f1, f2, f1 */ // 0x80899044
    /* fmuls f1, f0, f1 */ // 0x80899048
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f3, 4(r31) */ // 0x80899050
    /* lfd f2, 0x20(r30) */ // 0x80899054
    /* lfs f0, 0x28(r30) */ // 0x80899058
    /* fmul f2, f2, f3 */ // 0x8089905C
    /* lfs f3, 0x104(r28) */ // 0x80899060
    /* fsubs f0, f0, f1 */ // 0x80899064
    /* fmul f0, f2, f0 */ // 0x80899068
    /* fadd f1, f3, f0 */ // 0x8089906C
}