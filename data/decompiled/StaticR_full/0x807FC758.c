/* Function at 0x807FC758, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807FC758(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807FC768
    r30 = r3;
    r4 = *(0xc0 + r3); // lwz @ 0x807FC770
    /* addic. r0, r4, -1 */ // 0x807FC774
    *(0xc0 + r3) = r0; // stw @ 0x807FC778
    if (>) goto 0x0x807fc804;
    r5 = *(0xa0 + r3); // lwz @ 0x807FC780
    /* li r4, 0 */ // 0x807FC784
    r31 = *(0xc4 + r3); // lwz @ 0x807FC788
    r5 = *(0 + r5); // lwz @ 0x807FC78C
    r0 = *(0x34 + r5); // lha @ 0x807FC794
    *(0xc0 + r3) = r0; // stw @ 0x807FC798
    if (<) goto 0x0x807fc7b0;
    r0 = *(0xb4 + r3); // lwz @ 0x807FC7A0
    if (>=) goto 0x0x807fc7b0;
    /* li r4, 1 */ // 0x807FC7AC
    if (!=) goto 0x0x807fc7c8;
    r12 = *(0xb0 + r3); // lwzu @ 0x807FC7B8
    r12 = *(0x18 + r12); // lwz @ 0x807FC7BC
    /* mtctr r12 */ // 0x807FC7C0
    /* bctrl  */ // 0x807FC7C4
    r3 = *(0xb8 + r30); // lwz @ 0x807FC7C8
    /* slwi r0, r31, 2 */ // 0x807FC7CC
    /* lwzx r3, r3, r0 */ // 0x807FC7D0
    r12 = *(0 + r3); // lwz @ 0x807FC7D4
    r12 = *(0xf0 + r12); // lwz @ 0x807FC7D8
    /* mtctr r12 */ // 0x807FC7DC
    /* bctrl  */ // 0x807FC7E0
    r3 = *(0xc4 + r30); // lwz @ 0x807FC7E4
    r0 = *(0xbc + r30); // lwz @ 0x807FC7E8
    r3 = r3 + 1; // 0x807FC7EC
    *(0xc4 + r30) = r3; // stw @ 0x807FC7F0
    if (!=) goto 0x0x807fc804;
    /* li r0, 0 */ // 0x807FC7FC
    *(0xc4 + r30) = r0; // stw @ 0x807FC800
    r0 = *(0x14 + r1); // lwz @ 0x807FC804
    r31 = *(0xc + r1); // lwz @ 0x807FC808
    r30 = *(8 + r1); // lwz @ 0x807FC80C
    return;
}