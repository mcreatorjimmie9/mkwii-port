/* Function at 0x80841FBC, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_80841FBC(int r3, int r4)
{
    r0 = *(8 + r3); // lwz @ 0x80841FBC
    /* subf. r0, r4, r0 */ // 0x80841FC0
    *(8 + r3) = r0; // stw @ 0x80841FC4
    /* bnelr  */ // 0x80841FC8
    /* li r0, 0 */ // 0x80841FCC
    /* li r4, 0x14 */ // 0x80841FD0
    *(4 + r3) = r4; // stw @ 0x80841FD4
    *(8 + r3) = r0; // stw @ 0x80841FD8
    *(0x29 + r3) = r0; // stb @ 0x80841FDC
    *(0x18 + r3) = r0; // stw @ 0x80841FE0
    *(0xc + r3) = r0; // stw @ 0x80841FE4
    *(0x10 + r3) = r0; // stw @ 0x80841FE8
    *(0x14 + r3) = r0; // stw @ 0x80841FEC
    *(0x1c + r3) = r0; // stb @ 0x80841FF0
    *(0x20 + r3) = r0; // stw @ 0x80841FF4
    *(0x24 + r3) = r0; // stw @ 0x80841FF8
    return;
}