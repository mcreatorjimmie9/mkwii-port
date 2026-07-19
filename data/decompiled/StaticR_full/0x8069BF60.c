/* Function at 0x8069BF60, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8069BF60(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8069BF74
    *(0x14 + r1) = r29; // stw @ 0x8069BF78
    r0 = *(0x58 + r3); // lwz @ 0x8069BF7C
    if (!=) goto 0x0x8069c0ac;
    /* lis r3, 0 */ // 0x8069BF88
    r3 = *(0 + r3); // lwz @ 0x8069BF8C
    r3 = *(0 + r3); // lwz @ 0x8069BF90
    r29 = *(0x150 + r3); // lwz @ 0x8069BF94
    if (!=) goto 0x0x8069bfa8;
    /* li r29, 0 */ // 0x8069BFA0
    /* b 0x8069bffc */ // 0x8069BFA4
    /* lis r30, 0 */ // 0x8069BFA8
    r30 = r30 + 0; // 0x8069BFAC
    if (==) goto 0x0x8069bff8;
    r12 = *(0 + r29); // lwz @ 0x8069BFB4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069BFBC
    /* mtctr r12 */ // 0x8069BFC0
    /* bctrl  */ // 0x8069BFC4
    /* b 0x8069bfe0 */ // 0x8069BFC8
    if (!=) goto 0x0x8069bfdc;
    /* li r0, 1 */ // 0x8069BFD4
    /* b 0x8069bfec */ // 0x8069BFD8
    r3 = *(0 + r3); // lwz @ 0x8069BFDC
    if (!=) goto 0x0x8069bfcc;
    /* li r0, 0 */ // 0x8069BFE8
    if (==) goto 0x0x8069bff8;
    /* b 0x8069bffc */ // 0x8069BFF4
    /* li r29, 0 */ // 0x8069BFF8
    r0 = *(0xa50 + r29); // lwz @ 0x8069BFFC
    if (==) goto 0x0x8069c014;
    if (==) goto 0x0x8069c09c;
    /* b 0x8069c0ac */ // 0x8069C010
    /* lis r11, 0 */ // 0x8069C014
    /* lis r5, 0 */ // 0x8069C018
    r3 = *(0 + r11); // lwz @ 0x8069C01C
    /* li r6, 1 */ // 0x8069C020
    /* lfs f1, 0(r5) */ // 0x8069C024
    /* lis r10, 0 */ // 0x8069C028
    r4 = *(0x98 + r3); // lwz @ 0x8069C02C
    /* lis r8, 0 */ // 0x8069C030
    /* li r7, 5 */ // 0x8069C034
    /* li r0, -1 */ // 0x8069C038
    *(0x3c4 + r4) = r6; // stw @ 0x8069C03C
    r3 = r31;
    /* li r4, 0x1f */ // 0x8069C044
    /* li r5, 0 */ // 0x8069C048
    r6 = *(0 + r11); // lwz @ 0x8069C04C
    r9 = *(0 + r10); // lwz @ 0x8069C050
    r6 = *(0x98 + r6); // lwz @ 0x8069C054
    r9 = *(0x1758 + r9); // lwz @ 0x8069C058
    *(0x3c8 + r6) = r9; // stw @ 0x8069C05C
    r6 = *(0 + r11); // lwz @ 0x8069C060
    r8 = *(0 + r8); // lwz @ 0x8069C064
    r6 = *(0x98 + r6); // lwz @ 0x8069C068
    r8 = *(0x36 + r8); // lha @ 0x8069C06C
    *(0x3cc + r6) = r8; // stw @ 0x8069C070
    r6 = *(0 + r10); // lwz @ 0x8069C074
    *(0xd18 + r6) = r7; // stw @ 0x8069C078
    *(0x54 + r31) = r0; // stw @ 0x8069C07C
    r12 = *(0 + r31); // lwz @ 0x8069C080
    r12 = *(0x1c + r12); // lwz @ 0x8069C084
    /* mtctr r12 */ // 0x8069C088
    /* bctrl  */ // 0x8069C08C
    /* li r0, 3 */ // 0x8069C090
    *(0x58 + r31) = r0; // stw @ 0x8069C094
    /* b 0x8069c0ac */ // 0x8069C098
    /* li r3, 0x6f */ // 0x8069C09C
    /* li r0, 4 */ // 0x8069C0A0
    *(0x54 + r31) = r3; // stw @ 0x8069C0A4
    *(0x58 + r31) = r0; // stw @ 0x8069C0A8
    r0 = *(0x24 + r1); // lwz @ 0x8069C0AC
    r31 = *(0x1c + r1); // lwz @ 0x8069C0B0
    r30 = *(0x18 + r1); // lwz @ 0x8069C0B4
    r29 = *(0x14 + r1); // lwz @ 0x8069C0B8
    return;
}