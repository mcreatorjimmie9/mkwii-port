/* Function at 0x8069CFA4, size=252 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8069CFA4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8069CFB4
    *(0xd8 + r1) = r30; // stw @ 0x8069CFB8
    r30 = r3;
    r3 = *(0x1880 + r3); // lwz @ 0x8069CFC0
    FUN_80661194(); // bl 0x80661194
    if (==) goto 0x0x8069cfe4;
    r3 = *(0x1884 + r30); // lwz @ 0x8069CFD0
    FUN_806611CC(); // bl 0x806611CC
    if (==) goto 0x0x8069cfe4;
    /* li r31, 1 */ // 0x8069CFE0
    if (==) goto 0x0x8069d088;
    r3 = *(0x191c + r30); // lwz @ 0x8069CFEC
    /* addic. r0, r3, -1 */ // 0x8069CFF0
    *(0x191c + r30) = r0; // stw @ 0x8069CFF4
    if (>=) goto 0x0x8069d00c;
    r3 = *(0x1918 + r30); // lwz @ 0x8069CFFC
    r3 = *(0x260 + r3); // lwz @ 0x8069D000
    r0 = r3 + -1; // 0x8069D004
    *(0x191c + r30) = r0; // stw @ 0x8069D008
    r3 = *(0x1880 + r30); // lwz @ 0x8069D00C
    /* li r4, 0 */ // 0x8069D010
    FUN_80661064(r4); // bl 0x80661064
    r4 = *(0x1880 + r30); // lwz @ 0x8069D018
    r0 = *(0x1884 + r30); // lwz @ 0x8069D01C
    *(0x1880 + r30) = r0; // stw @ 0x8069D020
    r3 = *(0x1918 + r30); // lwz @ 0x8069D024
    *(0x1884 + r30) = r4; // stw @ 0x8069D028
    r4 = *(0x191c + r30); // lwz @ 0x8069D02C
    FUN_806607EC(); // bl 0x806607EC
    r31 = r3;
    r3 = *(0x1918 + r30); // lwz @ 0x8069D038
    r4 = *(0x191c + r30); // lwz @ 0x8069D03C
    FUN_806607C4(); // bl 0x806607C4
    r4 = r3;
    r3 = *(0x1880 + r30); // lwz @ 0x8069D048
    r5 = r31;
    /* li r6, 0 */ // 0x8069D050
    FUN_80661004(r4, r5, r6); // bl 0x80661004
    FUN_80654ECC(r5, r6, r3); // bl 0x80654ECC
    r6 = *(0x191c + r30); // lwz @ 0x8069D060
    r3 = r30 + 0xdac; // 0x8069D064
    /* li r4, 0x7d9 */ // 0x8069D06C
    r0 = r6 + 1; // 0x8069D070
    *(8 + r1) = r0; // stw @ 0x8069D074
    r6 = *(0x1918 + r30); // lwz @ 0x8069D078
    r0 = *(0x260 + r6); // lwz @ 0x8069D07C
    *(0xc + r1) = r0; // stw @ 0x8069D080
    FUN_806A0A34(); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x8069D088
    r31 = *(0xdc + r1); // lwz @ 0x8069D08C
    r30 = *(0xd8 + r1); // lwz @ 0x8069D090
    return;
}