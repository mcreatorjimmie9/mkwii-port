/* Function at 0x806CC008, size=304 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806CC008(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806CC010
    *(0x38 + r1) = r30; // stw @ 0x806CC01C
    *(0x34 + r1) = r29; // stw @ 0x806CC020
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806CC028
    r3 = *(0 + r3); // lwz @ 0x806CC02C
    r30 = *(0x204 + r3); // lwz @ 0x806CC030
    if (!=) goto 0x0x806cc044;
    /* li r30, 0 */ // 0x806CC03C
    /* b 0x806cc098 */ // 0x806CC040
    /* lis r31, 0 */ // 0x806CC044
    r31 = r31 + 0; // 0x806CC048
    if (==) goto 0x0x806cc094;
    r12 = *(0 + r30); // lwz @ 0x806CC050
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CC058
    /* mtctr r12 */ // 0x806CC05C
    /* bctrl  */ // 0x806CC060
    /* b 0x806cc07c */ // 0x806CC064
    if (!=) goto 0x0x806cc078;
    /* li r0, 1 */ // 0x806CC070
    /* b 0x806cc088 */ // 0x806CC074
    r3 = *(0 + r3); // lwz @ 0x806CC078
    if (!=) goto 0x0x806cc068;
    /* li r0, 0 */ // 0x806CC084
    if (==) goto 0x0x806cc094;
    /* b 0x806cc098 */ // 0x806CC090
    /* li r30, 0 */ // 0x806CC094
    if (==) goto 0x0x806cc11c;
    r0 = *(0x174 + r29); // lbz @ 0x806CC0A0
    r3 = r30 + 0x94; // 0x806CC0A4
    r5 = *(0x178 + r29); // lwz @ 0x806CC0A8
    /* li r6, 2 */ // 0x806CC0AC
    /* mulli r0, r0, 0xc */ // 0x806CC0B0
    r4 = r30 + r0; // 0x806CC0B4
    r4 = *(0x54 + r4); // lwz @ 0x806CC0B8
    FUN_806CD160(r6); // bl 0x806CD160
    /* lis r4, 0 */ // 0x806CC0C0
    r31 = r3;
    r4 = r4 + 0; // 0x806CC0C8
    r3 = r29 + 0xa8; // 0x806CC0CC
    r4 = r4 + 0xe3; // 0x806CC0D0
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    /* lfs f2, 4(r31) */ // 0x806CC0D8
    /* lis r4, 0 */ // 0x806CC0DC
    /* lfs f1, 0(r31) */ // 0x806CC0E0
    /* stfs f1, 0x2c(r3) */ // 0x806CC0E4
    /* lfs f0, 0(r4) */ // 0x806CC0E8
    /* stfs f2, 0x30(r3) */ // 0x806CC0EC
    /* stfs f0, 0x34(r3) */ // 0x806CC0F0
    /* lfs f3, 8(r31) */ // 0x806CC0F4
    /* stfs f3, 0x44(r3) */ // 0x806CC0F8
    /* stfs f1, 0x10(r1) */ // 0x806CC0FC
    /* stfs f2, 0x14(r1) */ // 0x806CC100
    /* stfs f1, 0x18(r1) */ // 0x806CC104
    /* stfs f2, 0x1c(r1) */ // 0x806CC108
    /* stfs f0, 0x20(r1) */ // 0x806CC10C
    /* stfs f3, 8(r1) */ // 0x806CC110
    /* stfs f3, 0xc(r1) */ // 0x806CC114
    /* stfs f3, 0x48(r3) */ // 0x806CC118
    r0 = *(0x44 + r1); // lwz @ 0x806CC11C
    r31 = *(0x3c + r1); // lwz @ 0x806CC120
    r30 = *(0x38 + r1); // lwz @ 0x806CC124
    r29 = *(0x34 + r1); // lwz @ 0x806CC128
    return;
}