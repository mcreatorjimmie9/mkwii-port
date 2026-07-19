/* Function at 0x808F6FEC, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808F6FEC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F7008
    r28 = r3;
    FUN_808F914C(); // bl 0x808F914C
    /* addis r0, r3, 1 */ // 0x808F7014
    r31 = r3;
    /* li r30, 0 */ // 0x808F7020
    if (==) goto 0x0x808f7088;
    r3 = *(0x2c + r28); // lwz @ 0x808F7028
    if (==) goto 0x0x808f704c;
    r12 = *(0 + r3); // lwz @ 0x808F7034
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x808F703C
    /* mtctr r12 */ // 0x808F7040
    /* bctrl  */ // 0x808F7044
    /* b 0x808f706c */ // 0x808F7048
    /* lis r3, 0 */ // 0x808F704C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808F7054
    r5 = r31;
    r12 = *(0 + r3); // lwz @ 0x808F705C
    r12 = *(0xb0 + r12); // lwz @ 0x808F7060
    /* mtctr r12 */ // 0x808F7064
    /* bctrl  */ // 0x808F7068
    r30 = r3;
    if (==) goto 0x0x808f7088;
    r3 = r28;
    r4 = r31;
    /* li r5, 1 */ // 0x808F7080
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x808F708C
    r30 = *(0x18 + r1); // lwz @ 0x808F7090
    r29 = *(0x14 + r1); // lwz @ 0x808F7094
    r28 = *(0x10 + r1); // lwz @ 0x808F7098
    r0 = *(0x24 + r1); // lwz @ 0x808F709C
    return;
}