/* Function at 0x807516B0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807516B0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807516B8
    /* li r31, 0 */ // 0x807516C4
    *(0x18 + r1) = r30; // stw @ 0x807516C8
    /* li r30, -1 */ // 0x807516CC
    *(0x14 + r1) = r29; // stw @ 0x807516D0
    r29 = r3;
    *(0xc4 + r3) = r30; // stw @ 0x807516D8
    *(0xd2 + r3) = r31; // stb @ 0x807516DC
    *(0xd1 + r3) = r31; // stb @ 0x807516E0
    *(0xdf + r3) = r31; // stb @ 0x807516E4
    r12 = *(0 + r3); // lwz @ 0x807516E8
    r12 = *(0x100 + r12); // lwz @ 0x807516EC
    /* mtctr r12 */ // 0x807516F0
    /* bctrl  */ // 0x807516F4
    /* li r0, 0xff */ // 0x807516F8
    *(0xd8 + r29) = r30; // sth @ 0x807516FC
    r3 = r29;
    /* li r4, 0 */ // 0x80751704
    *(0xd4 + r29) = r31; // stb @ 0x80751708
    *(0xd5 + r29) = r31; // stb @ 0x8075170C
    *(0xd6 + r29) = r31; // stb @ 0x80751710
    *(0xd7 + r29) = r0; // stb @ 0x80751714
    *(0xdc + r29) = r30; // sth @ 0x80751718
    FUN_808A0A44(); // bl 0x808A0A44
    r3 = *(0xe4 + r29); // lwz @ 0x80751720
    /* li r4, 0 */ // 0x80751724
    r12 = *(0 + r3); // lwz @ 0x80751728
    r12 = *(0xc + r12); // lwz @ 0x8075172C
    /* mtctr r12 */ // 0x80751730
    /* bctrl  */ // 0x80751734
    *(0x100 + r29) = r31; // stb @ 0x80751738
    r31 = *(0x1c + r1); // lwz @ 0x8075173C
    r30 = *(0x18 + r1); // lwz @ 0x80751740
    r29 = *(0x14 + r1); // lwz @ 0x80751744
    r0 = *(0x24 + r1); // lwz @ 0x80751748
    return;
}