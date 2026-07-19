/* Function at 0x807470DC, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807470DC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807470E4
    *(0xc + r1) = r31; // stw @ 0x807470EC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807470F4
    r4 = *(0 + r4); // lwz @ 0x807470F8
    r0 = *(0xb74 + r4); // lwz @ 0x807470FC
    if (==) goto 0x0x80747124;
    /* lis r4, 0 */ // 0x80747108
    r0 = *(0xbc + r3); // lwz @ 0x8074710C
    r4 = *(0 + r4); // lwz @ 0x80747110
    r4 = *(0x20 + r4); // lwz @ 0x80747114
    if (>) goto 0x0x8074713c;
    /* b 0x80747218 */ // 0x80747120
    r4 = *(0xcc + r3); // lwz @ 0x80747124
    r0 = *(0xbc + r3); // lwz @ 0x80747128
    if (<) goto 0x0x80747218;
    r0 = r4 + 1; // 0x80747134
    *(0xcc + r3) = r0; // stw @ 0x80747138
    r8 = *(0xd0 + r3); // lwz @ 0x8074713C
    r4 = *(0xb8 + r3); // lwz @ 0x80747140
    r5 = *(0xc4 + r3); // lwz @ 0x80747144
    r0 = r8 / r4; // 0x80747148
    r6 = *(0xb4 + r3); // lwz @ 0x8074714C
    r7 = *(0xc8 + r3); // lwz @ 0x80747150
    r0 = r0 * r4; // 0x80747154
    /* subf r0, r0, r8 */ // 0x80747158
    r0 = r5 * r0; // 0x8074715C
    r0 = r6 + r0; // 0x80747160
    if (!=) goto 0x0x807471f4;
    r3 = *(0xb0 + r3); // lwz @ 0x8074716C
    /* slwi r0, r8, 2 */ // 0x80747170
    /* lwzx r30, r3, r0 */ // 0x80747174
    r12 = *(0 + r30); // lwz @ 0x80747178
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x80747180
    /* mtctr r12 */ // 0x80747184
    /* bctrl  */ // 0x80747188
    /* li r0, 1 */ // 0x8074718C
    *(0xf0 + r30) = r0; // stb @ 0x80747190
    r3 = r30;
    /* li r4, 1 */ // 0x80747198
    r12 = *(0 + r30); // lwz @ 0x8074719C
    r12 = *(0x68 + r12); // lwz @ 0x807471A0
    /* mtctr r12 */ // 0x807471A4
    /* bctrl  */ // 0x807471A8
    r12 = *(0 + r30); // lwz @ 0x807471AC
    /* lis r4, 0 */ // 0x807471B0
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x807471B8
    r12 = *(0xe0 + r12); // lwz @ 0x807471BC
    /* mtctr r12 */ // 0x807471C0
    /* bctrl  */ // 0x807471C4
    r3 = *(0xd0 + r31); // lwz @ 0x807471C8
    r4 = *(0xb8 + r31); // lwz @ 0x807471CC
    r3 = r3 + 1; // 0x807471D0
    *(0xd0 + r31) = r3; // stw @ 0x807471D4
    r0 = r3 / r4; // 0x807471D8
    r0 = r0 * r4; // 0x807471DC
    /* subf. r0, r0, r3 */ // 0x807471E0
    if (!=) goto 0x0x807471f4;
    r0 = *(0xc4 + r31); // lwz @ 0x807471E8
    r0 = r0 * r4; // 0x807471EC
    *(0xc8 + r31) = r0; // stw @ 0x807471F0
    r3 = *(0xd0 + r31); // lwz @ 0x807471F4
    r0 = *(0xc0 + r31); // lwz @ 0x807471F8
    if (!=) goto 0x0x8074720c;
    /* li r0, 0 */ // 0x80747204
    *(0xd0 + r31) = r0; // stw @ 0x80747208
    r3 = *(0xc8 + r31); // lwz @ 0x8074720C
    r0 = r3 + 1; // 0x80747210
    *(0xc8 + r31) = r0; // stw @ 0x80747214
    r0 = *(0x14 + r1); // lwz @ 0x80747218
    r31 = *(0xc + r1); // lwz @ 0x8074721C
    r30 = *(8 + r1); // lwz @ 0x80747220
    return;
}