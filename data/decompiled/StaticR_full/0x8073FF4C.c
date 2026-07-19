/* Function at 0x8073FF4C, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8073FF4C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8073FF64
    r29 = r3;
    r5 = *(0x124 + r3); // lwz @ 0x8073FF6C
    if (!=) goto 0x0x8073ff84;
    r0 = *(0x350 + r3); // lwz @ 0x8073FF78
    if (==) goto 0x0x807400b8;
    if (!=) goto 0x0x8073ff98;
    r0 = *(0x334 + r3); // lwz @ 0x8073FF8C
    if (==) goto 0x0x807400b8;
    if (!=) goto 0x0x80740034;
    r0 = r4 + 0xe; // 0x8073FFA0
    /* slwi r0, r0, 2 */ // 0x8073FFA4
    r31 = r3 + r0; // 0x8073FFA8
    r3 = *(0x318 + r31); // lwz @ 0x8073FFAC
    r12 = *(0 + r3); // lwz @ 0x8073FFB0
    r12 = *(0x14 + r12); // lwz @ 0x8073FFB4
    /* mtctr r12 */ // 0x8073FFB8
    /* bctrl  */ // 0x8073FFBC
    r3 = *(0x318 + r31); // lwz @ 0x8073FFC0
    r4 = r29 + 0x6f4; // 0x8073FFC4
    r12 = *(0 + r3); // lwz @ 0x8073FFC8
    r12 = *(0x78 + r12); // lwz @ 0x8073FFCC
    /* mtctr r12 */ // 0x8073FFD0
    /* bctrl  */ // 0x8073FFD4
    r3 = *(0x318 + r31); // lwz @ 0x8073FFD8
    /* mulli r0, r30, 0xc */ // 0x8073FFDC
    r12 = *(0 + r3); // lwz @ 0x8073FFE0
    r4 = r29 + r0; // 0x8073FFE4
    r12 = *(0x74 + r12); // lwz @ 0x8073FFE8
    r4 = r4 + 0x7bc; // 0x8073FFEC
    /* mtctr r12 */ // 0x8073FFF0
    /* bctrl  */ // 0x8073FFF4
    r0 = *(0xb0 + r29); // lbz @ 0x8073FFF8
    if (==) goto 0x0x8074001c;
    r3 = *(0x318 + r31); // lwz @ 0x80740004
    r4 = r29 + 0x72c; // 0x80740008
    r12 = *(0 + r3); // lwz @ 0x8074000C
    r12 = *(0x70 + r12); // lwz @ 0x80740010
    /* mtctr r12 */ // 0x80740014
    /* bctrl  */ // 0x80740018
    r3 = *(0x318 + r31); // lwz @ 0x8074001C
    r12 = *(0 + r3); // lwz @ 0x80740020
    r12 = *(0x80 + r12); // lwz @ 0x80740024
    /* mtctr r12 */ // 0x80740028
    /* bctrl  */ // 0x8074002C
    /* b 0x807400b8 */ // 0x80740030
    if (!=) goto 0x0x807400b8;
    r3 = *(0x334 + r3); // lwz @ 0x8074003C
    r12 = *(0 + r3); // lwz @ 0x80740040
    r12 = *(0x14 + r12); // lwz @ 0x80740044
    /* mtctr r12 */ // 0x80740048
    /* bctrl  */ // 0x8074004C
    r3 = *(0x334 + r29); // lwz @ 0x80740050
    r4 = r29 + 0x6f4; // 0x80740054
    r12 = *(0 + r3); // lwz @ 0x80740058
    r12 = *(0x78 + r12); // lwz @ 0x8074005C
    /* mtctr r12 */ // 0x80740060
    /* bctrl  */ // 0x80740064
    r3 = *(0x334 + r29); // lwz @ 0x80740068
    r4 = r29 + 0x7c8; // 0x8074006C
    r12 = *(0 + r3); // lwz @ 0x80740070
    r12 = *(0x74 + r12); // lwz @ 0x80740074
    /* mtctr r12 */ // 0x80740078
    /* bctrl  */ // 0x8074007C
    r0 = *(0xb0 + r29); // lbz @ 0x80740080
    if (==) goto 0x0x807400a4;
    r3 = *(0x334 + r29); // lwz @ 0x8074008C
    r4 = r29 + 0x72c; // 0x80740090
    r12 = *(0 + r3); // lwz @ 0x80740094
    r12 = *(0x70 + r12); // lwz @ 0x80740098
    /* mtctr r12 */ // 0x8074009C
    /* bctrl  */ // 0x807400A0
    r3 = *(0x334 + r29); // lwz @ 0x807400A4
    r12 = *(0 + r3); // lwz @ 0x807400A8
    r12 = *(0x80 + r12); // lwz @ 0x807400AC
    /* mtctr r12 */ // 0x807400B0
    /* bctrl  */ // 0x807400B4
    r0 = *(0x24 + r1); // lwz @ 0x807400B8
    r31 = *(0x1c + r1); // lwz @ 0x807400BC
    r30 = *(0x18 + r1); // lwz @ 0x807400C0
    r29 = *(0x14 + r1); // lwz @ 0x807400C4
    return;
}