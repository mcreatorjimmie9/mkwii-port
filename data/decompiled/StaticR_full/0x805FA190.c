/* Function at 0x805FA190, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805FA190(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x805FA1A8
    r28 = r3;
    FUN_8061E2BC(); // bl 0x8061E2BC
    r31 = r3;
    /* li r30, 0 */ // 0x805FA1B8
    r29 = r31;
    /* b 0x805fa1e4 */ // 0x805FA1C0
    r12 = *(0xc + r28); // lwz @ 0x805FA1C4
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FA1CC
    r12 = *(8 + r12); // lwz @ 0x805FA1D0
    /* mtctr r12 */ // 0x805FA1D4
    /* bctrl  */ // 0x805FA1D8
    r29 = r29 + 4; // 0x805FA1DC
    r30 = r30 + 1; // 0x805FA1E0
    r0 = *(0xf0 + r31); // lwz @ 0x805FA1E4
    if (<) goto 0x0x805fa1c4;
    r3 = r28;
    FUN_8061DF18(r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x805FA1F8
    r12 = *(0x2c + r12); // lwz @ 0x805FA1FC
    /* mtctr r12 */ // 0x805FA200
    /* bctrl  */ // 0x805FA204
    /* li r29, 0 */ // 0x805FA208
    /* b 0x805fa230 */ // 0x805FA20C
    r3 = r28;
    r4 = r29;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x805FA21C
    r12 = *(0x2c + r12); // lwz @ 0x805FA220
    /* mtctr r12 */ // 0x805FA224
    /* bctrl  */ // 0x805FA228
    r29 = r29 + 1; // 0x805FA22C
    r3 = r28;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x805FA238
    if (<) goto 0x0x805fa210;
    /* li r29, 0 */ // 0x805FA244
    /* b 0x805fa26c */ // 0x805FA248
    r3 = r28;
    r4 = r29;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r12 = *(0xc + r3); // lwz @ 0x805FA258
    r12 = *(0x2c + r12); // lwz @ 0x805FA25C
    /* mtctr r12 */ // 0x805FA260
    /* bctrl  */ // 0x805FA264
    r29 = r29 + 1; // 0x805FA268
    r3 = r28;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x805FA274
    if (<) goto 0x0x805fa24c;
    r0 = *(0x24 + r1); // lwz @ 0x805FA280
    r31 = *(0x1c + r1); // lwz @ 0x805FA284
    r30 = *(0x18 + r1); // lwz @ 0x805FA288
    r29 = *(0x14 + r1); // lwz @ 0x805FA28C
    r28 = *(0x10 + r1); // lwz @ 0x805FA290
    return;
}