/* Function at 0x805F7D84, size=308 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_805F7D84(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F7D94
    r31 = r31 + 0; // 0x805F7D98
    *(0x28 + r1) = r30; // stw @ 0x805F7D9C
    /* li r30, 3 */ // 0x805F7DA0
    *(0x24 + r1) = r29; // stw @ 0x805F7DA4
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x805F7DAC
    r28 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    r0 = *(0x152 + r3); // lha @ 0x805F7DB8
    if (<=) goto 0x0x805f7df4;
    r0 = *(0xcc + r28); // lhz @ 0x805F7DC4
    /* li r30, 1 */ // 0x805F7DC8
    r3 = *(0 + r28); // lwz @ 0x805F7DCC
    r0 = r0 | 2; // 0x805F7DD0
    *(0xcc + r28) = r0; // sth @ 0x805F7DD4
    r3 = *(4 + r3); // lwz @ 0x805F7DD8
    r0 = *(0x14 + r3); // lwz @ 0x805F7DDC
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805F7DE0
    if (==) goto 0x0x805f7df4;
    r3 = r28;
    /* li r4, 0 */ // 0x805F7DEC
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r3 = r28;
    r4 = r30;
    r5 = r29;
    FUN_805F7A5C(r4, r3, r4, r5); // bl 0x805F7A5C
    /* lfs f1, 0(r31) */ // 0x805F7E04
    r3 = r28;
    /* lfs f0, 0x84(r31) */ // 0x805F7E0C
    /* stfs f1, 8(r1) */ // 0x805F7E10
    /* stfs f0, 0xc(r1) */ // 0x805F7E14
    /* stfs f1, 0x10(r1) */ // 0x805F7E18
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f1, 0x74(r3) */ // 0x805F7E20
    /* li r4, 0xa */ // 0x805F7E24
    /* lfs f0, 8(r1) */ // 0x805F7E28
    /* li r5, 1 */ // 0x805F7E2C
    /* lfs f2, 0xc(r1) */ // 0x805F7E30
    /* fadds f3, f1, f0 */ // 0x805F7E34
    /* lfs f0, 0x10(r1) */ // 0x805F7E38
    /* lfs f1, 4(r31) */ // 0x805F7E3C
    /* stfs f3, 0x74(r3) */ // 0x805F7E40
    /* lfs f3, 0x78(r3) */ // 0x805F7E44
    /* fadds f2, f3, f2 */ // 0x805F7E48
    /* stfs f2, 0x78(r3) */ // 0x805F7E4C
    /* lfs f2, 0x7c(r3) */ // 0x805F7E50
    /* fadds f0, f2, f0 */ // 0x805F7E54
    /* stfs f0, 0x7c(r3) */ // 0x805F7E58
    r3 = r28;
    FUN_8061DC98(r3); // bl 0x8061DC98
    r3 = r28;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F7E6C
    /* clrlwi r0, r3, 0x18 */ // 0x805F7E70
    r3 = *(0 + r4); // lwz @ 0x805F7E74
    /* mulli r0, r0, 0x248 */ // 0x805F7E78
    r4 = r29;
    r3 = *(0x14 + r3); // lwz @ 0x805F7E80
    r3 = r3 + r0; // 0x805F7E84
    FUN_80823AC4(r4); // bl 0x80823AC4
    r3 = r28;
    /* li r4, 2 */ // 0x805F7E90
    FUN_8061E818(r3, r4); // bl 0x8061E818
    r0 = *(0x34 + r1); // lwz @ 0x805F7E98
    r31 = *(0x2c + r1); // lwz @ 0x805F7E9C
    r30 = *(0x28 + r1); // lwz @ 0x805F7EA0
    r29 = *(0x24 + r1); // lwz @ 0x805F7EA4
    r28 = *(0x20 + r1); // lwz @ 0x805F7EA8
    return;
}