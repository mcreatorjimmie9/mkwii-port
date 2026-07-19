/* Function at 0x8066BF14, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8066BF14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r3;
    *(0x24 + r1) = r0; // stw @ 0x8066BF24
    *(0x1c + r1) = r31; // stw @ 0x8066BF28
    r31 = r5;
    if (!=) goto 0x0x8066bf3c;
    /* li r3, -1 */ // 0x8066BF34
    /* b 0x8066c21c */ // 0x8066BF38
    /* clrlwi. r0, r5, 0x1f */ // 0x8066BF3C
    if (==) goto 0x0x8066bf8c;
    /* lfs f4, 0x14(r4) */ // 0x8066BF44
    /* lfs f3, 0x14(r3) */ // 0x8066BF48
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x8066BF4C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066BF50
    if (==) goto 0x0x8066bf84;
    /* lfs f2, 0x20(r3) */ // 0x8066BF58
    /* fadds f1, f4, f2 */ // 0x8066BF5C
    /* fadds f0, f3, f2 */ // 0x8066BF60
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066BF64
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066BF68
    if (==) goto 0x0x8066bf84;
    /* fsubs f1, f4, f2 */ // 0x8066BF70
    /* fsubs f0, f3, f2 */ // 0x8066BF74
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066BF78
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066BF7C
    if (!=) goto 0x0x8066bfe0;
    /* li r3, -1 */ // 0x8066BF84
    /* b 0x8066c21c */ // 0x8066BF88
    /* rlwinm. r0, r5, 0, 0x1e, 0x1e */ // 0x8066BF8C
    if (==) goto 0x0x8066bfe0;
    /* lfs f5, 0x14(r4) */ // 0x8066BF94
    /* lfs f4, 0x14(r3) */ // 0x8066BF98
    /* .byte 0xfc, 0x05, 0x20, 0x40 */ // 0x8066BF9C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066BFA0
    if (==) goto 0x0x8066bfd8;
    /* lfs f3, 0x20(r4) */ // 0x8066BFA8
    /* lfs f2, 0x20(r3) */ // 0x8066BFAC
    /* fsubs f1, f5, f3 */ // 0x8066BFB0
    /* fsubs f0, f4, f2 */ // 0x8066BFB4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066BFB8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066BFBC
    if (==) goto 0x0x8066bfd8;
    /* fadds f1, f5, f3 */ // 0x8066BFC4
    /* fadds f0, f4, f2 */ // 0x8066BFC8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066BFCC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066BFD0
    if (!=) goto 0x0x8066bfe0;
    /* li r3, -1 */ // 0x8066BFD8
    /* b 0x8066c21c */ // 0x8066BFDC
    /* rlwinm. r0, r5, 0, 0x1d, 0x1d */ // 0x8066BFE0
    if (==) goto 0x0x8066c034;
    /* lfs f5, 0x10(r4) */ // 0x8066BFE8
    /* lfs f4, 0x10(r3) */ // 0x8066BFEC
    /* .byte 0xfc, 0x05, 0x20, 0x40 */ // 0x8066BFF0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066BFF4
    if (==) goto 0x0x8066c02c;
    /* lfs f3, 0x1c(r4) */ // 0x8066BFFC
    /* lfs f2, 0x1c(r3) */ // 0x8066C000
    /* fadds f1, f5, f3 */ // 0x8066C004
    /* fadds f0, f4, f2 */ // 0x8066C008
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066C00C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066C010
    if (==) goto 0x0x8066c02c;
    /* fsubs f1, f5, f3 */ // 0x8066C018
    /* fsubs f0, f4, f2 */ // 0x8066C01C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066C020
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8066C024
    if (!=) goto 0x0x8066c088;
    /* li r3, -1 */ // 0x8066C02C
    /* b 0x8066c21c */ // 0x8066C030
    /* rlwinm. r0, r5, 0, 0x1c, 0x1c */ // 0x8066C034
    if (==) goto 0x0x8066c088;
    /* lfs f5, 0x10(r4) */ // 0x8066C03C
    /* lfs f4, 0x10(r3) */ // 0x8066C040
    /* .byte 0xfc, 0x05, 0x20, 0x40 */ // 0x8066C044
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066C048
    if (==) goto 0x0x8066c080;
    /* lfs f3, 0x1c(r4) */ // 0x8066C050
    /* lfs f2, 0x1c(r3) */ // 0x8066C054
    /* fsubs f1, f5, f3 */ // 0x8066C058
    /* fsubs f0, f4, f2 */ // 0x8066C05C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066C060
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066C064
    if (==) goto 0x0x8066c080;
    /* fadds f1, f5, f3 */ // 0x8066C06C
    /* fadds f0, f4, f2 */ // 0x8066C070
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066C074
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8066C078
    if (!=) goto 0x0x8066c088;
    /* li r3, -1 */ // 0x8066C080
    /* b 0x8066c21c */ // 0x8066C084
    r4 = r4 + 0x10; // 0x8066C08C
    r5 = r6 + 0x10; // 0x8066C090
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    if (>) goto 0x0x8066c218;
    /* lis r3, 0 */ // 0x8066C0A0
    /* slwi r0, r31, 2 */ // 0x8066C0A4
    r3 = r3 + 0; // 0x8066C0A8
    /* lwzx r3, r3, r0 */ // 0x8066C0AC
    /* mtctr r3 */ // 0x8066C0B0
    /* bctr  */ // 0x8066C0B4
    /* lis r3, 0 */ // 0x8066C0B8
    /* lfs f1, 0xc(r1) */ // 0x8066C0BC
    /* lfs f0, 0(r3) */ // 0x8066C0C0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066C0C4
    if (<=) goto 0x0x8066c0d0;
    /* b 0x8066c0d4 */ // 0x8066C0CC
}