/* Function at 0x806B6E6C, size=636 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806B6E6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x806B6E74
    *(0x88 + r1) = r30; // stw @ 0x806B6E80
    *(0x84 + r1) = r29; // stw @ 0x806B6E84
    r3 = *(0 + r3); // lwz @ 0x806B6E88
    r3 = *(0 + r3); // lwz @ 0x806B6E8C
    r0 = *(0 + r3); // lwz @ 0x806B6E90
    if (!=) goto 0x0x806b70cc;
    /* lis r3, 0 */ // 0x806B6E9C
    r30 = *(0 + r3); // lwz @ 0x806B6EA0
    r0 = *(0x18e8 + r30); // lbz @ 0x806B6EA4
    if (==) goto 0x0x806b6ec4;
    if (==) goto 0x0x806b6ecc;
    if (==) goto 0x0x806b6ed4;
    /* b 0x806b6edc */ // 0x806B6EC0
    /* li r31, 0 */ // 0x806B6EC4
    /* b 0x806b6ee0 */ // 0x806B6EC8
    /* li r31, 1 */ // 0x806B6ECC
    /* b 0x806b6ee0 */ // 0x806B6ED0
    /* li r31, 2 */ // 0x806B6ED4
    /* b 0x806b6ee0 */ // 0x806B6ED8
    /* li r31, 3 */ // 0x806B6EDC
    r3 = r30 + 0x1808; // 0x806B6EE0
    FUN_805BD048(r3); // bl 0x805BD048
    r0 = *(0x234c + r30); // lwz @ 0x806B6EE8
    if (==) goto 0x0x806b6f08;
    if (==) goto 0x0x806b6f10;
    if (==) goto 0x0x806b6f18;
    /* b 0x806b6f2c */ // 0x806B6F04
    /* li r29, 0 */ // 0x806B6F08
    /* b 0x806b6f2c */ // 0x806B6F0C
    /* li r29, 1 */ // 0x806B6F10
    /* b 0x806b6f2c */ // 0x806B6F14
    r0 = *(0x2370 + r30); // lwz @ 0x806B6F18
    /* li r29, 2 */ // 0x806B6F1C
    /* clrlwi. r0, r0, 0x1f */ // 0x806B6F20
    if (==) goto 0x0x806b6f2c;
    /* li r29, 3 */ // 0x806B6F28
    /* lis r4, 0 */ // 0x806B6F2C
    r9 = *(0x2368 + r30); // lwz @ 0x806B6F30
    r8 = *(0 + r4); // lwz @ 0x806B6F34
    r0 = *(0x36 + r8); // lha @ 0x806B6F38
    if (<) goto 0x0x806b6f60;
    /* lis r4, 1 */ // 0x806B6F44
    /* clrlwi r5, r0, 0x18 */ // 0x806B6F48
    r0 = r4 + -0x6c10; // 0x806B6F4C
    r0 = r0 * r5; // 0x806B6F50
    r4 = r8 + r0; // 0x806B6F54
    r7 = r4 + 0x38; // 0x806B6F58
    /* b 0x806b6f64 */ // 0x806B6F5C
    /* li r7, 0 */ // 0x806B6F60
    /* mulli r4, r29, 0x380 */ // 0x806B6F64
    /* li r5, 0 */ // 0x806B6F68
    /* lis r6, 0 */ // 0x806B6F6C
    *(0x58 + r1) = r5; // sth @ 0x806B6F70
    /* li r10, 0 */ // 0x806B6F74
    r6 = r6 + 0; // 0x806B6F78
    /* mulli r0, r9, 0x70 */ // 0x806B6F7C
    r7 = r7 + r4; // 0x806B6F80
    *(0x54 + r1) = r6; // stw @ 0x806B6F84
    *(0x5a + r1) = r5; // stb @ 0x806B6F88
    r6 = r7 + r0; // 0x806B6F8C
    *(0x5c + r1) = r5; // sth @ 0x806B6F90
    *(0x5e + r1) = r5; // stb @ 0x806B6F94
    r5 = *(0x76 + r6); // lbz @ 0x806B6F98
    if (!=) goto 0x0x806b6fb4;
    *(0x68 + r1) = r3; // stw @ 0x806B6FA4
    /* li r10, 1 */ // 0x806B6FA8
    *(0x6c + r1) = r31; // stw @ 0x806B6FAC
    /* b 0x806b6fec */ // 0x806B6FB0
    r5 = *(0x84 + r6); // lwz @ 0x806B6FB4
    if (>=) goto 0x0x806b6fcc;
    *(0x6c + r1) = r31; // stw @ 0x806B6FC0
    /* li r10, 1 */ // 0x806B6FC4
    /* b 0x806b6fd0 */ // 0x806B6FC8
    *(0x6c + r1) = r5; // stw @ 0x806B6FCC
    r5 = *(0x80 + r6); // lwz @ 0x806B6FD0
    if (>=) goto 0x0x806b6fe8;
    *(0x68 + r1) = r3; // stw @ 0x806B6FDC
    /* li r10, 1 */ // 0x806B6FE0
    /* b 0x806b6fec */ // 0x806B6FE4
    *(0x68 + r1) = r5; // stw @ 0x806B6FE8
    if (==) goto 0x0x806b70cc;
    /* li r3, 0 */ // 0x806B6FF4
    /* li r5, 1 */ // 0x806B6FF8
    *(0x5e + r1) = r5; // stb @ 0x806B6FFC
    *(0x58 + r1) = r3; // sth @ 0x806B7000
    *(0x5a + r1) = r3; // stb @ 0x806B7004
    *(0x5c + r1) = r3; // sth @ 0x806B7008
    r5 = *(0x36 + r8); // lha @ 0x806B700C
    if (<) goto 0x0x806b7034;
    /* lis r3, 1 */ // 0x806B7018
    /* clrlwi r5, r5, 0x18 */ // 0x806B701C
    r3 = r3 + -0x6c10; // 0x806B7020
    r3 = r3 * r5; // 0x806B7024
    r3 = r8 + r3; // 0x806B7028
    r8 = r3 + 0x38; // 0x806B702C
    /* b 0x806b7038 */ // 0x806B7030
    /* li r8, 0 */ // 0x806B7034
    r5 = r8 + r4; // 0x806B7038
    /* li r3, 0x26 */ // 0x806B703C
    r5 = r5 + r0; // 0x806B7040
    r7 = r5 + 0x1f; // 0x806B7048
    /* mtctr r3 */ // 0x806B704C
    r5 = *(1 + r6); // lbz @ 0x806B7050
    /* lbzu r3, 2(r6) */ // 0x806B7054
    *(1 + r7) = r5; // stb @ 0x806B7058
    /* stbu r3, 2(r7) */ // 0x806B705C
    if (counter-- != 0) goto 0x0x806b7050;
    r3 = r8 + r4; // 0x806B7064
    r5 = *(0x58 + r1); // lhz @ 0x806B7068
    r4 = r3 + r0; // 0x806B706C
    *(0x70 + r4) = r5; // sth @ 0x806B7070
    /* lis r3, 0 */ // 0x806B7074
    r0 = *(0x5a + r1); // lbz @ 0x806B7078
    *(0x72 + r4) = r0; // stb @ 0x806B707C
    r0 = *(0x5c + r1); // lhz @ 0x806B7080
    *(0x74 + r4) = r0; // sth @ 0x806B7084
    r0 = *(0x5e + r1); // lbz @ 0x806B7088
    *(0x76 + r4) = r0; // stb @ 0x806B708C
    r0 = *(0x60 + r1); // lwz @ 0x806B7090
    *(0x78 + r4) = r0; // stw @ 0x806B7094
    r0 = *(0x64 + r1); // lwz @ 0x806B7098
    *(0x7c + r4) = r0; // stw @ 0x806B709C
    r0 = *(0x68 + r1); // lwz @ 0x806B70A0
    *(0x80 + r4) = r0; // stw @ 0x806B70A4
    r0 = *(0x6c + r1); // lwz @ 0x806B70A8
    *(0x84 + r4) = r0; // stw @ 0x806B70AC
    r0 = *(0x70 + r1); // lbz @ 0x806B70B0
    *(0x88 + r4) = r0; // stb @ 0x806B70B4
    r0 = *(0x74 + r1); // lwz @ 0x806B70B8
    *(0x8c + r4) = r0; // stw @ 0x806B70BC
    r3 = *(0 + r3); // lwz @ 0x806B70C0
    r3 = *(0x90 + r3); // lwz @ 0x806B70C4
    FUN_806845FC(); // bl 0x806845FC
    r0 = *(0x94 + r1); // lwz @ 0x806B70CC
    r31 = *(0x8c + r1); // lwz @ 0x806B70D0
    r30 = *(0x88 + r1); // lwz @ 0x806B70D4
    r29 = *(0x84 + r1); // lwz @ 0x806B70D8
    return;
}