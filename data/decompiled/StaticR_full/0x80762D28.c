/* Function at 0x80762D28, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80762D28(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x80762D30
    /* lfs f0, 0(r6) */ // 0x80762D38
    *(0x1c + r1) = r31; // stw @ 0x80762D3C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80762D44
    *(0x14 + r1) = r29; // stw @ 0x80762D48
    r29 = r4;
    r3 = r29;
    *(0x10 + r1) = r28; // stw @ 0x80762D54
    r28 = r5;
    /* stfs f0, 8(r7) */ // 0x80762D5C
    /* stfs f0, 4(r7) */ // 0x80762D60
    /* stfs f0, 0(r7) */ // 0x80762D64
    FUN_8061DEF4(); // bl 0x8061DEF4
    if (==) goto 0x0x80762d7c;
    r3 = r28;
    /* b 0x80762e6c */ // 0x80762D78
    r12 = *(0 + r31); // lwz @ 0x80762D7C
    r3 = r31;
    /* li r30, 0 */ // 0x80762D84
    r12 = *(0x30 + r12); // lwz @ 0x80762D88
    /* mtctr r12 */ // 0x80762D8C
    /* bctrl  */ // 0x80762D90
    /* lis r4, 0x101 */ // 0x80762D94
    r0 = *(0x20 + r3); // lwz @ 0x80762D98
    r3 = r4 + 0x101; // 0x80762D9C
    /* andc. r0, r3, r0 */ // 0x80762DA0
    if (!=) goto 0x0x80762dc0;
    /* lis r3, 0 */ // 0x80762DA8
    r3 = *(0 + r3); // lwz @ 0x80762DAC
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80762dc0;
    /* li r30, 1 */ // 0x80762DBC
    r3 = r29;
    FUN_8061E574(r3); // bl 0x8061E574
    /* lis r3, 0 */ // 0x80762DC8
    /* fabs f1, f1 */ // 0x80762DCC
    /* lfs f0, 0(r3) */ // 0x80762DD0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80762DD4
    /* mfcr r0 */ // 0x80762DD8
    r0 = r0 rlwinm 2; // rlwinm
    if (!=) goto 0x0x80762e68;
    if (==) goto 0x0x80762e68;
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r4 = *(0xb8 + r31); // lwz @ 0x80762DF8
    r29 = r3 rlwinm 2; // rlwinm
    r30 = r3;
    /* lwzx r3, r4, r29 */ // 0x80762E04
    r12 = *(0 + r3); // lwz @ 0x80762E08
    r12 = *(0xc + r12); // lwz @ 0x80762E0C
    /* mtctr r12 */ // 0x80762E10
    /* bctrl  */ // 0x80762E14
    /* lis r3, 0 */ // 0x80762E18
    /* clrlwi r4, r30, 0x18 */ // 0x80762E1C
    r3 = *(0 + r3); // lwz @ 0x80762E20
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    r5 = *(0xb8 + r31); // lwz @ 0x80762E2C
    r4 = r3;
    /* lwzx r3, r5, r29 */ // 0x80762E34
    r12 = *(0 + r3); // lwz @ 0x80762E38
    r12 = *(0x74 + r12); // lwz @ 0x80762E3C
    /* mtctr r12 */ // 0x80762E40
    /* bctrl  */ // 0x80762E44
    r3 = *(0xb8 + r31); // lwz @ 0x80762E48
    /* lwzx r3, r3, r29 */ // 0x80762E4C
}