/* Function at 0x805F5C90, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5C90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F5CA4
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F5CAC
    r29 = r3;
    r3 = r6;
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F5CBC
    /* lis r3, 0 */ // 0x805F5CC0
    /* lfs f0, 0(r3) */ // 0x805F5CC4
    *(0 + r29) = r30; // stw @ 0x805F5CCC
    /* stfs f0, 8(r1) */ // 0x805F5CD0
    /* stfs f0, 0xc(r1) */ // 0x805F5CD4
    /* stfs f0, 0x10(r1) */ // 0x805F5CD8
    /* stfs f0, 0x28(r29) */ // 0x805F5CDC
    /* stfs f0, 0x2c(r29) */ // 0x805F5CE0
    /* stfs f0, 0x30(r29) */ // 0x805F5CE4
    if (==) goto 0x0x805f5cfc;
    r0 = *(0x34 + r29); // lhz @ 0x805F5CEC
    *(4 + r29) = r31; // stw @ 0x805F5CF0
    r0 = r0 | 1; // 0x805F5CF4
    *(0x34 + r29) = r0; // sth @ 0x805F5CF8
    r12 = *(0x38 + r29); // lwz @ 0x805F5CFC
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x805F5D04
    /* mtctr r12 */ // 0x805F5D08
    /* bctrl  */ // 0x805F5D0C
    r3 = *(0x6c + r29); // lwz @ 0x805F5D10
    r12 = *(0 + r3); // lwz @ 0x805F5D14
    r12 = *(0x18 + r12); // lwz @ 0x805F5D18
    /* mtctr r12 */ // 0x805F5D1C
    /* bctrl  */ // 0x805F5D20
    r0 = *(0x34 + r1); // lwz @ 0x805F5D24
    r31 = *(0x2c + r1); // lwz @ 0x805F5D28
    r30 = *(0x28 + r1); // lwz @ 0x805F5D2C
    r29 = *(0x24 + r1); // lwz @ 0x805F5D30
    return;
}