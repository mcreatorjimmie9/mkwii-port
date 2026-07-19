/* Function at 0x805FB170, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805FB170(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x805FB188
    r28 = r3;
    FUN_8061E2BC(); // bl 0x8061E2BC
    r31 = r3;
    /* li r30, 0 */ // 0x805FB198
    r29 = r31;
    /* b 0x805fb1c4 */ // 0x805FB1A0
    r12 = *(0xc + r28); // lwz @ 0x805FB1A4
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FB1AC
    r12 = *(8 + r12); // lwz @ 0x805FB1B0
    /* mtctr r12 */ // 0x805FB1B4
    /* bctrl  */ // 0x805FB1B8
    r29 = r29 + 4; // 0x805FB1BC
    r30 = r30 + 1; // 0x805FB1C0
    r0 = *(0xf0 + r31); // lwz @ 0x805FB1C4
    if (<) goto 0x0x805fb1a4;
    r3 = r28;
    FUN_8061DF18(r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x805FB1D8
    r12 = *(0x28 + r12); // lwz @ 0x805FB1DC
    /* mtctr r12 */ // 0x805FB1E0
    /* bctrl  */ // 0x805FB1E4
    /* li r29, 0 */ // 0x805FB1E8
    /* b 0x805fb210 */ // 0x805FB1EC
    r3 = r28;
    r4 = r29;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x805FB1FC
    r12 = *(0x28 + r12); // lwz @ 0x805FB200
    /* mtctr r12 */ // 0x805FB204
    /* bctrl  */ // 0x805FB208
    r29 = r29 + 1; // 0x805FB20C
    r3 = r28;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x805FB218
    if (<) goto 0x0x805fb1f0;
    /* li r29, 0 */ // 0x805FB224
    /* b 0x805fb24c */ // 0x805FB228
    r3 = r28;
    r4 = r29;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r12 = *(0xc + r3); // lwz @ 0x805FB238
    r12 = *(0x28 + r12); // lwz @ 0x805FB23C
    /* mtctr r12 */ // 0x805FB240
    /* bctrl  */ // 0x805FB244
    r29 = r29 + 1; // 0x805FB248
    r3 = r28;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x805FB254
    if (<) goto 0x0x805fb22c;
    r0 = *(0x24 + r1); // lwz @ 0x805FB260
    r31 = *(0x1c + r1); // lwz @ 0x805FB264
    r30 = *(0x18 + r1); // lwz @ 0x805FB268
    r29 = *(0x14 + r1); // lwz @ 0x805FB26C
    r28 = *(0x10 + r1); // lwz @ 0x805FB270
    return;
}