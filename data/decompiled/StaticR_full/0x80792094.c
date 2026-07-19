/* Function at 0x80792094, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80792094(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x807920A0
    /* fmr f31, f1 */ // 0x807920A4
    *(0x14 + r1) = r31; // stw @ 0x807920A8
    *(0x10 + r1) = r30; // stw @ 0x807920AC
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x807920B4
    r29 = r3;
    r0 = *(0xa9 + r3); // lbz @ 0x807920BC
    if (==) goto 0x0x807920d0;
    /* li r3, 0 */ // 0x807920C8
    /* b 0x80792170 */ // 0x807920CC
    /* li r31, 0 */ // 0x807920D0
    r3 = r3 + 0x8c; // 0x807920D4
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x807920ec;
    /* li r31, 0 */ // 0x807920E4
    /* b 0x8079216c */ // 0x807920E8
    r4 = *(0x80 + r29); // lwz @ 0x807920EC
    /* li r3, 0 */ // 0x807920F0
    if (==) goto 0x0x8079211c;
    if (==) goto 0x0x80792108;
    r0 = *(0x90 + r4); // lwz @ 0x80792100
    /* b 0x8079210c */ // 0x80792104
    /* li r0, -1 */ // 0x80792108
    if (!=) goto 0x0x8079211c;
    r3 = r29 + 0x80; // 0x80792114
    /* b 0x80792144 */ // 0x80792118
    r4 = *(0x84 + r29); // lwz @ 0x8079211C
    if (==) goto 0x0x80792144;
    if (==) goto 0x0x80792134;
    r0 = *(0x90 + r4); // lwz @ 0x8079212C
    /* b 0x80792138 */ // 0x80792130
    /* li r0, -1 */ // 0x80792134
    if (!=) goto 0x0x80792144;
    r3 = r29 + 0x84; // 0x80792140
    if (!=) goto 0x0x8079216c;
    r12 = *(0 + r29); // lwz @ 0x8079214C
    /* fmr f1, f31 */ // 0x80792150
    r3 = r29;
    r4 = r30;
    r12 = *(0xe0 + r12); // lwz @ 0x8079215C
    /* mtctr r12 */ // 0x80792160
    /* bctrl  */ // 0x80792164
    r31 = r3;
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80792170
    /* lfd f31, 0x18(r1) */ // 0x80792174
    r31 = *(0x14 + r1); // lwz @ 0x80792178
    r30 = *(0x10 + r1); // lwz @ 0x8079217C
    r29 = *(0xc + r1); // lwz @ 0x80792180
    return;
}