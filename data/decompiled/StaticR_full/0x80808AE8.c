/* Function at 0x80808AE8, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80808AE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80808AF0
    *(0xc + r1) = r31; // stw @ 0x80808AF8
    *(8 + r1) = r30; // stw @ 0x80808AFC
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80808B04
    r12 = *(0x68 + r12); // lwz @ 0x80808B08
    /* mtctr r12 */ // 0x80808B0C
    /* bctrl  */ // 0x80808B10
    r12 = *(0 + r30); // lwz @ 0x80808B14
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x80808B1C
    /* mtctr r12 */ // 0x80808B20
    /* bctrl  */ // 0x80808B24
    r0 = *(0x20 + r3); // lwz @ 0x80808B28
    r0 = r0 | 0x2121; // 0x80808B2C
    r0 = r0 | 0x2121; // 0x80808B30
    *(0x20 + r3) = r0; // stw @ 0x80808B34
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x80808B3C
    r12 = *(0x90 + r12); // lwz @ 0x80808B40
    /* mtctr r12 */ // 0x80808B44
    /* bctrl  */ // 0x80808B48
    /* lis r3, 0 */ // 0x80808B4C
    /* li r31, 0 */ // 0x80808B50
    /* lfs f0, 0(r3) */ // 0x80808B54
    r3 = r30;
    *(0xb4 + r30) = r31; // stw @ 0x80808B5C
    /* li r4, 0 */ // 0x80808B60
    /* stfs f0, 0xc4(r30) */ // 0x80808B64
    /* stfs f0, 0xc8(r30) */ // 0x80808B68
    /* stfs f0, 0xcc(r30) */ // 0x80808B6C
    *(0x114 + r30) = r31; // stb @ 0x80808B70
    *(0x115 + r30) = r31; // stb @ 0x80808B74
    *(0x11c + r30) = r31; // stb @ 0x80808B78
    FUN_808A0A44(); // bl 0x808A0A44
    /* lis r3, 0 */ // 0x80808B80
    /* li r4, 0 */ // 0x80808B84
    r0 = *(0 + r3); // lwz @ 0x80808B88
    r3 = r30;
    *(0x110 + r30) = r0; // stw @ 0x80808B90
    *(0x174 + r30) = r31; // stw @ 0x80808B94
    *(0x178 + r30) = r31; // stb @ 0x80808B98
    *(0x180 + r30) = r31; // stb @ 0x80808B9C
    FUN_808A1D3C(r3); // bl 0x808A1D3C
    r0 = *(0x14 + r1); // lwz @ 0x80808BA4
    r31 = *(0xc + r1); // lwz @ 0x80808BA8
    r30 = *(8 + r1); // lwz @ 0x80808BAC
    return;
}