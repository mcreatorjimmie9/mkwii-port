/* Function at 0x80733C38, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80733C38(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x80733C4C
    *(0x14 + r1) = r29; // stw @ 0x80733C50
    r29 = r3;
    r31 = r29;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733C5C
    if (==) goto 0x0x80733c9c;
    /* slwi r0, r30, 0x1e */ // 0x80733C68
    /* srwi r4, r30, 0x1f */ // 0x80733C6C
    /* subf r0, r4, r0 */ // 0x80733C70
    /* rotlwi r0, r0, 2 */ // 0x80733C74
    r0 = r0 + r4; // 0x80733C78
    r4 = r29 + r0; // 0x80733C7C
    r0 = *(0x848 + r4); // lbz @ 0x80733C80
    if (==) goto 0x0x80733c9c;
    r12 = *(0 + r3); // lwz @ 0x80733C8C
    r12 = *(0x18 + r12); // lwz @ 0x80733C90
    /* mtctr r12 */ // 0x80733C94
    /* bctrl  */ // 0x80733C98
    r30 = r30 + 1; // 0x80733C9C
    r31 = r31 + 4; // 0x80733CA0
    if (<) goto 0x0x80733c5c;
    r0 = *(0x24 + r1); // lwz @ 0x80733CAC
    r31 = *(0x1c + r1); // lwz @ 0x80733CB0
    r30 = *(0x18 + r1); // lwz @ 0x80733CB4
    r29 = *(0x14 + r1); // lwz @ 0x80733CB8
    return;
}