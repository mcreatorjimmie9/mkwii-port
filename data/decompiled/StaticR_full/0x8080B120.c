/* Function at 0x8080B120, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8080B120(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8080B138
    r29 = r3;
    r3 = r30;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8080B148
    /* lfs f0, 0(r3) */ // 0x8080B14C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8080B150
    if (<=) goto 0x0x8080b190;
    r3 = r30;
    FUN_8061E584(r3, r3); // bl 0x8061E584
    r31 = r3;
    r3 = r30;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    r12 = *(0 + r29); // lwz @ 0x8080B16C
    r0 = r3;
    r3 = r29;
    r5 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x8080B17C
    /* clrlwi r4, r0, 0x18 */ // 0x8080B180
    /* mtctr r12 */ // 0x8080B184
    /* bctrl  */ // 0x8080B188
    /* b 0x8080b1c4 */ // 0x8080B18C
    r12 = *(0 + r29); // lwz @ 0x8080B190
    r3 = r29;
    /* li r4, 0 */ // 0x8080B198
    r12 = *(0x68 + r12); // lwz @ 0x8080B19C
    /* mtctr r12 */ // 0x8080B1A0
    /* bctrl  */ // 0x8080B1A4
    /* li r0, 2 */ // 0x8080B1A8
    *(0xb0 + r29) = r0; // stw @ 0x8080B1AC
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8080B1B4
    r12 = *(0x90 + r12); // lwz @ 0x8080B1B8
    /* mtctr r12 */ // 0x8080B1BC
    /* bctrl  */ // 0x8080B1C0
    r3 = r30;
    FUN_8061E63C(r3); // bl 0x8061E63C
    r12 = *(0 + r29); // lwz @ 0x8080B1CC
    r3 = r29;
    r12 = *(0x118 + r12); // lwz @ 0x8080B1D4
    /* mtctr r12 */ // 0x8080B1D8
    /* bctrl  */ // 0x8080B1DC
    r12 = *(0 + r29); // lwz @ 0x8080B1E0
    r3 = r29;
    r12 = *(0x11c + r12); // lwz @ 0x8080B1E8
    /* mtctr r12 */ // 0x8080B1EC
    /* bctrl  */ // 0x8080B1F0
    /* lis r3, 0 */ // 0x8080B1F4
    r0 = *(0 + r3); // lwz @ 0x8080B1F8
    *(0xb4 + r29) = r0; // stw @ 0x8080B1FC
    r31 = *(0x1c + r1); // lwz @ 0x8080B200
    r30 = *(0x18 + r1); // lwz @ 0x8080B204
    r29 = *(0x14 + r1); // lwz @ 0x8080B208
    r0 = *(0x24 + r1); // lwz @ 0x8080B20C
    return;
}