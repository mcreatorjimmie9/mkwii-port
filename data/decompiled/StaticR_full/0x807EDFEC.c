/* Function at 0x807EDFEC, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_807EDFEC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x807EDFF4
    *(0x14 + r1) = r29; // stw @ 0x807EE004
    *(0x10 + r1) = r28; // stw @ 0x807EE008
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x807EE010
    r0 = *(0xb74 + r4); // lwz @ 0x807EE014
    if (!=) goto 0x0x807ee0ec;
    r0 = *(0xb70 + r4); // lwz @ 0x807EE020
    if (!=) goto 0x0x807ee0ec;
    r0 = *(0xb0 + r3); // lwz @ 0x807EE02C
    /* addic. r0, r0, -1 */ // 0x807EE030
    *(0xb0 + r3) = r0; // stw @ 0x807EE034
    if (!=) goto 0x0x807ee0ec;
    r3 = *(0xb4 + r3); // lwz @ 0x807EE03C
    r12 = *(0 + r3); // lwz @ 0x807EE040
    r12 = *(0xc + r12); // lwz @ 0x807EE044
    /* mtctr r12 */ // 0x807EE048
    /* bctrl  */ // 0x807EE04C
    r3 = *(0xb4 + r28); // lwz @ 0x807EE050
    r4 = r28 + 0x30; // 0x807EE054
    r12 = *(0 + r3); // lwz @ 0x807EE058
    r12 = *(0x74 + r12); // lwz @ 0x807EE05C
    /* mtctr r12 */ // 0x807EE060
    /* bctrl  */ // 0x807EE064
    r3 = *(0xb4 + r28); // lwz @ 0x807EE068
    r12 = *(0 + r3); // lwz @ 0x807EE06C
    r12 = *(0x80 + r12); // lwz @ 0x807EE070
    /* mtctr r12 */ // 0x807EE074
    /* bctrl  */ // 0x807EE078
    /* lis r4, 0 */ // 0x807EE07C
    r3 = r28;
    /* lfs f1, 0(r4) */ // 0x807EE084
    /* li r4, 0x1d2 */ // 0x807EE088
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* li r28, 0 */ // 0x807EE090
    /* lis r29, 0 */ // 0x807EE094
    /* lis r30, 0 */ // 0x807EE098
    /* lis r31, 0 */ // 0x807EE09C
    /* b 0x807ee0dc */ // 0x807EE0A0
    r3 = *(0 + r29); // lwz @ 0x807EE0A4
    r4 = r28;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    r5 = *(0 + r30); // lwz @ 0x807EE0B4
    r0 = r3 rlwinm 2; // rlwinm
    /* lfs f1, 0(r31) */ // 0x807EE0BC
    /* li r4, 0x23 */ // 0x807EE0C0
    r3 = *(0xc + r5); // lwz @ 0x807EE0C4
    /* li r5, 1 */ // 0x807EE0C8
    /* lwzx r3, r3, r0 */ // 0x807EE0CC
    r3 = *(0x48 + r3); // lwz @ 0x807EE0D0
    FUN_805B1660(r4, r5); // bl 0x805B1660
    r28 = r28 + 1; // 0x807EE0D8
    r3 = *(0 + r29); // lwz @ 0x807EE0DC
    r0 = *(0x24 + r3); // lbz @ 0x807EE0E0
    if (<) goto 0x0x807ee0a4;
    r0 = *(0x24 + r1); // lwz @ 0x807EE0EC
    r31 = *(0x1c + r1); // lwz @ 0x807EE0F0
    r30 = *(0x18 + r1); // lwz @ 0x807EE0F4
    r29 = *(0x14 + r1); // lwz @ 0x807EE0F8
    r28 = *(0x10 + r1); // lwz @ 0x807EE0FC
    return;
}