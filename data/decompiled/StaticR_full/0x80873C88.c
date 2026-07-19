/* Function at 0x80873C88, size=272 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80873C88(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0x4330 */ // 0x80873C90
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x80873CA0
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x80873CA8
    r29 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x80873CB0
    *(0x143c + r3) = r0; // stw @ 0x80873CB4
    /* li r3, 0x6e */ // 0x80873CB8
    *(8 + r1) = r6; // stw @ 0x80873CBC
    *(0x10 + r1) = r6; // stw @ 0x80873CC0
    FUN_808BA42C(r3); // bl 0x808BA42C
    r4 = r31;
    r5 = r29;
    r6 = r30;
    FUN_808BAC54(r4, r5, r6); // bl 0x808BAC54
    r4 = *(0x143c + r31); // lwz @ 0x80873CD8
    /* lis r7, 0 */ // 0x80873CDC
    /* lis r6, 0 */ // 0x80873CE0
    /* lis r5, 0 */ // 0x80873CE4
    /* slwi r0, r4, 0x1e */ // 0x80873CE8
    /* srwi r3, r4, 0x1f */ // 0x80873CEC
    /* subf r0, r3, r0 */ // 0x80873CF0
    r4 = r4 >> 2; // srawi
    /* rotlwi r0, r0, 2 */ // 0x80873CF8
    /* lis r8, 0 */ // 0x80873CFC
    r3 = r0 + r3; // 0x80873D00
    /* addze r4, r4 */ // 0x80873D04
    r0 = r3 + 1; // 0x80873D08
    /* lfd f7, 0(r7) */ // 0x80873D0C
    /* xoris r3, r3, 0x8000 */ // 0x80873D10
    *(0xc + r1) = r3; // stw @ 0x80873D14
    /* xoris r3, r0, 0x8000 */ // 0x80873D18
    r0 = r4 + 1; // 0x80873D1C
    *(0x14 + r1) = r3; // stw @ 0x80873D20
    /* xoris r4, r4, 0x8000 */ // 0x80873D24
    /* lfd f0, 8(r1) */ // 0x80873D28
    /* xoris r0, r0, 0x8000 */ // 0x80873D2C
    /* lfd f2, 0x10(r1) */ // 0x80873D30
    r8 = r8 + 0; // 0x80873D34
    *(0xc + r1) = r4; // stw @ 0x80873D38
    /* fsubs f6, f0, f7 */ // 0x80873D3C
    /* fsubs f2, f2, f7 */ // 0x80873D40
    /* lfs f5, 0(r6) */ // 0x80873D44
    *(0x14 + r1) = r0; // stw @ 0x80873D48
    r3 = r31 + 0x1458; // 0x80873D4C
    /* lfd f1, 8(r1) */ // 0x80873D50
    /* lfd f0, 0x10(r1) */ // 0x80873D54
    /* fsubs f3, f1, f7 */ // 0x80873D58
    /* lfs f4, 0(r5) */ // 0x80873D5C
    /* fsubs f0, f0, f7 */ // 0x80873D60
    r4 = r8 + 0xf8; // 0x80873D64
    /* fmuls f1, f5, f6 */ // 0x80873D68
    /* fmuls f3, f4, f3 */ // 0x80873D6C
    /* fmuls f2, f5, f2 */ // 0x80873D70
    /* fmuls f4, f4, f0 */ // 0x80873D74
    FUN_806A1244(r4); // bl 0x806A1244
    r0 = *(0x34 + r1); // lwz @ 0x80873D7C
    r31 = *(0x2c + r1); // lwz @ 0x80873D80
    r30 = *(0x28 + r1); // lwz @ 0x80873D84
    r29 = *(0x24 + r1); // lwz @ 0x80873D88
    return;
}