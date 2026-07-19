/* Function at 0x8080B21C, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8080B21C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8080B234
    r29 = r3;
    r3 = r30;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (==) goto 0x0x8080b260;
    /* lis r3, 0 */ // 0x8080B24C
    r3 = *(0 + r3); // lwz @ 0x8080B250
    FUN_805C1588(r3); // bl 0x805C1588
    if (==) goto 0x0x8080b334;
    r3 = r30;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8080B268
    /* lfs f0, 0(r3) */ // 0x8080B26C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8080B270
    if (<=) goto 0x0x8080b2c4;
    /* lis r3, 0 */ // 0x8080B278
    r3 = *(0 + r3); // lwz @ 0x8080B27C
    r0 = *(0x55 + r3); // lbz @ 0x8080B280
    if (!=) goto 0x0x8080b2c4;
    r3 = r30;
    FUN_8061E584(r3); // bl 0x8061E584
    r31 = r3;
    r3 = r30;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    r12 = *(0 + r29); // lwz @ 0x8080B2A0
    r0 = r3;
    r3 = r29;
    r5 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x8080B2B0
    /* clrlwi r4, r0, 0x18 */ // 0x8080B2B4
    /* mtctr r12 */ // 0x8080B2B8
    /* bctrl  */ // 0x8080B2BC
    /* b 0x8080b2f8 */ // 0x8080B2C0
    r12 = *(0 + r29); // lwz @ 0x8080B2C4
    r3 = r29;
    /* li r4, 0 */ // 0x8080B2CC
    r12 = *(0x68 + r12); // lwz @ 0x8080B2D0
    /* mtctr r12 */ // 0x8080B2D4
    /* bctrl  */ // 0x8080B2D8
    /* li r0, 2 */ // 0x8080B2DC
    *(0xb0 + r29) = r0; // stw @ 0x8080B2E0
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8080B2E8
    r12 = *(0x90 + r12); // lwz @ 0x8080B2EC
    /* mtctr r12 */ // 0x8080B2F0
    /* bctrl  */ // 0x8080B2F4
    r3 = r30;
    FUN_8061E63C(r3); // bl 0x8061E63C
    r12 = *(0 + r29); // lwz @ 0x8080B300
    r3 = r29;
    r12 = *(0x118 + r12); // lwz @ 0x8080B308
    /* mtctr r12 */ // 0x8080B30C
    /* bctrl  */ // 0x8080B310
    r12 = *(0 + r29); // lwz @ 0x8080B314
    r3 = r29;
    r12 = *(0x11c + r12); // lwz @ 0x8080B31C
    /* mtctr r12 */ // 0x8080B320
    /* bctrl  */ // 0x8080B324
    /* lis r3, 0 */ // 0x8080B328
    r0 = *(0 + r3); // lwz @ 0x8080B32C
    *(0xb4 + r29) = r0; // stw @ 0x8080B330
    r0 = *(0x24 + r1); // lwz @ 0x8080B334
    r31 = *(0x1c + r1); // lwz @ 0x8080B338
    r30 = *(0x18 + r1); // lwz @ 0x8080B33C
    r29 = *(0x14 + r1); // lwz @ 0x8080B340
    return;
}