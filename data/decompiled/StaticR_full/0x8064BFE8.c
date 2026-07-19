/* Function at 0x8064BFE8, size=664 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 11 function(s) */

int FUN_8064BFE8(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x8064BFF4
    r30 = r3;
    r31 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x8064C000
    if (==) goto 0x0x8064c030;
    if (==) goto 0x0x8064c0a8;
    if (==) goto 0x0x8064c0c8;
    if (==) goto 0x0x8064c0e8;
    if (==) goto 0x0x8064c248;
    /* b 0x8064c26c */ // 0x8064C02C
    /* lis r3, 0 */ // 0x8064C030
    r3 = *(0 + r3); // lwz @ 0x8064C034
    r3 = *(0 + r3); // lwz @ 0x8064C038
    r3 = *(0 + r3); // lwz @ 0x8064C03C
    FUN_80694DFC(r3); // bl 0x80694DFC
    if (==) goto 0x0x8064c058;
    if (==) goto 0x0x8064c080;
    /* b 0x8064c26c */ // 0x8064C054
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064C060
    r3 = r30;
    /* li r4, 0x83 */ // 0x8064C068
    /* li r5, 0 */ // 0x8064C06C
    r12 = *(0x1c + r12); // lwz @ 0x8064C070
    /* mtctr r12 */ // 0x8064C074
    /* bctrl  */ // 0x8064C078
    /* b 0x8064c26c */ // 0x8064C07C
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064C088
    r3 = r30;
    /* li r4, 0xa5 */ // 0x8064C090
    /* li r5, 0 */ // 0x8064C094
    r12 = *(0x1c + r12); // lwz @ 0x8064C098
    /* mtctr r12 */ // 0x8064C09C
    /* bctrl  */ // 0x8064C0A0
    /* b 0x8064c26c */ // 0x8064C0A4
    /* li r0, 0xa3 */ // 0x8064C0A8
    *(0x13ac + r3) = r0; // stw @ 0x8064C0AC
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x8064C0BC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x8064c26c */ // 0x8064C0C4
    /* li r0, 0xa4 */ // 0x8064C0C8
    *(0x13ac + r3) = r0; // stw @ 0x8064C0CC
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x8064C0DC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x8064c26c */ // 0x8064C0E4
    /* lis r3, 0 */ // 0x8064C0E8
    /* li r0, 0 */ // 0x8064C0EC
    *(8 + r1) = r0; // stb @ 0x8064C0F0
    r3 = *(0 + r3); // lwz @ 0x8064C0F8
    *(0xc + r1) = r0; // stw @ 0x8064C0FC
    FUN_806F9214(r4); // bl 0x806F9214
    r29 = r3;
    if (!=) goto 0x0x8064c144;
    r0 = *(0x14 + r1); // lwz @ 0x8064C110
    if (!=) goto 0x0x8064c144;
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064C124
    r3 = r30;
    /* li r4, 0x85 */ // 0x8064C12C
    /* li r5, 0 */ // 0x8064C130
    r12 = *(0x1c + r12); // lwz @ 0x8064C134
    /* mtctr r12 */ // 0x8064C138
    /* bctrl  */ // 0x8064C13C
    /* b 0x8064c26c */ // 0x8064C140
    /* lis r3, 0 */ // 0x8064C144
    r3 = *(0 + r3); // lwz @ 0x8064C148
    r3 = *(0 + r3); // lwz @ 0x8064C14C
    r27 = *(0x13c + r3); // lwz @ 0x8064C150
    if (!=) goto 0x0x8064c164;
    /* li r27, 0 */ // 0x8064C15C
    /* b 0x8064c1b8 */ // 0x8064C160
    /* lis r28, 0 */ // 0x8064C164
    r28 = r28 + 0; // 0x8064C168
    if (==) goto 0x0x8064c1b4;
    r12 = *(0 + r27); // lwz @ 0x8064C170
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x8064C178
    /* mtctr r12 */ // 0x8064C17C
    /* bctrl  */ // 0x8064C180
    /* b 0x8064c19c */ // 0x8064C184
    if (!=) goto 0x0x8064c198;
    /* li r0, 1 */ // 0x8064C190
    /* b 0x8064c1a8 */ // 0x8064C194
    r3 = *(0 + r3); // lwz @ 0x8064C198
    if (!=) goto 0x0x8064c188;
    /* li r0, 0 */ // 0x8064C1A4
    if (==) goto 0x0x8064c1b4;
    /* b 0x8064c1b8 */ // 0x8064C1B0
    /* li r27, 0 */ // 0x8064C1B4
    r12 = *(0 + r27); // lwz @ 0x8064C1B8
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x8064C1C0
    /* mtctr r12 */ // 0x8064C1C4
    /* bctrl  */ // 0x8064C1C8
    if (!=) goto 0x0x8064c200;
    r0 = *(0x14 + r1); // lwz @ 0x8064C1D4
    if (!=) goto 0x0x8064c200;
    r12 = *(0 + r27); // lwz @ 0x8064C1E0
    r3 = r27;
    /* li r4, 0x19c9 */ // 0x8064C1E8
    /* li r5, 0 */ // 0x8064C1EC
    r12 = *(0x68 + r12); // lwz @ 0x8064C1F0
    /* mtctr r12 */ // 0x8064C1F4
    /* bctrl  */ // 0x8064C1F8
    /* b 0x8064c21c */ // 0x8064C1FC
    r12 = *(0 + r27); // lwz @ 0x8064C200
    r3 = r27;
    /* li r4, 0x19c8 */ // 0x8064C208
    /* li r5, 0 */ // 0x8064C20C
    r12 = *(0x68 + r12); // lwz @ 0x8064C210
    /* mtctr r12 */ // 0x8064C214
    /* bctrl  */ // 0x8064C218
    r12 = *(0 + r30); // lwz @ 0x8064C21C
    r3 = r30;
    /* li r4, 0x4d */ // 0x8064C224
    /* li r5, 0 */ // 0x8064C228
    r12 = *(0x24 + r12); // lwz @ 0x8064C22C
    /* mtctr r12 */ // 0x8064C230
    /* bctrl  */ // 0x8064C234
    r3 = r31;
    /* li r4, 0 */ // 0x8064C23C
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x8064c26c */ // 0x8064C244
    r3 = r31;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064C250
    r3 = r30;
    /* li r4, 0x41 */ // 0x8064C258
    /* li r5, 1 */ // 0x8064C25C
    r12 = *(0x1c + r12); // lwz @ 0x8064C260
    /* mtctr r12 */ // 0x8064C264
    /* bctrl  */ // 0x8064C268
    r0 = *(0x44 + r1); // lwz @ 0x8064C270
    return;
}