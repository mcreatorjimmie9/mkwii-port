/* Function at 0x805F5D40, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5D40(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F5D54
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F5D5C
    r29 = r3;
    /* li r3, 3 */ // 0x805F5D64
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F5D6C
    /* lis r3, 0 */ // 0x805F5D70
    /* lfs f0, 0(r3) */ // 0x805F5D74
    *(0 + r29) = r30; // stw @ 0x805F5D7C
    /* stfs f0, 8(r1) */ // 0x805F5D80
    /* stfs f0, 0xc(r1) */ // 0x805F5D84
    /* stfs f0, 0x10(r1) */ // 0x805F5D88
    /* stfs f0, 0x28(r29) */ // 0x805F5D8C
    /* stfs f0, 0x2c(r29) */ // 0x805F5D90
    /* stfs f0, 0x30(r29) */ // 0x805F5D94
    if (==) goto 0x0x805f5dac;
    r0 = *(0x34 + r29); // lhz @ 0x805F5D9C
    *(4 + r29) = r31; // stw @ 0x805F5DA0
    r0 = r0 | 1; // 0x805F5DA4
    *(0x34 + r29) = r0; // sth @ 0x805F5DA8
    r12 = *(0x38 + r29); // lwz @ 0x805F5DAC
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x805F5DB4
    /* mtctr r12 */ // 0x805F5DB8
    /* bctrl  */ // 0x805F5DBC
    r3 = *(0x6c + r29); // lwz @ 0x805F5DC0
    r12 = *(0 + r3); // lwz @ 0x805F5DC4
    r12 = *(0x18 + r12); // lwz @ 0x805F5DC8
    /* mtctr r12 */ // 0x805F5DCC
    /* bctrl  */ // 0x805F5DD0
    r0 = *(0x34 + r1); // lwz @ 0x805F5DD4
    r31 = *(0x2c + r1); // lwz @ 0x805F5DD8
    r30 = *(0x28 + r1); // lwz @ 0x805F5DDC
    r29 = *(0x24 + r1); // lwz @ 0x805F5DE0
    return;
}