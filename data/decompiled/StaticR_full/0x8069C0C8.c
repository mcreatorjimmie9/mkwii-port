/* Function at 0x8069C0C8, size=548 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8069C0C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8069C0DC
    *(0x14 + r1) = r29; // stw @ 0x8069C0E0
    r0 = *(0x58 + r3); // lwz @ 0x8069C0E4
    if (!=) goto 0x0x8069c16c;
    /* lis r3, 0 */ // 0x8069C0F0
    r3 = *(0 + r3); // lwz @ 0x8069C0F4
    r3 = *(0 + r3); // lwz @ 0x8069C0F8
    r29 = *(0x144 + r3); // lwz @ 0x8069C0FC
    if (!=) goto 0x0x8069c110;
    /* li r29, 0 */ // 0x8069C108
    /* b 0x8069c164 */ // 0x8069C10C
    /* lis r30, 0 */ // 0x8069C110
    r30 = r30 + 0; // 0x8069C114
    if (==) goto 0x0x8069c160;
    r12 = *(0 + r29); // lwz @ 0x8069C11C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069C124
    /* mtctr r12 */ // 0x8069C128
    /* bctrl  */ // 0x8069C12C
    /* b 0x8069c148 */ // 0x8069C130
    if (!=) goto 0x0x8069c144;
    /* li r0, 1 */ // 0x8069C13C
    /* b 0x8069c154 */ // 0x8069C140
    r3 = *(0 + r3); // lwz @ 0x8069C144
    if (!=) goto 0x0x8069c134;
    /* li r0, 0 */ // 0x8069C150
    if (==) goto 0x0x8069c160;
    /* b 0x8069c164 */ // 0x8069C15C
    /* li r29, 0 */ // 0x8069C160
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* lis r3, 0 */ // 0x8069C16C
    r3 = *(0 + r3); // lwz @ 0x8069C170
    r3 = *(0 + r3); // lwz @ 0x8069C174
    r29 = *(0x2a4 + r3); // lwz @ 0x8069C178
    if (!=) goto 0x0x8069c18c;
    /* li r29, 0 */ // 0x8069C184
    /* b 0x8069c1e0 */ // 0x8069C188
    /* lis r30, 0 */ // 0x8069C18C
    r30 = r30 + 0; // 0x8069C190
    if (==) goto 0x0x8069c1dc;
    r12 = *(0 + r29); // lwz @ 0x8069C198
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069C1A0
    /* mtctr r12 */ // 0x8069C1A4
    /* bctrl  */ // 0x8069C1A8
    /* b 0x8069c1c4 */ // 0x8069C1AC
    if (!=) goto 0x0x8069c1c0;
    /* li r0, 1 */ // 0x8069C1B8
    /* b 0x8069c1d0 */ // 0x8069C1BC
    r3 = *(0 + r3); // lwz @ 0x8069C1C0
    if (!=) goto 0x0x8069c1b0;
    /* li r0, 0 */ // 0x8069C1CC
    if (==) goto 0x0x8069c1dc;
    /* b 0x8069c1e0 */ // 0x8069C1D8
    /* li r29, 0 */ // 0x8069C1DC
    /* lis r4, 0 */ // 0x8069C1E0
    r3 = r29 + 0xa0; // 0x8069C1E4
    r4 = *(0 + r4); // lwz @ 0x8069C1E8
    r4 = *(0x1758 + r4); // lwz @ 0x8069C1EC
    FUN_806604C4(r4, r3); // bl 0x806604C4
    r0 = *(0x300 + r29); // lwz @ 0x8069C1F4
    if (<=) goto 0x0x8069c214;
    /* li r3, 0x71 */ // 0x8069C200
    /* li r0, 3 */ // 0x8069C204
    *(0x54 + r31) = r3; // stw @ 0x8069C208
    *(0x58 + r31) = r0; // stw @ 0x8069C20C
    /* b 0x8069c2d0 */ // 0x8069C210
    /* lis r3, 0 */ // 0x8069C214
    r3 = *(0 + r3); // lwz @ 0x8069C218
    r3 = *(0 + r3); // lwz @ 0x8069C21C
    r29 = *(0x150 + r3); // lwz @ 0x8069C220
    if (!=) goto 0x0x8069c234;
    /* li r29, 0 */ // 0x8069C22C
    /* b 0x8069c288 */ // 0x8069C230
    /* lis r30, 0 */ // 0x8069C234
    r30 = r30 + 0; // 0x8069C238
    if (==) goto 0x0x8069c284;
    r12 = *(0 + r29); // lwz @ 0x8069C240
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069C248
    /* mtctr r12 */ // 0x8069C24C
    /* bctrl  */ // 0x8069C250
    /* b 0x8069c26c */ // 0x8069C254
    if (!=) goto 0x0x8069c268;
    /* li r0, 1 */ // 0x8069C260
    /* b 0x8069c278 */ // 0x8069C264
    r3 = *(0 + r3); // lwz @ 0x8069C268
    if (!=) goto 0x0x8069c258;
    /* li r0, 0 */ // 0x8069C274
    if (==) goto 0x0x8069c284;
    /* b 0x8069c288 */ // 0x8069C280
    /* li r29, 0 */ // 0x8069C284
    r12 = *(0 + r29); // lwz @ 0x8069C288
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8069C290
    /* mtctr r12 */ // 0x8069C294
    /* bctrl  */ // 0x8069C298
    r3 = r29;
    /* li r4, 0xc1d */ // 0x8069C2A0
    /* li r5, 0 */ // 0x8069C2A4
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r12 = *(0 + r31); // lwz @ 0x8069C2AC
    r3 = r31;
    /* li r4, 0x52 */ // 0x8069C2B4
    /* li r5, 0 */ // 0x8069C2B8
    r12 = *(0x24 + r12); // lwz @ 0x8069C2BC
    /* mtctr r12 */ // 0x8069C2C0
    /* bctrl  */ // 0x8069C2C4
    /* li r0, 2 */ // 0x8069C2C8
    *(0x58 + r31) = r0; // stw @ 0x8069C2CC
    r0 = *(0x24 + r1); // lwz @ 0x8069C2D0
    r31 = *(0x1c + r1); // lwz @ 0x8069C2D4
    r30 = *(0x18 + r1); // lwz @ 0x8069C2D8
    r29 = *(0x14 + r1); // lwz @ 0x8069C2DC
    return;
}