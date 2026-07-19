/* Function at 0x805F6050, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F6050(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805F6058
    /* lfs f0, 0(r6) */ // 0x805F6060
    *(0x2c + r1) = r31; // stw @ 0x805F6064
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F606C
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F6074
    r29 = r3;
    /* stfs f0, 8(r1) */ // 0x805F607C
    /* stfs f0, 0xc(r1) */ // 0x805F6080
    /* stfs f0, 0x10(r1) */ // 0x805F6084
    /* stfs f0, 0x28(r3) */ // 0x805F6088
    /* stfs f0, 0x2c(r3) */ // 0x805F608C
    /* stfs f0, 0x30(r3) */ // 0x805F6090
    /* li r3, 5 */ // 0x805F6094
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F609C
    *(0 + r29) = r30; // stw @ 0x805F60A0
    if (==) goto 0x0x805f60bc;
    r0 = *(0x34 + r29); // lhz @ 0x805F60AC
    *(4 + r29) = r31; // stw @ 0x805F60B0
    r0 = r0 | 1; // 0x805F60B4
    *(0x34 + r29) = r0; // sth @ 0x805F60B8
    r0 = *(0x34 + r1); // lwz @ 0x805F60BC
    r31 = *(0x2c + r1); // lwz @ 0x805F60C0
    r30 = *(0x28 + r1); // lwz @ 0x805F60C4
    r29 = *(0x24 + r1); // lwz @ 0x805F60C8
    return;
}