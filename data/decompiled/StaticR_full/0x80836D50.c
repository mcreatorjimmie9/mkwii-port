/* Function at 0x80836D50, size=476 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80836D50(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80836D60
    r31 = r31 + 0; // 0x80836D64
    *(0x28 + r1) = r30; // stw @ 0x80836D68
    r30 = r3;
    /* lfs f2, 0x12c(r31) */ // 0x80836D70
    /* lfs f1, 0x2f0(r3) */ // 0x80836D74
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x80836D78
    if (<=) goto 0x0x80836d9c;
    /* lfs f0, 0x138(r31) */ // 0x80836D80
    /* fadds f0, f1, f0 */ // 0x80836D84
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80836D88
    if (<=) goto 0x0x80836d94;
    /* b 0x80836db4 */ // 0x80836D90
    /* fmr f2, f0 */ // 0x80836D94
    /* b 0x80836db4 */ // 0x80836D98
    /* lfs f0, 0x138(r31) */ // 0x80836D9C
    /* fsubs f0, f1, f0 */ // 0x80836DA0
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80836DA4
    if (>=) goto 0x0x80836db0;
    /* b 0x80836db4 */ // 0x80836DAC
    /* fmr f2, f0 */ // 0x80836DB0
    /* lfs f1, 0x2dc(r3) */ // 0x80836DB4
    /* lfs f0, 0x140(r31) */ // 0x80836DB8
    r0 = *(0x2b8 + r3); // lwz @ 0x80836DBC
    /* fsubs f0, f1, f0 */ // 0x80836DC0
    r4 = *(0x2fc + r3); // lhz @ 0x80836DC4
    /* stfs f2, 0x2f0(r3) */ // 0x80836DCC
    r0 = r4 + 0x23; // 0x80836DD0
    /* stfs f0, 0x2dc(r3) */ // 0x80836DD4
    *(0x2fc + r3) = r0; // sth @ 0x80836DD8
    if (>=) goto 0x0x80836df4;
    /* lfs f1, 0x2f8(r3) */ // 0x80836DE0
    /* lfs f0, 0x144(r31) */ // 0x80836DE4
    /* fsubs f0, f1, f0 */ // 0x80836DE8
    /* stfs f0, 0x2f8(r3) */ // 0x80836DEC
    /* b 0x80836e04 */ // 0x80836DF0
    /* lfs f1, 0x2f8(r3) */ // 0x80836DF4
    /* lfs f0, 0x138(r31) */ // 0x80836DF8
    /* fsubs f0, f1, f0 */ // 0x80836DFC
    /* stfs f0, 0x2f8(r3) */ // 0x80836E00
    r3 = *(0x280 + r3); // lwz @ 0x80836E04
    r3 = *(0 + r3); // lwz @ 0x80836E08
    r3 = *(4 + r3); // lwz @ 0x80836E0C
    r0 = *(8 + r3); // lwz @ 0x80836E10
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80836E14
    if (==) goto 0x0x80836e4c;
    /* lis r3, 0 */ // 0x80836E1C
    r3 = *(0 + r3); // lwz @ 0x80836E20
    r0 = *(0xb68 + r3); // lwz @ 0x80836E24
    if (==) goto 0x0x80836e4c;
    /* lfs f1, 0x1c(r31) */ // 0x80836E30
    r3 = r30;
    /* lfs f2, 0x148(r31) */ // 0x80836E38
    /* lfs f3, 0x2f8(r30) */ // 0x80836E3C
    r4 = *(0x2fc + r30); // lhz @ 0x80836E40
    FUN_80839A40(r3); // bl 0x80839A40
    /* b 0x80836e64 */ // 0x80836E48
    /* lfs f1, 0x118(r31) */ // 0x80836E4C
    r3 = r30;
    /* lfs f2, 0x2f0(r30) */ // 0x80836E54
    /* lfs f3, 0x2f8(r30) */ // 0x80836E58
    r4 = *(0x2fc + r30); // lhz @ 0x80836E5C
    FUN_80839A40(r3); // bl 0x80839A40
    r3 = r30;
    /* li r4, 0 */ // 0x80836E68
    FUN_80835F1C(r3, r4); // bl 0x80835F1C
    /* lis r3, 1 */ // 0x80836E70
    r4 = *(0x2b8 + r30); // lwz @ 0x80836E74
    r0 = r3 + 0x1f40; // 0x80836E78
    if (>=) goto 0x0x80836f1c;
    /* addis r3, r4, -1 */ // 0x80836E84
    /* lis r0, 0x4330 */ // 0x80836E88
    /* xoris r3, r3, 0x8000 */ // 0x80836E8C
    *(0x1c + r1) = r3; // stw @ 0x80836E90
    /* lfd f2, 0x108(r31) */ // 0x80836E94
    *(0x18 + r1) = r0; // stw @ 0x80836E98
    /* lfs f0, 0x154(r31) */ // 0x80836E9C
    /* lfd f1, 0x18(r1) */ // 0x80836EA0
    /* lfs f5, 0x14c(r31) */ // 0x80836EA4
    /* fsubs f3, f1, f2 */ // 0x80836EA8
    /* lfs f4, 0x2ac(r30) */ // 0x80836EAC
    /* lfs f2, 0x150(r31) */ // 0x80836EB0
    /* lfs f1, 0x11c(r31) */ // 0x80836EB4
    /* fmuls f4, f5, f4 */ // 0x80836EB8
    /* fdivs f3, f3, f0 */ // 0x80836EBC
    /* lfs f0, 0x2b4(r30) */ // 0x80836EC0
    /* stfs f4, 0x10(r1) */ // 0x80836EC4
    /* fmuls f2, f2, f3 */ // 0x80836EC8
    /* fmuls f0, f1, f0 */ // 0x80836ECC
    /* stfs f2, 0xc(r1) */ // 0x80836ED0
    /* stfs f0, 8(r1) */ // 0x80836ED4
    r0 = *(0x2c8 + r30); // lwz @ 0x80836ED8
    if (!=) goto 0x0x80836f08;
    /* .byte 0xe0, 0x3e, 0x03, 0x18 */ // 0x80836EE8
    /* .byte 0xe0, 0x03, 0x00, 0x00 */ // 0x80836EEC
    /* vmsumshm v0, v0, v1, v0 */ // 0x80836EF0
    /* .byte 0xe0, 0x3e, 0x83, 0x20 */ // 0x80836EF4
    /* xvmaddadp vs0, v30, vs0 */ // 0x80836EF8
    /* .byte 0xe0, 0x03, 0x80, 0x08 */ // 0x80836EFC
    /* vmsumshm v0, v0, v1, v0 */ // 0x80836F00
    /* xxsldwi vs0, v30, vs16, 3 */ // 0x80836F04
    r3 = r30;
    /* li r5, 1 */ // 0x80836F10
    FUN_80836214(r3, r4, r5); // bl 0x80836214
    /* b 0x80836f24 */ // 0x80836F18
    /* li r0, 4 */ // 0x80836F1C
    *(0x2c4 + r30) = r0; // stw @ 0x80836F20
    /* lfs f1, 0(r31) */ // 0x80836F24
    r3 = r30;
}