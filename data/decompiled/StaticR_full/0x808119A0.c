/* Function at 0x808119A0, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808119A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808119A8
    *(0x2c + r1) = r31; // stw @ 0x808119B0
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x808119B8
    r30 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x808119C4
    r0 = *(0x54 + r30); // lbz @ 0x808119C8
    r3 = r3 + 0; // 0x808119CC
    *(0 + r30) = r3; // stw @ 0x808119D0
    /* lis r4, 0x4330 */ // 0x808119D4
    /* lis r5, 0 */ // 0x808119D8
    r6 = *(0 + r31); // lwz @ 0x808119DC
    /* lis r3, 0 */ // 0x808119E0
    *(0x18 + r1) = r4; // stw @ 0x808119E4
    r6 = *(0x2e + r6); // lha @ 0x808119EC
    /* lfd f2, 0(r5) */ // 0x808119F0
    /* xoris r0, r6, 0x8000 */ // 0x808119F4
    *(0x1c + r1) = r0; // stw @ 0x808119F8
    /* lfs f0, 0(r3) */ // 0x808119FC
    /* lfd f1, 0x18(r1) */ // 0x80811A00
    /* fsubs f1, f1, f2 */ // 0x80811A04
    /* fdivs f0, f0, f1 */ // 0x80811A08
    /* stfs f0, 0xb0(r30) */ // 0x80811A0C
    if (==) goto 0x0x80811a1c;
    r4 = r30 + 0x48; // 0x80811A14
    /* b 0x80811a4c */ // 0x80811A18
    /* li r0, 1 */ // 0x80811A1C
    *(0x54 + r30) = r0; // stb @ 0x80811A20
    r4 = r30 + 0x58; // 0x80811A28
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80811A30
    r4 = r30 + 0x48; // 0x80811A34
    /* stfs f0, 0x48(r30) */ // 0x80811A38
    /* lfs f0, 0xc(r1) */ // 0x80811A3C
    /* stfs f0, 0x4c(r30) */ // 0x80811A40
    /* lfs f0, 0x10(r1) */ // 0x80811A44
    /* stfs f0, 0x50(r30) */ // 0x80811A48
    r3 = r30 + 0xb8; // 0x80811A4C
    FUN_805E3430(r3); // bl 0x805E3430
}