/* Function at 0x80733CC8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80733CC8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x10; // 0x80733CD8
    *(0x18 + r1) = r30; // stw @ 0x80733CDC
    /* li r30, 4 */ // 0x80733CE0
    *(0x14 + r1) = r29; // stw @ 0x80733CE4
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733CEC
    if (==) goto 0x0x80733d38;
    /* slwi r0, r30, 0x1e */ // 0x80733CF8
    /* srwi r4, r30, 0x1f */ // 0x80733CFC
    /* subf r0, r4, r0 */ // 0x80733D00
    /* rotlwi r0, r0, 2 */ // 0x80733D04
    r0 = r0 + r4; // 0x80733D08
    r4 = r29 + r0; // 0x80733D0C
    r0 = *(0x848 + r4); // lbz @ 0x80733D10
    if (==) goto 0x0x80733d38;
    r0 = *(0x96d + r4); // lbz @ 0x80733D1C
    if (!=) goto 0x0x80733d38;
    r12 = *(0 + r3); // lwz @ 0x80733D28
    r12 = *(0xc + r12); // lwz @ 0x80733D2C
    /* mtctr r12 */ // 0x80733D30
    /* bctrl  */ // 0x80733D34
    r30 = r30 + 1; // 0x80733D38
    r31 = r31 + 4; // 0x80733D3C
    if (<) goto 0x0x80733cec;
    r0 = *(0x24 + r1); // lwz @ 0x80733D48
    r31 = *(0x1c + r1); // lwz @ 0x80733D4C
    r30 = *(0x18 + r1); // lwz @ 0x80733D50
    r29 = *(0x14 + r1); // lwz @ 0x80733D54
    return;
}