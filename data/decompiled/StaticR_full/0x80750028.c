/* Function at 0x80750028, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80750028(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80750030
    /* li r31, 0 */ // 0x8075003C
    *(0x18 + r1) = r30; // stw @ 0x80750040
    /* li r30, -1 */ // 0x80750044
    *(0x14 + r1) = r29; // stw @ 0x80750048
    r29 = r3;
    *(0xc4 + r3) = r30; // stw @ 0x80750050
    *(0xd2 + r3) = r31; // stb @ 0x80750054
    *(0xd1 + r3) = r31; // stb @ 0x80750058
    *(0xdf + r3) = r31; // stb @ 0x8075005C
    r12 = *(0 + r3); // lwz @ 0x80750060
    r12 = *(0x100 + r12); // lwz @ 0x80750064
    /* mtctr r12 */ // 0x80750068
    /* bctrl  */ // 0x8075006C
    /* li r0, 0xff */ // 0x80750070
    *(0xd8 + r29) = r30; // sth @ 0x80750074
    r3 = r29;
    /* li r4, 0 */ // 0x8075007C
    *(0xd4 + r29) = r31; // stb @ 0x80750080
    *(0xd5 + r29) = r31; // stb @ 0x80750084
    *(0xd6 + r29) = r31; // stb @ 0x80750088
    *(0xd7 + r29) = r0; // stb @ 0x8075008C
    *(0xdc + r29) = r30; // sth @ 0x80750090
    FUN_808A0A44(); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x80750098
    r31 = *(0x1c + r1); // lwz @ 0x8075009C
    r30 = *(0x18 + r1); // lwz @ 0x807500A0
    r29 = *(0x14 + r1); // lwz @ 0x807500A4
    return;
}