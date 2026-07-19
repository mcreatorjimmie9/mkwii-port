/* Function at 0x8078BEE0, size=340 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8078BEE0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x8078BEE8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8078BEF8
    *(0x14 + r1) = r29; // stw @ 0x8078BEFC
    r29 = r5;
    r6 = *(0 + r6); // lwz @ 0x8078BF04
    if (==) goto 0x0x8078bf18;
    r0 = *(0x70 + r6); // lbz @ 0x8078BF10
    /* b 0x8078bf1c */ // 0x8078BF14
    /* li r0, 0 */ // 0x8078BF18
    if (!=) goto 0x0x8078c018;
    /* li r0, 3 */ // 0x8078BF24
    r6 = r31;
    /* li r8, 0 */ // 0x8078BF2C
    /* mtctr r0 */ // 0x8078BF30
    r7 = *(0x1c + r6); // lwz @ 0x8078BF34
    if (==) goto 0x0x8078bf60;
    if (==) goto 0x0x8078bf4c;
    r0 = *(0x90 + r7); // lwz @ 0x8078BF44
    /* b 0x8078bf50 */ // 0x8078BF48
    /* li r0, -1 */ // 0x8078BF4C
    if (!=) goto 0x0x8078bf60;
    /* li r0, 1 */ // 0x8078BF58
    /* b 0x8078bf64 */ // 0x8078BF5C
    /* li r0, 0 */ // 0x8078BF60
    if (==) goto 0x0x8078bfa0;
    /* mulli r6, r8, 0x74 */ // 0x8078BF6C
    /* lis r4, 0 */ // 0x8078BF70
    /* lfs f0, 0(r4) */ // 0x8078BF74
    /* mulli r0, r5, 0x1c */ // 0x8078BF78
    r3 = r3 + r6; // 0x8078BF7C
    r4 = r3 + r0; // 0x8078BF80
    /* lfs f1, 0x34(r4) */ // 0x8078BF84
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078BF88
    if (>) goto 0x0x8078c018;
    /* lis r3, 0 */ // 0x8078BF90
    /* lfs f0, 0(r3) */ // 0x8078BF94
    /* stfs f0, 0x34(r4) */ // 0x8078BF98
    /* b 0x8078c018 */ // 0x8078BF9C
    r6 = r6 + 0x74; // 0x8078BFA0
    r8 = r8 + 1; // 0x8078BFA4
    if (counter-- != 0) goto 0x0x8078bf34;
    /* li r0, 3 */ // 0x8078BFAC
    r3 = r31;
    /* li r6, 0 */ // 0x8078BFB4
    /* mtctr r0 */ // 0x8078BFB8
    r0 = *(0x1c + r3); // lwz @ 0x8078BFBC
    if (!=) goto 0x0x8078c00c;
    /* lis r3, 0 */ // 0x8078BFC8
    r5 = r4;
    r3 = *(0 + r3); // lwz @ 0x8078BFD0
    /* mulli r30, r6, 0x74 */ // 0x8078BFD4
    r12 = *(0 + r3); // lwz @ 0x8078BFD8
    r4 = r31 + r30; // 0x8078BFDC
    r12 = *(0xb0 + r12); // lwz @ 0x8078BFE0
    r4 = r4 + 0x1c; // 0x8078BFE4
    /* mtctr r12 */ // 0x8078BFE8
    /* bctrl  */ // 0x8078BFEC
    /* mulli r0, r29, 0x1c */ // 0x8078BFF0
    r3 = r31 + r30; // 0x8078BFF4
    /* lis r4, 0 */ // 0x8078BFF8
    /* lfs f0, 0(r4) */ // 0x8078BFFC
    r3 = r3 + r0; // 0x8078C000
    /* stfs f0, 0x34(r3) */ // 0x8078C004
    /* b 0x8078c018 */ // 0x8078C008
    r3 = r3 + 0x74; // 0x8078C00C
    r6 = r6 + 1; // 0x8078C010
    if (counter-- != 0) goto 0x0x8078bfbc;
    r0 = *(0x24 + r1); // lwz @ 0x8078C018
    r31 = *(0x1c + r1); // lwz @ 0x8078C01C
    r30 = *(0x18 + r1); // lwz @ 0x8078C020
    r29 = *(0x14 + r1); // lwz @ 0x8078C024
    return;
}