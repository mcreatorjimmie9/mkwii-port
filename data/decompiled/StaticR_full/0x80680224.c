/* Function at 0x80680224, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80680224(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8068022C
    /* li r0, 1 */ // 0x80680234
    *(0x1c + r1) = r31; // stw @ 0x80680238
    *(0x18 + r1) = r30; // stw @ 0x8068023C
    *(0x14 + r1) = r29; // stw @ 0x80680240
    r29 = r3;
    r4 = *(0 + r5); // lwz @ 0x80680248
    r3 = *(0 + r4); // lwz @ 0x8068024C
    *(0x388 + r3) = r0; // stb @ 0x80680250
    r3 = *(0 + r5); // lwz @ 0x80680254
    r3 = *(0 + r3); // lwz @ 0x80680258
    FUN_8068608C(); // bl 0x8068608C
    r31 = r3;
    if (==) goto 0x0x80680280;
    r3 = *(0x38 + r3); // lwz @ 0x8068026C
    r12 = *(0 + r3); // lwz @ 0x80680270
    r12 = *(0x24 + r12); // lwz @ 0x80680274
    /* mtctr r12 */ // 0x80680278
    /* bctrl  */ // 0x8068027C
    /* lis r3, 0 */ // 0x80680280
    r3 = *(0 + r3); // lwz @ 0x80680284
    r30 = r3 + 0x34; // 0x80680288
    r3 = r30;
    FUN_8067FA04(r3, r3); // bl 0x8067FA04
    r3 = r30;
    FUN_8067FA20(r3, r3); // bl 0x8067FA20
    *(0x4b0 + r29) = r3; // stw @ 0x8068029C
    r4 = r3;
    r3 = r30;
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    *(0x4b8 + r29) = r3; // stw @ 0x806802B0
    if (==) goto 0x0x806802c8;
    r3 = *(0x38 + r31); // lwz @ 0x806802B8
    r0 = *(0xd + r3); // lbz @ 0x806802BC
    *(0x4b4 + r29) = r0; // stb @ 0x806802C0
    /* b 0x806802d0 */ // 0x806802C4
    /* li r0, 0 */ // 0x806802C8
    *(0x4b4 + r29) = r0; // stb @ 0x806802CC
    r0 = *(0x24 + r1); // lwz @ 0x806802D0
    r31 = *(0x1c + r1); // lwz @ 0x806802D4
    r30 = *(0x18 + r1); // lwz @ 0x806802D8
    r29 = *(0x14 + r1); // lwz @ 0x806802DC
    return;
}