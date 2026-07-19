/* Function at 0x8066EDE8, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8066EDE8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8066EDF8
    r31 = r31 + 0; // 0x8066EDFC
    *(0x18 + r1) = r30; // stw @ 0x8066EE00
    /* li r30, 0 */ // 0x8066EE04
    *(0x14 + r1) = r29; // stw @ 0x8066EE08
    /* li r29, 0 */ // 0x8066EE0C
    *(0x10 + r1) = r28; // stw @ 0x8066EE10
    r28 = r3;
    *(0 + r3) = r4; // stw @ 0x8066EE18
    /* lis r4, 0 */ // 0x8066EE1C
    r3 = *(0 + r4); // lwz @ 0x8066EE20
    r3 = *(0 + r3); // lwz @ 0x8066EE24
    r3 = *(0 + r3); // lwz @ 0x8066EE28
    FUN_80694774(r4); // bl 0x80694774
    if (==) goto 0x0x8066ee50;
    /* lis r3, 0 */ // 0x8066EE38
    r3 = *(0 + r3); // lwz @ 0x8066EE3C
    r0 = *(0x58 + r3); // lwz @ 0x8066EE40
    if (!=) goto 0x0x8066ee50;
    /* li r29, 1 */ // 0x8066EE4C
    if (==) goto 0x0x8066ee70;
    r3 = *(0 + r28); // lwz @ 0x8066EE58
    /* li r4, 0x53 */ // 0x8066EE5C
    FUN_80665420(r4); // bl 0x80665420
    if (==) goto 0x0x8066ee70;
    /* li r30, 1 */ // 0x8066EE6C
    *(0x14 + r28) = r30; // stb @ 0x8066EE74
    if (==) goto 0x0x8066eed4;
    /* lis r3, 0 */ // 0x8066EE7C
    /* lfs f2, 4(r31) */ // 0x8066EE80
    /* lfs f1, 0(r3) */ // 0x8066EE84
    /* lfs f0, 8(r31) */ // 0x8066EE88
    /* fsubs f1, f2, f1 */ // 0x8066EE8C
    /* fmuls f3, f0, f1 */ // 0x8066EE90
    /* fsubs f1, f2, f3 */ // 0x8066EE94
    /* .byte 0xfc, 0x03, 0x08, 0x40 */ // 0x8066EE98
    if (>=) goto 0x0x8066eea4;
    /* fmr f1, f3 */ // 0x8066EEA0
    /* lfs f0, 4(r31) */ // 0x8066EEA4
    /* stfs f1, 4(r28) */ // 0x8066EEA8
    /* fsubs f0, f0, f3 */ // 0x8066EEAC
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8066EEB0
    if (<=) goto 0x0x8066eebc;
    /* b 0x8066eec0 */ // 0x8066EEB8
    /* fmr f3, f0 */ // 0x8066EEBC
    /* lfs f0, 0(r31) */ // 0x8066EEC0
    /* lfs f1, 4(r31) */ // 0x8066EEC4
    /* stfs f3, 0xc(r28) */ // 0x8066EEC8
    /* stfs f0, 8(r28) */ // 0x8066EECC
    /* stfs f1, 0x10(r28) */ // 0x8066EED0
    r0 = *(0x24 + r1); // lwz @ 0x8066EED4
    r31 = *(0x1c + r1); // lwz @ 0x8066EED8
    r30 = *(0x18 + r1); // lwz @ 0x8066EEDC
    r29 = *(0x14 + r1); // lwz @ 0x8066EEE0
    r28 = *(0x10 + r1); // lwz @ 0x8066EEE4
    return;
}