/* Function at 0x807EAD68, size=284 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807EAD68(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x807EAD70
    /* li r4, 1 */ // 0x807EAD74
    *(0x7c + r1) = r31; // stw @ 0x807EAD7C
    *(0x78 + r1) = r30; // stw @ 0x807EAD80
    *(0x74 + r1) = r29; // stw @ 0x807EAD84
    r29 = r3;
    r0 = *(0x54 + r3); // lbz @ 0x807EAD8C
    *(0x124 + r3) = r5; // stw @ 0x807EAD90
    *(0x12c + r3) = r5; // stb @ 0x807EAD98
    *(0x110 + r3) = r4; // stb @ 0x807EAD9C
    if (==) goto 0x0x807eadac;
    r3 = r3 + 0x48; // 0x807EADA4
    /* b 0x807eadd8 */ // 0x807EADA8
    *(0x54 + r3) = r4; // stb @ 0x807EADAC
    r4 = r29 + 0x58; // 0x807EADB4
    FUN_8070E704(r3, r3, r4); // bl 0x8070E704
    /* lfs f0, 0x20(r1) */ // 0x807EADBC
    r3 = r29 + 0x48; // 0x807EADC0
    /* stfs f0, 0x48(r29) */ // 0x807EADC4
    /* lfs f0, 0x24(r1) */ // 0x807EADC8
    /* stfs f0, 0x4c(r29) */ // 0x807EADCC
    /* lfs f0, 0x28(r1) */ // 0x807EADD0
    /* stfs f0, 0x50(r29) */ // 0x807EADD4
    r0 = *(0x54 + r29); // lbz @ 0x807EADD8
    /* lfs f0, 0(r3) */ // 0x807EADDC
    /* stfs f0, 0x140(r29) */ // 0x807EADE4
    if (==) goto 0x0x807eadf4;
    r4 = r29 + 0x48; // 0x807EADEC
    /* b 0x807eae24 */ // 0x807EADF0
    /* li r0, 1 */ // 0x807EADF4
    *(0x54 + r29) = r0; // stb @ 0x807EADF8
    r4 = r29 + 0x58; // 0x807EAE00
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x14(r1) */ // 0x807EAE08
    r4 = r29 + 0x48; // 0x807EAE0C
    /* stfs f0, 0x48(r29) */ // 0x807EAE10
    /* lfs f0, 0x18(r1) */ // 0x807EAE14
    /* stfs f0, 0x4c(r29) */ // 0x807EAE18
    /* lfs f0, 0x1c(r1) */ // 0x807EAE1C
    /* stfs f0, 0x50(r29) */ // 0x807EAE20
    r0 = *(0x54 + r29); // lbz @ 0x807EAE24
    /* li r3, 0 */ // 0x807EAE28
    /* lfs f0, 4(r4) */ // 0x807EAE2C
    /* stfs f0, 0xf4(r29) */ // 0x807EAE34
    *(0x100 + r29) = r3; // stb @ 0x807EAE38
    *(0x101 + r29) = r3; // stb @ 0x807EAE3C
    if (==) goto 0x0x807eae4c;
    r4 = r29 + 0x48; // 0x807EAE44
    /* b 0x807eae7c */ // 0x807EAE48
    /* li r0, 1 */ // 0x807EAE4C
    *(0x54 + r29) = r0; // stb @ 0x807EAE50
    r4 = r29 + 0x58; // 0x807EAE58
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807EAE60
    r4 = r29 + 0x48; // 0x807EAE64
    /* stfs f0, 0x48(r29) */ // 0x807EAE68
    /* lfs f0, 0xc(r1) */ // 0x807EAE6C
    /* stfs f0, 0x4c(r29) */ // 0x807EAE70
    /* lfs f0, 0x10(r1) */ // 0x807EAE74
    /* stfs f0, 0x50(r29) */ // 0x807EAE78
    FUN_805E3430(r3); // bl 0x805E3430
}