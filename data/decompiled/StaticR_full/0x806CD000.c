/* Function at 0x806CD000, size=352 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806CD000(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806CD008
    /* lis r4, 0 */ // 0x806CD00C
    *(0x14 + r1) = r0; // stw @ 0x806CD010
    r7 = r3 + 0xc; // 0x806CD014
    r0 = r3 + 0x1950; // 0x806CD018
    /* lfs f1, 0(r5) */ // 0x806CD01C
    *(0xc + r1) = r31; // stw @ 0x806CD020
    /* lfs f0, 0(r4) */ // 0x806CD028
    r31 = r3;
    /* stfs f1, 0(r3) */ // 0x806CD030
    /* stfs f1, 4(r3) */ // 0x806CD034
    /* stfs f0, 8(r3) */ // 0x806CD038
    if (>=) goto 0x0x806cd140;
    r8 = r3 + 0x18f0; // 0x806CD040
    /* li r0, 0 */ // 0x806CD044
    /* li r4, 0 */ // 0x806CD048
    if (>) goto 0x0x806cd054;
    /* li r4, 1 */ // 0x806CD050
    if (==) goto 0x0x806cd060;
    /* li r0, 1 */ // 0x806CD05C
    if (==) goto 0x0x806cd0fc;
    r4 = r8 + 0x5f; // 0x806CD068
    /* lis r6, 0 */ // 0x806CD06C
    /* subf r4, r7, r4 */ // 0x806CD070
    /* li r0, 0x60 */ // 0x806CD074
    r4 = r4 u/ r0; // 0x806CD078
    /* lis r5, 0 */ // 0x806CD07C
    /* lfs f1, 0(r6) */ // 0x806CD080
    /* lfs f0, 0(r5) */ // 0x806CD084
    /* mtctr r4 */ // 0x806CD088
    if (>=) goto 0x0x806cd0fc;
    /* stfs f1, 0(r7) */ // 0x806CD094
    /* stfs f1, 4(r7) */ // 0x806CD098
    /* stfs f0, 8(r7) */ // 0x806CD09C
    /* stfs f1, 0xc(r7) */ // 0x806CD0A0
    /* stfs f1, 0x10(r7) */ // 0x806CD0A4
    /* stfs f0, 0x14(r7) */ // 0x806CD0A8
    /* stfs f1, 0x18(r7) */ // 0x806CD0AC
    /* stfs f1, 0x1c(r7) */ // 0x806CD0B0
    /* stfs f0, 0x20(r7) */ // 0x806CD0B4
    /* stfs f1, 0x24(r7) */ // 0x806CD0B8
    /* stfs f1, 0x28(r7) */ // 0x806CD0BC
    /* stfs f0, 0x2c(r7) */ // 0x806CD0C0
    /* stfs f1, 0x30(r7) */ // 0x806CD0C4
    /* stfs f1, 0x34(r7) */ // 0x806CD0C8
    /* stfs f0, 0x38(r7) */ // 0x806CD0CC
    /* stfs f1, 0x3c(r7) */ // 0x806CD0D0
    /* stfs f1, 0x40(r7) */ // 0x806CD0D4
    /* stfs f0, 0x44(r7) */ // 0x806CD0D8
    /* stfs f1, 0x48(r7) */ // 0x806CD0DC
    /* stfs f1, 0x4c(r7) */ // 0x806CD0E0
    /* stfs f0, 0x50(r7) */ // 0x806CD0E4
    /* stfs f1, 0x54(r7) */ // 0x806CD0E8
    /* stfs f1, 0x58(r7) */ // 0x806CD0EC
    /* stfs f0, 0x5c(r7) */ // 0x806CD0F0
    r7 = r7 + 0x60; // 0x806CD0F4
    if (counter-- != 0) goto 0x0x806cd094;
    r4 = r3 + 0x1950; // 0x806CD0FC
    /* lis r6, 0 */ // 0x806CD100
    r3 = r4 + 0xb; // 0x806CD104
    /* lis r5, 0 */ // 0x806CD108
    /* subf r3, r7, r3 */ // 0x806CD10C
    /* li r0, 0xc */ // 0x806CD110
    r3 = r3 u/ r0; // 0x806CD114
    /* lfs f1, 0(r6) */ // 0x806CD118
    /* lfs f0, 0(r5) */ // 0x806CD11C
    /* mtctr r3 */ // 0x806CD120
    if (>=) goto 0x0x806cd140;
    /* stfs f1, 0(r7) */ // 0x806CD12C
    /* stfs f1, 4(r7) */ // 0x806CD130
    /* stfs f0, 8(r7) */ // 0x806CD134
    r7 = r7 + 0xc; // 0x806CD138
    if (counter-- != 0) goto 0x0x806cd12c;
    r3 = r31;
    FUN_806CD1B8(r7, r3); // bl 0x806CD1B8
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806CD14C
    r0 = *(0x14 + r1); // lwz @ 0x806CD150
    return;
}