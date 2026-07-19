/* Function at 0x808B3FE8, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808B3FE8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x18(r1) */ // 0x808B3FF4
    *(0x14 + r1) = r31; // stw @ 0x808B3FF8
    r31 = r4;
    *(0x10 + r1) = r30; // stw @ 0x808B4000
    r30 = r3;
    r3 = r5;
    FUN_8064A384(r3); // bl 0x8064A384
    r0 = *(0x42c + r30); // lbz @ 0x808B4010
    /* fmr f31, f1 */ // 0x808B4014
    if (!=) goto 0x0x808b4090;
    r0 = *(8 + r30); // lwz @ 0x808B4020
    if (!=) goto 0x0x808b4090;
    /* li r0, -1 */ // 0x808B402C
    *(0x3e8 + r30) = r0; // stw @ 0x808B4030
    r3 = r31;
    FUN_808CFE50(r3); // bl 0x808CFE50
    if (==) goto 0x0x808b4068;
    *(0x3f4 + r30) = r31; // stw @ 0x808B4044
    r3 = r30;
    /* li r4, 0x4b */ // 0x808B404C
    /* li r5, 0 */ // 0x808B4050
    r12 = *(0 + r30); // lwz @ 0x808B4054
    r12 = *(0x24 + r12); // lwz @ 0x808B4058
    /* mtctr r12 */ // 0x808B405C
    /* bctrl  */ // 0x808B4060
    /* b 0x808b4088 */ // 0x808B4064
    r12 = *(0 + r30); // lwz @ 0x808B4068
    /* fmr f1, f31 */ // 0x808B406C
    r3 = r30;
    r4 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x808B4078
    /* li r5, 0 */ // 0x808B407C
    /* mtctr r12 */ // 0x808B4080
    /* bctrl  */ // 0x808B4084
    /* li r0, 1 */ // 0x808B4088
    *(0x42c + r30) = r0; // stb @ 0x808B408C
    r0 = *(0x24 + r1); // lwz @ 0x808B4090
    /* lfd f31, 0x18(r1) */ // 0x808B4094
    r31 = *(0x14 + r1); // lwz @ 0x808B4098
    r30 = *(0x10 + r1); // lwz @ 0x808B409C
    return;
}