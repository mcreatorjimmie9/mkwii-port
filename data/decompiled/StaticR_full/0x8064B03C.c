/* Function at 0x8064B03C, size=148 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8064B03C(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, -1 */ // 0x8064B04C
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x8064B058
    *(0x40 + r1) = r28; // stw @ 0x8064B05C
    r4 = *(0x260 + r3); // lwz @ 0x8064B060
    if (>) goto 0x0x8064b1c8;
    /* lis r3, 0 */ // 0x8064B06C
    /* slwi r0, r4, 2 */ // 0x8064B070
    r3 = r3 + 0; // 0x8064B074
    /* lwzx r3, r3, r0 */ // 0x8064B078
    /* mtctr r3 */ // 0x8064B07C
    /* bctr  */ // 0x8064B080
    /* li r31, 0x8b */ // 0x8064B084
    /* b 0x8064b1c8 */ // 0x8064B088
    /* li r31, 0x82 */ // 0x8064B08C
    /* b 0x8064b1c8 */ // 0x8064B090
    /* li r31, 0x7d */ // 0x8064B098
    if (==) goto 0x0x8064b0b4;
    if (==) goto 0x0x8064b114;
    if (==) goto 0x0x8064b13c;
    /* b 0x8064b1c8 */ // 0x8064B0B0
    /* lis r3, 0 */ // 0x8064B0B4
    r3 = *(0 + r3); // lwz @ 0x8064B0B8
    FUN_806F946C(r3); // bl 0x806F946C
    r29 = r3;
    FUN_805E34E4(r3, r3); // bl 0x805E34E4
    r4 = *(0 + r29); // lwz @ 0x8064B0CC
}