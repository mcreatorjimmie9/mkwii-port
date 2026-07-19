/* Function at 0x8074BEC4, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8074BEC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8074BED8
    r31 = r31 + 0; // 0x8074BEDC
    *(0x18 + r1) = r30; // stw @ 0x8074BEE0
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8074BEE8
    r29 = r3;
    if (==) goto 0x0x8074bf08;
    if (==) goto 0x0x8074bf24;
    if (==) goto 0x0x8074bf88;
    /* b 0x8074bfe8 */ // 0x8074BF04
    r3 = r4;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lfs f0, 0x68(r31) */ // 0x8074BF10
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074BF14
    if (>=) goto 0x0x8074bfe8;
    /* li r30, 8 */ // 0x8074BF1C
    /* b 0x8074bfe8 */ // 0x8074BF20
    r0 = *(0x120 + r3); // lwz @ 0x8074BF24
    if (!=) goto 0x0x8074bfe8;
    r3 = r4;
    /* li r4, 0 */ // 0x8074BF34
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f0, 0(r31) */ // 0x8074BF3C
    /* li r0, 0 */ // 0x8074BF40
    *(0x120 + r29) = r0; // stw @ 0x8074BF44
    r3 = r29;
    /* stfs f0, 0x124(r29) */ // 0x8074BF4C
    r12 = *(0 + r29); // lwz @ 0x8074BF50
    r12 = *(0x90 + r12); // lwz @ 0x8074BF54
    /* mtctr r12 */ // 0x8074BF58
    /* bctrl  */ // 0x8074BF5C
    r3 = *(8 + r29); // lwz @ 0x8074BF60
    /* li r4, 5 */ // 0x8074BF64
    /* lfs f1, 0(r31) */ // 0x8074BF68
    r3 = *(0x28 + r3); // lwz @ 0x8074BF6C
    /* lfs f2, 0x60(r31) */ // 0x8074BF70
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = r29;
    /* li r4, 0x293 */ // 0x8074BF7C
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    /* b 0x8074bfe8 */ // 0x8074BF84
    r0 = *(0x120 + r3); // lwz @ 0x8074BF88
    if (!=) goto 0x0x8074bfe8;
    r3 = r4;
    /* li r4, 0 */ // 0x8074BF98
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f0, 0(r31) */ // 0x8074BFA0
    /* li r0, 0 */ // 0x8074BFA4
    *(0x120 + r29) = r0; // stw @ 0x8074BFA8
    r3 = r29;
    /* stfs f0, 0x124(r29) */ // 0x8074BFB0
    r12 = *(0 + r29); // lwz @ 0x8074BFB4
    r12 = *(0x90 + r12); // lwz @ 0x8074BFB8
    /* mtctr r12 */ // 0x8074BFBC
    /* bctrl  */ // 0x8074BFC0
    r3 = *(8 + r29); // lwz @ 0x8074BFC4
    /* li r4, 5 */ // 0x8074BFC8
    /* lfs f1, 0(r31) */ // 0x8074BFCC
    r3 = *(0x28 + r3); // lwz @ 0x8074BFD0
    /* lfs f2, 0x60(r31) */ // 0x8074BFD4
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = r29;
    /* li r4, 0x293 */ // 0x8074BFE0
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x8074BFEC
    r30 = *(0x18 + r1); // lwz @ 0x8074BFF0
    r29 = *(0x14 + r1); // lwz @ 0x8074BFF4
    r0 = *(0x24 + r1); // lwz @ 0x8074BFF8
    return;
}