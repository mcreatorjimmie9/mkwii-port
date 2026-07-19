/* Function at 0x808EA148, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808EA148(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808EA15C
    r29 = r3;
    FUN_808B3EEC(); // bl 0x808B3EEC
    /* lis r3, 0 */ // 0x808EA168
    r3 = *(0 + r3); // lwz @ 0x808EA16C
    r0 = *(0xc + r3); // lwz @ 0x808EA170
    if (!=) goto 0x0x808ea1ec;
    /* li r6, 0 */ // 0x808EA17C
    /* li r5, 0 */ // 0x808EA180
    /* li r4, 0 */ // 0x808EA184
    /* b 0x808ea1a0 */ // 0x808EA188
    r3 = *(0x48 + r29); // lwz @ 0x808EA18C
    r6 = r6 + 1; // 0x808EA190
    /* lwzx r3, r3, r5 */ // 0x808EA194
    r5 = r5 + 4; // 0x808EA198
    *(0x80 + r3) = r4; // stb @ 0x808EA19C
    r0 = *(0x4c + r29); // lwz @ 0x808EA1A0
    if (<) goto 0x0x808ea18c;
    FUN_808CFA50(r5); // bl 0x808CFA50
    /* clrlwi r31, r3, 0x18 */ // 0x808EA1B0
    /* li r30, 0 */ // 0x808EA1B4
    /* b 0x808ea1e0 */ // 0x808EA1B8
    r12 = *(0 + r29); // lwz @ 0x808EA1BC
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x808EA1C4
    /* mtctr r12 */ // 0x808EA1C8
    /* bctrl  */ // 0x808EA1CC
    /* clrlwi r4, r30, 0x18 */ // 0x808EA1D0
    /* li r5, 1 */ // 0x808EA1D4
    FUN_8066B6CC(r5); // bl 0x8066B6CC
    r30 = r30 + 1; // 0x808EA1DC
    /* clrlwi r0, r30, 0x18 */ // 0x808EA1E0
    if (<) goto 0x0x808ea1bc;
    r0 = *(0x24 + r1); // lwz @ 0x808EA1EC
    r31 = *(0x1c + r1); // lwz @ 0x808EA1F0
    r30 = *(0x18 + r1); // lwz @ 0x808EA1F4
    r29 = *(0x14 + r1); // lwz @ 0x808EA1F8
    return;
}