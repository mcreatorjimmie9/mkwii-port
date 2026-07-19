/* Function at 0x805FA020, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805FA020(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805FA038
    *(0x14 + r1) = r29; // stw @ 0x805FA03C
    *(0x10 + r1) = r28; // stw @ 0x805FA040
    if (==) goto 0x0x805fa05c;
    /* li r4, 1 */ // 0x805FA048
    /* li r0, 0 */ // 0x805FA04C
    *(0x12 + r3) = r4; // stb @ 0x805FA050
    *(0x10 + r3) = r0; // sth @ 0x805FA054
    /* b 0x805fa09c */ // 0x805FA058
    r4 = *(0x10 + r3); // lha @ 0x805FA05C
    r0 = r4 + 1; // 0x805FA060
    *(0x10 + r3) = r0; // sth @ 0x805FA064
    /* extsh r0, r0 */ // 0x805FA068
    if (<) goto 0x0x805fa09c;
    r0 = *(0x12 + r3); // lbz @ 0x805FA074
    if (==) goto 0x0x805fa08c;
    /* li r0, 0 */ // 0x805FA080
    *(0x12 + r3) = r0; // stb @ 0x805FA084
    /* b 0x805fa094 */ // 0x805FA088
    /* li r0, 1 */ // 0x805FA08C
    *(0x12 + r3) = r0; // stb @ 0x805FA090
    /* li r0, 0 */ // 0x805FA094
    *(0x10 + r3) = r0; // sth @ 0x805FA098
    r3 = r31;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    r29 = r3;
    /* li r30, 0 */ // 0x805FA0A8
    r28 = r29;
    /* b 0x805fa0d4 */ // 0x805FA0B0
    r12 = *(0xc + r31); // lwz @ 0x805FA0B4
    r3 = r31;
    r4 = *(0xd8 + r28); // lwz @ 0x805FA0BC
    r12 = *(8 + r12); // lwz @ 0x805FA0C0
    /* mtctr r12 */ // 0x805FA0C4
    /* bctrl  */ // 0x805FA0C8
    r28 = r28 + 4; // 0x805FA0CC
    r30 = r30 + 1; // 0x805FA0D0
    r0 = *(0xf0 + r29); // lwz @ 0x805FA0D4
    if (<) goto 0x0x805fa0b4;
    r3 = r31;
    FUN_8061DF18(r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x805FA0E8
    r12 = *(0x2c + r12); // lwz @ 0x805FA0EC
    /* mtctr r12 */ // 0x805FA0F0
    /* bctrl  */ // 0x805FA0F4
    /* li r29, 0 */ // 0x805FA0F8
    /* b 0x805fa120 */ // 0x805FA0FC
    r3 = r31;
    r4 = r29;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x805FA10C
    r12 = *(0x2c + r12); // lwz @ 0x805FA110
    /* mtctr r12 */ // 0x805FA114
    /* bctrl  */ // 0x805FA118
    r29 = r29 + 1; // 0x805FA11C
    r3 = r31;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x805FA128
    if (<) goto 0x0x805fa100;
    /* li r29, 0 */ // 0x805FA134
    /* b 0x805fa15c */ // 0x805FA138
    r3 = r31;
    r4 = r29;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r12 = *(0xc + r3); // lwz @ 0x805FA148
    r12 = *(0x2c + r12); // lwz @ 0x805FA14C
    /* mtctr r12 */ // 0x805FA150
    /* bctrl  */ // 0x805FA154
    r29 = r29 + 1; // 0x805FA158
    r3 = r31;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x805FA164
    if (<) goto 0x0x805fa13c;
    r0 = *(0x24 + r1); // lwz @ 0x805FA170
    r31 = *(0x1c + r1); // lwz @ 0x805FA174
    r30 = *(0x18 + r1); // lwz @ 0x805FA178
    r29 = *(0x14 + r1); // lwz @ 0x805FA17C
    r28 = *(0x10 + r1); // lwz @ 0x805FA180
    return;
}