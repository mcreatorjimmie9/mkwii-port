/* Function at 0x8072BF04, size=612 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8072BF04(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0xb8 + r1) = r30; // stw @ 0x8072BF18
    r30 = *(0x284 + r3); // lwz @ 0x8072BF1C
    if (==) goto 0x0x8072bf90;
    r3 = r30 + 0x74; // 0x8072BF28
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072bf40;
    /* li r3, 0 */ // 0x8072BF38
    /* b 0x8072bf44 */ // 0x8072BF3C
    r3 = *(0xc + r3); // lwz @ 0x8072BF40
    /* li r0, 0 */ // 0x8072BF48
    if (==) goto 0x0x8072bf58;
    if (!=) goto 0x0x8072bf5c;
    /* li r0, 1 */ // 0x8072BF58
    if (==) goto 0x0x8072bf90;
    r12 = *(0 + r30); // lwz @ 0x8072BF64
    r3 = r30;
    r4 = r31 + 0x6d0; // 0x8072BF6C
    r12 = *(0x74 + r12); // lwz @ 0x8072BF70
    /* mtctr r12 */ // 0x8072BF74
    /* bctrl  */ // 0x8072BF78
    r12 = *(0 + r30); // lwz @ 0x8072BF7C
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072BF84
    /* mtctr r12 */ // 0x8072BF88
    /* bctrl  */ // 0x8072BF8C
    r3 = *(0x118 + r31); // lwz @ 0x8072BF90
    /* li r4, 1 */ // 0x8072BF94
    r3 = *(0 + r3); // lwz @ 0x8072BF98
    r3 = *(4 + r3); // lwz @ 0x8072BF9C
    r3 = *(8 + r3); // lwz @ 0x8072BFA0
    /* rlwinm. r0, r3, 0, 0x19, 0x19 */ // 0x8072BFA4
    if (!=) goto 0x0x8072bfb8;
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8072BFAC
    if (!=) goto 0x0x8072bfb8;
    /* li r4, 0 */ // 0x8072BFB4
    if (==) goto 0x0x8072c0e8;
    /* lfs f1, 0x74(r31) */ // 0x8072BFC0
    /* lis r3, 0 */ // 0x8072BFC4
    /* lfs f0, 0(r3) */ // 0x8072BFC8
    r3 = r31 + 0x6f4; // 0x8072BFCC
    /* fneg f1, f1 */ // 0x8072BFD0
    /* stfs f0, 0x2c(r1) */ // 0x8072BFD4
    /* stfs f1, 0x30(r1) */ // 0x8072BFE0
    /* stfs f0, 0x34(r1) */ // 0x8072BFE4
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8072BFEC
    r0 = *(0x6f8 + r31); // lwz @ 0x8072BFF4
    r4 = r31 + 0x6d0; // 0x8072BFF8
    *(0x84 + r1) = r0; // stw @ 0x8072BFFC
    *(0x80 + r1) = r6; // stw @ 0x8072C004
    r6 = *(0x6fc + r31); // lwz @ 0x8072C008
    r0 = *(0x700 + r31); // lwz @ 0x8072C00C
    *(0x8c + r1) = r0; // stw @ 0x8072C010
    *(0x88 + r1) = r6; // stw @ 0x8072C014
    r6 = *(0x704 + r31); // lwz @ 0x8072C018
    r0 = *(0x708 + r31); // lwz @ 0x8072C01C
    *(0x94 + r1) = r0; // stw @ 0x8072C020
    *(0x90 + r1) = r6; // stw @ 0x8072C024
    r6 = *(0x70c + r31); // lwz @ 0x8072C028
    r0 = *(0x710 + r31); // lwz @ 0x8072C02C
    *(0x9c + r1) = r0; // stw @ 0x8072C030
    *(0x98 + r1) = r6; // stw @ 0x8072C034
    r6 = *(0x714 + r31); // lwz @ 0x8072C038
    r0 = *(0x718 + r31); // lwz @ 0x8072C03C
    *(0xa4 + r1) = r0; // stw @ 0x8072C040
    *(0xa0 + r1) = r6; // stw @ 0x8072C044
    r6 = *(0x71c + r31); // lwz @ 0x8072C048
    r0 = *(0x720 + r31); // lwz @ 0x8072C04C
    *(0xac + r1) = r0; // stw @ 0x8072C050
    *(0xa8 + r1) = r6; // stw @ 0x8072C054
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 0x44(r1) */ // 0x8072C05C
    /* lfs f1, 0x48(r1) */ // 0x8072C060
    /* lfs f0, 0x4c(r1) */ // 0x8072C064
    /* stfs f2, 0x8c(r1) */ // 0x8072C068
    /* stfs f1, 0x9c(r1) */ // 0x8072C06C
    /* stfs f0, 0xac(r1) */ // 0x8072C070
    r30 = *(0x288 + r31); // lwz @ 0x8072C074
    if (==) goto 0x0x8072c248;
    r12 = *(0 + r30); // lwz @ 0x8072C080
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8072C088
    /* mtctr r12 */ // 0x8072C08C
    /* bctrl  */ // 0x8072C090
    r12 = *(0 + r30); // lwz @ 0x8072C094
    r3 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x8072C0A0
    /* mtctr r12 */ // 0x8072C0A4
    /* bctrl  */ // 0x8072C0A8
    r0 = *(0xb0 + r31); // lbz @ 0x8072C0AC
    if (==) goto 0x0x8072c0d0;
    r12 = *(0 + r30); // lwz @ 0x8072C0B8
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072C0C0
    r12 = *(0x70 + r12); // lwz @ 0x8072C0C4
    /* mtctr r12 */ // 0x8072C0C8
    /* bctrl  */ // 0x8072C0CC
    r12 = *(0 + r30); // lwz @ 0x8072C0D0
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072C0D8
    /* mtctr r12 */ // 0x8072C0DC
    /* bctrl  */ // 0x8072C0E0
    /* b 0x8072c248 */ // 0x8072C0E4
    /* lfs f1, 0x74(r31) */ // 0x8072C0E8
    /* lis r3, 0 */ // 0x8072C0EC
    /* lfs f0, 0(r3) */ // 0x8072C0F0
    r3 = r31 + 0x6f4; // 0x8072C0F4
    /* fneg f1, f1 */ // 0x8072C0F8
    /* stfs f0, 8(r1) */ // 0x8072C0FC
    /* stfs f1, 0xc(r1) */ // 0x8072C108
    /* stfs f0, 0x10(r1) */ // 0x8072C10C
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8072C114
    r0 = *(0x6f8 + r31); // lwz @ 0x8072C11C
    r4 = r31 + 0x6d0; // 0x8072C120
    *(0x54 + r1) = r0; // stw @ 0x8072C124
    *(0x50 + r1) = r6; // stw @ 0x8072C12C
    r6 = *(0x6fc + r31); // lwz @ 0x8072C130
    r0 = *(0x700 + r31); // lwz @ 0x8072C134
    *(0x5c + r1) = r0; // stw @ 0x8072C138
    *(0x58 + r1) = r6; // stw @ 0x8072C13C
    r6 = *(0x704 + r31); // lwz @ 0x8072C140
    r0 = *(0x708 + r31); // lwz @ 0x8072C144
    *(0x64 + r1) = r0; // stw @ 0x8072C148
    *(0x60 + r1) = r6; // stw @ 0x8072C14C
    r6 = *(0x70c + r31); // lwz @ 0x8072C150
    r0 = *(0x710 + r31); // lwz @ 0x8072C154
    *(0x6c + r1) = r0; // stw @ 0x8072C158
    *(0x68 + r1) = r6; // stw @ 0x8072C15C
    r6 = *(0x714 + r31); // lwz @ 0x8072C160
    r0 = *(0x718 + r31); // lwz @ 0x8072C164
}