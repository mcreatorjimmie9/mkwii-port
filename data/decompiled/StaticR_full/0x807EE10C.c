/* Function at 0x807EE10C, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_807EE10C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x807EE124
    r28 = r3;
    r3 = *(0xb4 + r3); // lwz @ 0x807EE12C
    r12 = *(0 + r3); // lwz @ 0x807EE130
    r12 = *(0xc + r12); // lwz @ 0x807EE134
    /* mtctr r12 */ // 0x807EE138
    /* bctrl  */ // 0x807EE13C
    r3 = *(0xb4 + r28); // lwz @ 0x807EE140
    r4 = r28 + 0x30; // 0x807EE144
    r12 = *(0 + r3); // lwz @ 0x807EE148
    r12 = *(0x74 + r12); // lwz @ 0x807EE14C
    /* mtctr r12 */ // 0x807EE150
    /* bctrl  */ // 0x807EE154
    r3 = *(0xb4 + r28); // lwz @ 0x807EE158
    r12 = *(0 + r3); // lwz @ 0x807EE15C
    r12 = *(0x80 + r12); // lwz @ 0x807EE160
    /* mtctr r12 */ // 0x807EE164
    /* bctrl  */ // 0x807EE168
    /* lis r4, 0 */ // 0x807EE16C
    r3 = r28;
    /* lfs f1, 0(r4) */ // 0x807EE174
    /* li r4, 0x1d2 */ // 0x807EE178
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* li r28, 0 */ // 0x807EE180
    /* lis r29, 0 */ // 0x807EE184
    /* lis r30, 0 */ // 0x807EE188
    /* lis r31, 0 */ // 0x807EE18C
    /* b 0x807ee1cc */ // 0x807EE190
    r3 = *(0 + r29); // lwz @ 0x807EE194
    r4 = r28;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    r5 = *(0 + r30); // lwz @ 0x807EE1A4
    r0 = r3 rlwinm 2; // rlwinm
    /* lfs f1, 0(r31) */ // 0x807EE1AC
    /* li r4, 0x23 */ // 0x807EE1B0
    r3 = *(0xc + r5); // lwz @ 0x807EE1B4
    /* li r5, 1 */ // 0x807EE1B8
    /* lwzx r3, r3, r0 */ // 0x807EE1BC
    r3 = *(0x48 + r3); // lwz @ 0x807EE1C0
    FUN_805B1660(r4, r5); // bl 0x805B1660
    r28 = r28 + 1; // 0x807EE1C8
    r3 = *(0 + r29); // lwz @ 0x807EE1CC
    r0 = *(0x24 + r3); // lbz @ 0x807EE1D0
    if (<) goto 0x0x807ee194;
    r0 = *(0x24 + r1); // lwz @ 0x807EE1DC
    r31 = *(0x1c + r1); // lwz @ 0x807EE1E0
    r30 = *(0x18 + r1); // lwz @ 0x807EE1E4
    r29 = *(0x14 + r1); // lwz @ 0x807EE1E8
    r28 = *(0x10 + r1); // lwz @ 0x807EE1EC
    return;
}