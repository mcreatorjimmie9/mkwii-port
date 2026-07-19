/* Function at 0x806CBEB8, size=336 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806CBEB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x34 + r1) = r29; // stw @ 0x806CBECC
    r29 = r3;
    r0 = *(0x17c + r3); // lbz @ 0x806CBED4
    if (==) goto 0x0x806cbee8;
    FUN_8069FE14(); // bl 0x8069FE14
    /* b 0x806cbef4 */ // 0x806CBEE4
    /* lis r5, 0 */ // 0x806CBEE8
    /* lfs f1, 0(r5) */ // 0x806CBEEC
    FUN_8069FE14(r5); // bl 0x8069FE14
    /* lis r3, 0 */ // 0x806CBEF4
    r3 = *(0 + r3); // lwz @ 0x806CBEF8
    r3 = *(0 + r3); // lwz @ 0x806CBEFC
    r30 = *(0x204 + r3); // lwz @ 0x806CBF00
    if (!=) goto 0x0x806cbf14;
    /* li r30, 0 */ // 0x806CBF0C
    /* b 0x806cbf68 */ // 0x806CBF10
    /* lis r31, 0 */ // 0x806CBF14
    r31 = r31 + 0; // 0x806CBF18
    if (==) goto 0x0x806cbf64;
    r12 = *(0 + r30); // lwz @ 0x806CBF20
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CBF28
    /* mtctr r12 */ // 0x806CBF2C
    /* bctrl  */ // 0x806CBF30
    /* b 0x806cbf4c */ // 0x806CBF34
    if (!=) goto 0x0x806cbf48;
    /* li r0, 1 */ // 0x806CBF40
    /* b 0x806cbf58 */ // 0x806CBF44
    r3 = *(0 + r3); // lwz @ 0x806CBF48
    if (!=) goto 0x0x806cbf38;
    /* li r0, 0 */ // 0x806CBF54
    if (==) goto 0x0x806cbf64;
    /* b 0x806cbf68 */ // 0x806CBF60
    /* li r30, 0 */ // 0x806CBF64
    if (==) goto 0x0x806cbfec;
    r0 = *(0x174 + r29); // lbz @ 0x806CBF70
    r3 = r30 + 0x94; // 0x806CBF74
    r5 = *(0x178 + r29); // lwz @ 0x806CBF78
    /* li r6, 2 */ // 0x806CBF7C
    /* mulli r0, r0, 0xc */ // 0x806CBF80
    r4 = r30 + r0; // 0x806CBF84
    r4 = *(0x54 + r4); // lwz @ 0x806CBF88
    FUN_806CD160(r6); // bl 0x806CD160
    /* lis r4, 0 */ // 0x806CBF90
    r31 = r3;
    r4 = r4 + 0; // 0x806CBF98
    r3 = r29 + 0xa8; // 0x806CBF9C
    r4 = r4 + 0xd8; // 0x806CBFA0
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    /* lfs f2, 4(r31) */ // 0x806CBFA8
    /* lis r4, 0 */ // 0x806CBFAC
    /* lfs f3, 0(r31) */ // 0x806CBFB0
    /* stfs f3, 0x2c(r3) */ // 0x806CBFB4
    /* lfs f0, 0(r4) */ // 0x806CBFB8
    /* stfs f2, 0x30(r3) */ // 0x806CBFBC
    /* stfs f0, 0x34(r3) */ // 0x806CBFC0
    /* lfs f1, 8(r31) */ // 0x806CBFC4
    /* stfs f1, 0x44(r3) */ // 0x806CBFC8
    /* stfs f3, 8(r1) */ // 0x806CBFCC
    /* stfs f2, 0xc(r1) */ // 0x806CBFD0
    /* stfs f3, 0x18(r1) */ // 0x806CBFD4
    /* stfs f2, 0x1c(r1) */ // 0x806CBFD8
    /* stfs f0, 0x20(r1) */ // 0x806CBFDC
    /* stfs f1, 0x10(r1) */ // 0x806CBFE0
    /* stfs f1, 0x14(r1) */ // 0x806CBFE4
    /* stfs f1, 0x48(r3) */ // 0x806CBFE8
    r0 = *(0x44 + r1); // lwz @ 0x806CBFEC
    r31 = *(0x3c + r1); // lwz @ 0x806CBFF0
    r30 = *(0x38 + r1); // lwz @ 0x806CBFF4
    r29 = *(0x34 + r1); // lwz @ 0x806CBFF8
    return;
}