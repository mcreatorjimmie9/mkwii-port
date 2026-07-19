/* Function at 0x805F8DC0, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_805F8DC0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F8DD0
    r31 = r31 + 0; // 0x805F8DD4
    *(0x28 + r1) = r30; // stw @ 0x805F8DD8
    /* lfs f1, 0(r31) */ // 0x805F8DDC
    *(0x24 + r1) = r29; // stw @ 0x805F8DE0
    r29 = r4;
    /* lfs f0, 0xb0(r31) */ // 0x805F8DE8
    *(0x20 + r1) = r28; // stw @ 0x805F8DEC
    r28 = r3;
    /* stfs f1, 0x14(r1) */ // 0x805F8DF4
    /* stfs f0, 0x18(r1) */ // 0x805F8DF8
    /* stfs f1, 0x1c(r1) */ // 0x805F8DFC
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f0, 0x14(r1) */ // 0x805F8E04
    /* stfs f0, 0x74(r3) */ // 0x805F8E08
    /* lfs f0, 0x18(r1) */ // 0x805F8E0C
    /* stfs f0, 0x78(r3) */ // 0x805F8E10
    /* lfs f0, 0x1c(r1) */ // 0x805F8E14
    /* stfs f0, 0x7c(r3) */ // 0x805F8E18
    r3 = r28;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lis r4, 0 */ // 0x805F8E24
    /* li r30, 0x24 */ // 0x805F8E28
    /* lfs f0, 0(r4) */ // 0x805F8E2C
    r4 = r4 + 0; // 0x805F8E30
    /* stfs f0, 0xa4(r3) */ // 0x805F8E34
    /* lfs f0, 4(r4) */ // 0x805F8E38
    /* stfs f0, 0xa8(r3) */ // 0x805F8E3C
    /* lfs f0, 8(r4) */ // 0x805F8E40
    /* stfs f0, 0xac(r3) */ // 0x805F8E44
    r0 = *(0x1c + r28); // lwz @ 0x805F8E48
    if (!=) goto 0x0x805f8ed4;
    r12 = *(0xc + r28); // lwz @ 0x805F8E54
    r3 = r28;
    r12 = *(0x18 + r12); // lwz @ 0x805F8E5C
    /* mtctr r12 */ // 0x805F8E60
    /* bctrl  */ // 0x805F8E64
    /* lfs f1, 0xb4(r31) */ // 0x805F8E68
    r4 = r28 + 0x10; // 0x805F8E70
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r3 = r28;
    FUN_8061DC48(r3, r4, r3); // bl 0x8061DC48
    /* lfs f1, 0x74(r3) */ // 0x805F8E80
    /* li r30, 0xe */ // 0x805F8E84
    /* lfs f0, 8(r1) */ // 0x805F8E88
    /* fadds f0, f1, f0 */ // 0x805F8E8C
    /* stfs f0, 0x74(r3) */ // 0x805F8E90
    /* lfs f1, 0x78(r3) */ // 0x805F8E94
    /* lfs f0, 0xc(r1) */ // 0x805F8E98
    /* fadds f0, f1, f0 */ // 0x805F8E9C
    /* stfs f0, 0x78(r3) */ // 0x805F8EA0
    /* lfs f1, 0x7c(r3) */ // 0x805F8EA4
    /* lfs f0, 0x10(r1) */ // 0x805F8EA8
    /* fadds f0, f1, f0 */ // 0x805F8EAC
    /* stfs f0, 0x7c(r3) */ // 0x805F8EB0
    r3 = r28;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x805F8EBC
    /* li r4, 0x261 */ // 0x805F8EC0
    /* lfs f1, 0(r31) */ // 0x805F8EC4
    r12 = *(0xe4 + r12); // lwz @ 0x805F8EC8
    /* mtctr r12 */ // 0x805F8ECC
    /* bctrl  */ // 0x805F8ED0
    r3 = r28;
    FUN_8061DA88(r3); // bl 0x8061DA88
}