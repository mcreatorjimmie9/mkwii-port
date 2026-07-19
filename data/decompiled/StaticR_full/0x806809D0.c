/* Function at 0x806809D0, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806809D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806809D8
    /* li r0, 1 */ // 0x806809E0
    *(0x1c + r1) = r31; // stw @ 0x806809E4
    *(0x18 + r1) = r30; // stw @ 0x806809E8
    *(0x14 + r1) = r29; // stw @ 0x806809EC
    r29 = r3;
    r4 = *(0 + r5); // lwz @ 0x806809F4
    r3 = *(0 + r4); // lwz @ 0x806809F8
    *(0x38a + r3) = r0; // stb @ 0x806809FC
    r3 = *(0 + r5); // lwz @ 0x80680A00
    r3 = *(0 + r3); // lwz @ 0x80680A04
    *(0x388 + r3) = r0; // stb @ 0x80680A08
    r3 = *(0 + r5); // lwz @ 0x80680A0C
    r3 = *(0 + r3); // lwz @ 0x80680A10
    FUN_8068608C(); // bl 0x8068608C
    r31 = r3;
    if (==) goto 0x0x80680a38;
    r3 = *(0x38 + r3); // lwz @ 0x80680A24
    r12 = *(0 + r3); // lwz @ 0x80680A28
    r12 = *(0x24 + r12); // lwz @ 0x80680A2C
    /* mtctr r12 */ // 0x80680A30
    /* bctrl  */ // 0x80680A34
    /* lis r3, 0 */ // 0x80680A38
    r3 = *(0 + r3); // lwz @ 0x80680A3C
    r30 = r3 + 0x34; // 0x80680A40
    r3 = r30;
    FUN_8067FA04(r3, r3); // bl 0x8067FA04
    r3 = r30;
    FUN_8067FA20(r3, r3); // bl 0x8067FA20
    *(0x4b0 + r29) = r3; // stw @ 0x80680A54
    r4 = r3;
    r3 = r30;
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    *(0x4b8 + r29) = r3; // stw @ 0x80680A68
    if (==) goto 0x0x80680a80;
    r3 = *(0x38 + r31); // lwz @ 0x80680A70
    r0 = *(0xd + r3); // lbz @ 0x80680A74
    *(0x4b4 + r29) = r0; // stb @ 0x80680A78
    /* b 0x80680a88 */ // 0x80680A7C
    /* li r0, 0 */ // 0x80680A80
    *(0x4b4 + r29) = r0; // stb @ 0x80680A84
    r0 = *(0x24 + r1); // lwz @ 0x80680A88
    r31 = *(0x1c + r1); // lwz @ 0x80680A8C
    r30 = *(0x18 + r1); // lwz @ 0x80680A90
    r29 = *(0x14 + r1); // lwz @ 0x80680A94
    return;
}