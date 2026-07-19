/* Function at 0x80807250, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80807250(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80807258
    *(0xc + r1) = r31; // stw @ 0x80807260
    *(8 + r1) = r30; // stw @ 0x80807264
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8080726C
    r12 = *(0x68 + r12); // lwz @ 0x80807270
    /* mtctr r12 */ // 0x80807274
    /* bctrl  */ // 0x80807278
    r12 = *(0 + r30); // lwz @ 0x8080727C
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x80807284
    /* mtctr r12 */ // 0x80807288
    /* bctrl  */ // 0x8080728C
    r0 = *(0x20 + r3); // lwz @ 0x80807290
    r0 = r0 | 0x2121; // 0x80807294
    r0 = r0 | 0x2121; // 0x80807298
    *(0x20 + r3) = r0; // stw @ 0x8080729C
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x808072A4
    r12 = *(0x90 + r12); // lwz @ 0x808072A8
    /* mtctr r12 */ // 0x808072AC
    /* bctrl  */ // 0x808072B0
    /* lis r3, 0 */ // 0x808072B4
    /* li r31, 0 */ // 0x808072B8
    /* lfs f0, 0(r3) */ // 0x808072BC
    r3 = r30;
    *(0xb4 + r30) = r31; // stw @ 0x808072C4
    /* li r4, 0 */ // 0x808072C8
    /* stfs f0, 0xc4(r30) */ // 0x808072CC
    /* stfs f0, 0xc8(r30) */ // 0x808072D0
    /* stfs f0, 0xcc(r30) */ // 0x808072D4
    *(0x114 + r30) = r31; // stb @ 0x808072D8
    *(0x115 + r30) = r31; // stb @ 0x808072DC
    *(0x11c + r30) = r31; // stb @ 0x808072E0
    FUN_808A0A44(); // bl 0x808A0A44
    /* lis r3, 0 */ // 0x808072E8
    r0 = *(0 + r3); // lwz @ 0x808072EC
    *(0x110 + r30) = r0; // stw @ 0x808072F0
    *(0x174 + r30) = r31; // stw @ 0x808072F4
    r31 = *(0xc + r1); // lwz @ 0x808072F8
    r30 = *(8 + r1); // lwz @ 0x808072FC
    r0 = *(0x14 + r1); // lwz @ 0x80807300
    return;
}