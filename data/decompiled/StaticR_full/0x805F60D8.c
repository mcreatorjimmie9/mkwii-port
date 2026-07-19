/* Function at 0x805F60D8, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F60D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F60EC
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F60F4
    r29 = r3;
    r7 = *(0x28 + r3); // lwz @ 0x805F60FC
    r6 = *(0x2c + r3); // lwz @ 0x805F6100
    r0 = *(0x30 + r3); // lwz @ 0x805F6104
    *(0x14 + r1) = r7; // stw @ 0x805F6108
    /* lfs f0, 0x14(r1) */ // 0x805F610C
    *(0x18 + r1) = r6; // stw @ 0x805F6110
    /* lfs f1, 0x18(r1) */ // 0x805F6114
    *(0x1c + r1) = r0; // stw @ 0x805F6118
    /* lfs f2, 0x1c(r1) */ // 0x805F611C
    /* stfs f0, 8(r1) */ // 0x805F6120
    /* stfs f1, 0xc(r1) */ // 0x805F6124
    /* stfs f2, 0x10(r1) */ // 0x805F6128
    /* stfs f0, 0x28(r3) */ // 0x805F612C
    /* stfs f1, 0x2c(r3) */ // 0x805F6130
    /* stfs f2, 0x30(r3) */ // 0x805F6134
    /* li r3, 3 */ // 0x805F6138
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F6140
    *(0 + r29) = r30; // stw @ 0x805F6144
    if (==) goto 0x0x805f6160;
    r0 = *(0x34 + r29); // lhz @ 0x805F6150
    *(4 + r29) = r31; // stw @ 0x805F6154
    r0 = r0 | 1; // 0x805F6158
    *(0x34 + r29) = r0; // sth @ 0x805F615C
    r0 = *(0x34 + r1); // lwz @ 0x805F6160
    r31 = *(0x2c + r1); // lwz @ 0x805F6164
    r30 = *(0x28 + r1); // lwz @ 0x805F6168
    r29 = *(0x24 + r1); // lwz @ 0x805F616C
    return;
}