/* Function at 0x808F8EAC, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_808F8EAC(int r4, int r5, int r7, int r8)
{
    /* subf r5, r4, r5 */ // 0x808F8EAC
    /* li r7, 0 */ // 0x808F8EB0
    r5 = r5 + 1; // 0x808F8EB4
    /* li r8, -1 */ // 0x808F8EB8
    /* li r0, 1 */ // 0x808F8EBC
    *(0x18 + r3) = r4; // stw @ 0x808F8EC0
    *(0x1c + r3) = r8; // stw @ 0x808F8EC4
    *(0x20 + r3) = r7; // stw @ 0x808F8EC8
    *(0x24 + r3) = r7; // sth @ 0x808F8ECC
    *(0x26 + r3) = r5; // stb @ 0x808F8ED0
    *(0x27 + r3) = r6; // stb @ 0x808F8ED4
    *(0x28 + r3) = r0; // stb @ 0x808F8ED8
    return;
}