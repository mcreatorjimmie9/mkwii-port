/* Function at 0x80841F80, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_80841F80(int r4, int r6)
{
    /* mulli r0, r4, 0x1c */ // 0x80841F80
    /* lis r6, 0 */ // 0x80841F84
    *(4 + r3) = r4; // stw @ 0x80841F88
    /* li r4, 0 */ // 0x80841F8C
    r6 = r6 + 0; // 0x80841F90
    r6 = r6 + r0; // 0x80841F94
    r0 = *(8 + r6); // lwz @ 0x80841F98
    *(8 + r3) = r0; // stw @ 0x80841F9C
    *(0x18 + r3) = r4; // stw @ 0x80841FA0
    *(0x29 + r3) = r5; // stb @ 0x80841FA4
    r0 = *(0x10 + r6); // lbz @ 0x80841FA8
    *(0x1c + r3) = r0; // stb @ 0x80841FAC
    *(0x20 + r3) = r4; // stw @ 0x80841FB0
    *(0x24 + r3) = r4; // stw @ 0x80841FB4
    return;
}