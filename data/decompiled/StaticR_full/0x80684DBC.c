/* Function at 0x80684DBC, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_80684DBC(int r3, int r7)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684DBC
    /* bnelr  */ // 0x80684DC4
    r0 = *(0xc + r3); // lwz @ 0x80684DC8
    /* bnelr  */ // 0x80684DD0
    /* li r7, 1 */ // 0x80684DD4
    /* li r0, -1 */ // 0x80684DD8
    *(3 + r3) = r7; // stb @ 0x80684DDC
    *(0x110 + r3) = r0; // stw @ 0x80684DE0
    *(0x114 + r3) = r4; // stw @ 0x80684DE4
    *(0x118 + r3) = r5; // stb @ 0x80684DE8
    *(0x11c + r3) = r6; // stw @ 0x80684DEC
    return;
}