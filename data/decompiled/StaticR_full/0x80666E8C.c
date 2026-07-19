/* Function at 0x80666E8C, size=560 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80666E8C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80666EA4
    /* lis r30, 0 */ // 0x80666EA8
    r30 = r30 + 0; // 0x80666EAC
    *(0x14 + r1) = r29; // stw @ 0x80666EB0
    r29 = r4;
    if (==) goto 0x0x80666f04;
    r12 = *(0 + r29); // lwz @ 0x80666EBC
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80666EC4
    /* mtctr r12 */ // 0x80666EC8
    /* bctrl  */ // 0x80666ECC
    /* b 0x80666ee8 */ // 0x80666ED0
    if (!=) goto 0x0x80666ee4;
    /* li r0, 1 */ // 0x80666EDC
    /* b 0x80666ef4 */ // 0x80666EE0
    r3 = *(0 + r3); // lwz @ 0x80666EE4
    if (!=) goto 0x0x80666ed4;
    /* li r0, 0 */ // 0x80666EF0
    if (==) goto 0x0x80666f04;
    r0 = r29;
    /* b 0x80666f08 */ // 0x80666F00
    /* li r0, 0 */ // 0x80666F04
    if (==) goto 0x0x80666f70;
    /* li r0, 8 */ // 0x80666F10
    r3 = r29 + 0xcd; // 0x80666F14
    /* mtctr r0 */ // 0x80666F18
    r0 = *(0 + r3); // lbz @ 0x80666F1C
    /* extsb. r0, r0 */ // 0x80666F20
    if (!=) goto 0x0x80666f30;
    /* li r0, 0 */ // 0x80666F28
    /* b 0x80666f4c */ // 0x80666F2C
    if (!=) goto 0x0x80666f40;
    /* li r0, 1 */ // 0x80666F38
    /* b 0x80666f4c */ // 0x80666F3C
    r3 = r3 + 1; // 0x80666F40
    if (counter-- != 0) goto 0x0x80666f1c;
    /* li r0, 0 */ // 0x80666F48
    if (!=) goto 0x0x80666f60;
    r3 = *(8 + r31); // lwz @ 0x80666F54
    r0 = r3 + 1; // 0x80666F58
    *(8 + r31) = r0; // stw @ 0x80666F5C
    r3 = *(4 + r31); // lwz @ 0x80666F60
    r0 = r3 + 1; // 0x80666F64
    *(4 + r31) = r0; // stw @ 0x80666F68
    /* b 0x806670a0 */ // 0x80666F6C
    /* lis r30, 0 */ // 0x80666F74
    r30 = r30 + 0; // 0x80666F78
    if (==) goto 0x0x80666fc8;
    r12 = *(0 + r29); // lwz @ 0x80666F80
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80666F88
    /* mtctr r12 */ // 0x80666F8C
    /* bctrl  */ // 0x80666F90
    /* b 0x80666fac */ // 0x80666F94
    if (!=) goto 0x0x80666fa8;
    /* li r0, 1 */ // 0x80666FA0
    /* b 0x80666fb8 */ // 0x80666FA4
    r3 = *(0 + r3); // lwz @ 0x80666FA8
    if (!=) goto 0x0x80666f98;
    /* li r0, 0 */ // 0x80666FB4
    if (==) goto 0x0x80666fc8;
    r0 = r29;
    /* b 0x80666fcc */ // 0x80666FC4
    /* li r0, 0 */ // 0x80666FC8
    if (==) goto 0x0x80667034;
    /* li r0, 8 */ // 0x80666FD4
    r3 = r29 + 0xcd; // 0x80666FD8
    /* mtctr r0 */ // 0x80666FDC
    r0 = *(0 + r3); // lbz @ 0x80666FE0
    /* extsb. r0, r0 */ // 0x80666FE4
    if (!=) goto 0x0x80666ff4;
    /* li r0, 0 */ // 0x80666FEC
    /* b 0x80667010 */ // 0x80666FF0
    if (!=) goto 0x0x80667004;
    /* li r0, 1 */ // 0x80666FFC
    /* b 0x80667010 */ // 0x80667000
    r3 = r3 + 1; // 0x80667004
    if (counter-- != 0) goto 0x0x80666fe0;
    /* li r0, 0 */ // 0x8066700C
    if (==) goto 0x0x80667024;
    r3 = *(0xc + r31); // lwz @ 0x80667018
    r0 = r3 + 1; // 0x8066701C
    *(0xc + r31) = r0; // stw @ 0x80667020
    r3 = *(4 + r31); // lwz @ 0x80667024
    r0 = r3 + 1; // 0x80667028
    *(4 + r31) = r0; // stw @ 0x8066702C
    /* b 0x806670a0 */ // 0x80667030
    /* lis r30, 0 */ // 0x80667038
    r30 = r30 + 0; // 0x8066703C
    if (==) goto 0x0x80667088;
    r12 = *(0 + r29); // lwz @ 0x80667044
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x8066704C
    /* mtctr r12 */ // 0x80667050
    /* bctrl  */ // 0x80667054
    /* b 0x80667070 */ // 0x80667058
    if (!=) goto 0x0x8066706c;
    /* li r0, 1 */ // 0x80667064
    /* b 0x8066707c */ // 0x80667068
    r3 = *(0 + r3); // lwz @ 0x8066706C
    if (!=) goto 0x0x8066705c;
    /* li r0, 0 */ // 0x80667078
    if (==) goto 0x0x80667088;
    /* b 0x8066708c */ // 0x80667084
    /* li r29, 0 */ // 0x80667088
    if (==) goto 0x0x806670a0;
    r3 = *(4 + r31); // lwz @ 0x80667094
    r0 = r3 + 1; // 0x80667098
    *(4 + r31) = r0; // stw @ 0x8066709C
    r0 = *(0x24 + r1); // lwz @ 0x806670A0
    r31 = *(0x1c + r1); // lwz @ 0x806670A4
    r30 = *(0x18 + r1); // lwz @ 0x806670A8
    r29 = *(0x14 + r1); // lwz @ 0x806670AC
    return;
}