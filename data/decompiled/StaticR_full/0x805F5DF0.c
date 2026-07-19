/* Function at 0x805F5DF0, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5DF0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F5E04
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F5E0C
    r29 = r3;
    /* li r3, 5 */ // 0x805F5E14
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F5E1C
    /* lis r3, 0 */ // 0x805F5E20
    /* lfs f0, 0(r3) */ // 0x805F5E24
    *(0 + r29) = r30; // stw @ 0x805F5E2C
    /* stfs f0, 8(r1) */ // 0x805F5E30
    /* stfs f0, 0xc(r1) */ // 0x805F5E34
    /* stfs f0, 0x10(r1) */ // 0x805F5E38
    /* stfs f0, 0x28(r29) */ // 0x805F5E3C
    /* stfs f0, 0x2c(r29) */ // 0x805F5E40
    /* stfs f0, 0x30(r29) */ // 0x805F5E44
    if (==) goto 0x0x805f5e5c;
    r0 = *(0x34 + r29); // lhz @ 0x805F5E4C
    *(4 + r29) = r31; // stw @ 0x805F5E50
    r0 = r0 | 1; // 0x805F5E54
    *(0x34 + r29) = r0; // sth @ 0x805F5E58
    r12 = *(0x38 + r29); // lwz @ 0x805F5E5C
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x805F5E64
    /* mtctr r12 */ // 0x805F5E68
    /* bctrl  */ // 0x805F5E6C
    r3 = *(0x6c + r29); // lwz @ 0x805F5E70
    r12 = *(0 + r3); // lwz @ 0x805F5E74
    r12 = *(0x18 + r12); // lwz @ 0x805F5E78
    /* mtctr r12 */ // 0x805F5E7C
    /* bctrl  */ // 0x805F5E80
    r0 = *(0x34 + r1); // lwz @ 0x805F5E84
    r31 = *(0x2c + r1); // lwz @ 0x805F5E88
    r30 = *(0x28 + r1); // lwz @ 0x805F5E8C
    r29 = *(0x24 + r1); // lwz @ 0x805F5E90
    return;
}