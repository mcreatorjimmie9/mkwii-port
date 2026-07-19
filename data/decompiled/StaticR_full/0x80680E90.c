/* Function at 0x80680E90, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80680E90(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80680EA0
    *(0x18 + r1) = r30; // stw @ 0x80680EA4
    *(0x14 + r1) = r29; // stw @ 0x80680EA8
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x80680EB0
    r3 = r3 + 0x34; // 0x80680EB4
    FUN_8067F608(r3); // bl 0x8067F608
    r3 = *(0 + r31); // lwz @ 0x80680EBC
    /* li r0, 1 */ // 0x80680EC0
    r3 = *(0 + r3); // lwz @ 0x80680EC4
    *(0x388 + r3) = r0; // stb @ 0x80680EC8
    r3 = *(0 + r31); // lwz @ 0x80680ECC
    r3 = *(0 + r3); // lwz @ 0x80680ED0
    FUN_8068608C(); // bl 0x8068608C
    r31 = r3;
    if (==) goto 0x0x80680ef8;
    r3 = *(0x38 + r3); // lwz @ 0x80680EE4
    r12 = *(0 + r3); // lwz @ 0x80680EE8
    r12 = *(0x24 + r12); // lwz @ 0x80680EEC
    /* mtctr r12 */ // 0x80680EF0
    /* bctrl  */ // 0x80680EF4
    /* lis r3, 0 */ // 0x80680EF8
    r3 = *(0 + r3); // lwz @ 0x80680EFC
    r30 = r3 + 0x34; // 0x80680F00
    r3 = r30;
    FUN_8067FA04(r3, r3); // bl 0x8067FA04
    r3 = r30;
    FUN_8067FA20(r3, r3); // bl 0x8067FA20
    *(0x4b0 + r29) = r3; // stw @ 0x80680F14
    r4 = r3;
    r3 = r30;
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    *(0x4b8 + r29) = r3; // stw @ 0x80680F28
    if (==) goto 0x0x80680f40;
    r3 = *(0x38 + r31); // lwz @ 0x80680F30
    r0 = *(0xd + r3); // lbz @ 0x80680F34
    *(0x4b4 + r29) = r0; // stb @ 0x80680F38
    /* b 0x80680f48 */ // 0x80680F3C
    /* li r0, 0 */ // 0x80680F40
    *(0x4b4 + r29) = r0; // stb @ 0x80680F44
    r0 = *(0x24 + r1); // lwz @ 0x80680F48
    r31 = *(0x1c + r1); // lwz @ 0x80680F4C
    r30 = *(0x18 + r1); // lwz @ 0x80680F50
    r29 = *(0x14 + r1); // lwz @ 0x80680F54
    return;
}