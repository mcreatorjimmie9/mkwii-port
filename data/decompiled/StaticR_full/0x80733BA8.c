/* Function at 0x80733BA8, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80733BA8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x80733BBC
    *(0x14 + r1) = r29; // stw @ 0x80733BC0
    r29 = r3;
    r31 = r29;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733BCC
    if (==) goto 0x0x80733c0c;
    /* slwi r0, r30, 0x1e */ // 0x80733BD8
    /* srwi r4, r30, 0x1f */ // 0x80733BDC
    /* subf r0, r4, r0 */ // 0x80733BE0
    /* rotlwi r0, r0, 2 */ // 0x80733BE4
    r0 = r0 + r4; // 0x80733BE8
    r4 = r29 + r0; // 0x80733BEC
    r0 = *(0x848 + r4); // lbz @ 0x80733BF0
    if (==) goto 0x0x80733c0c;
    r12 = *(0 + r3); // lwz @ 0x80733BFC
    r12 = *(0x10 + r12); // lwz @ 0x80733C00
    /* mtctr r12 */ // 0x80733C04
    /* bctrl  */ // 0x80733C08
    r30 = r30 + 1; // 0x80733C0C
    r31 = r31 + 4; // 0x80733C10
    if (<) goto 0x0x80733bcc;
    r0 = *(0x24 + r1); // lwz @ 0x80733C1C
    r31 = *(0x1c + r1); // lwz @ 0x80733C20
    r30 = *(0x18 + r1); // lwz @ 0x80733C24
    r29 = *(0x14 + r1); // lwz @ 0x80733C28
    return;
}