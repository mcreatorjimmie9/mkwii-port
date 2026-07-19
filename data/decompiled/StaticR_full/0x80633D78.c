/* Function at 0x80633D78, size=508 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80633D78(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r30, 0 */ // 0x80633D8C
    r30 = r30 + 0; // 0x80633D90
    *(0x84 + r1) = r29; // stw @ 0x80633D94
    *(0x80 + r1) = r28; // stw @ 0x80633D98
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x80633DA0
    r12 = *(0x18 + r12); // lwz @ 0x80633DA4
    /* mtctr r12 */ // 0x80633DA8
    /* bctrl  */ // 0x80633DAC
    if (!=) goto 0x0x80633e00;
    r12 = *(0 + r28); // lwz @ 0x80633DB8
    r3 = r28;
    r12 = *(0x14 + r12); // lwz @ 0x80633DC0
    /* mtctr r12 */ // 0x80633DC4
    /* bctrl  */ // 0x80633DC8
    r3 = *(0 + r3); // lwz @ 0x80633DCC
    r0 = *(0 + r3); // lbz @ 0x80633DD0
    if (==) goto 0x0x80633e00;
    r12 = *(0 + r28); // lwz @ 0x80633DDC
    r3 = r28;
    r12 = *(0x14 + r12); // lwz @ 0x80633DE4
    /* mtctr r12 */ // 0x80633DE8
    /* bctrl  */ // 0x80633DEC
    r3 = *(0 + r3); // lwz @ 0x80633DF0
    r0 = *(0 + r3); // lbz @ 0x80633DF4
    if (!=) goto 0x0x80633fb4;
    r4 = *(4 + r28); // lwz @ 0x80633E00
    /* lis r3, 0 */ // 0x80633E04
    /* lis r6, 0x62f9 */ // 0x80633E08
    /* lfs f0, 0(r30) */ // 0x80633E0C
    r29 = *(0x90 + r4); // lwz @ 0x80633E10
    /* li r31, 0 */ // 0x80633E14
    /* lfs f1, 0x40(r30) */ // 0x80633E18
    r5 = r28 + 0x60; // 0x80633E1C
    /* stfs f0, 0x18(r1) */ // 0x80633E20
    r4 = r29 + 0x64; // 0x80633E24
    r3 = *(0 + r3); // lwz @ 0x80633E28
    r6 = r6 + -0x4201; // 0x80633E2C
    /* stfs f0, 0x1c(r1) */ // 0x80633E30
    /* li r9, 0 */ // 0x80633E3C
    /* stfs f0, 0x20(r1) */ // 0x80633E40
    /* stfs f0, 0x24(r1) */ // 0x80633E44
    /* stfs f0, 0x28(r1) */ // 0x80633E48
    /* stfs f0, 0x2c(r1) */ // 0x80633E4C
    *(0x70 + r1) = r31; // stw @ 0x80633E50
    *(8 + r1) = r31; // stw @ 0x80633E54
    FUN_8081A818(); // bl 0x8081A818
    if (==) goto 0x0x80633f38;
    /* lfs f1, 0x64(r29) */ // 0x80633E64
    /* lfs f0, 0x30(r1) */ // 0x80633E68
    /* fadds f4, f1, f0 */ // 0x80633E6C
    /* stfs f4, 0x64(r29) */ // 0x80633E70
    /* lfs f1, 0x68(r29) */ // 0x80633E74
    /* lfs f0, 0x34(r1) */ // 0x80633E78
    /* fadds f3, f1, f0 */ // 0x80633E7C
    /* stfs f3, 0x68(r29) */ // 0x80633E80
    /* lfs f1, 0x6c(r29) */ // 0x80633E84
    /* lfs f0, 0x38(r1) */ // 0x80633E88
    /* fadds f2, f1, f0 */ // 0x80633E8C
    /* frsp f1, f3 */ // 0x80633E90
    /* stfs f2, 0x6c(r29) */ // 0x80633E94
    /* frsp f2, f2 */ // 0x80633E98
    /* lfs f0, 0x70(r29) */ // 0x80633E9C
    /* fsubs f5, f4, f0 */ // 0x80633EA0
    /* lfs f0, 0x74(r29) */ // 0x80633EA4
    /* fsubs f4, f1, f0 */ // 0x80633EA8
    /* lfs f0, 0x78(r29) */ // 0x80633EAC
    /* fmuls f1, f5, f5 */ // 0x80633EB0
    /* stfs f5, 0xc(r1) */ // 0x80633EB4
    /* fsubs f3, f2, f0 */ // 0x80633EB8
    /* fmuls f0, f4, f4 */ // 0x80633EBC
    /* stfs f4, 0x10(r1) */ // 0x80633EC0
    /* fmuls f2, f3, f3 */ // 0x80633EC4
    /* fadds f0, f1, f0 */ // 0x80633EC8
    /* stfs f3, 0x14(r1) */ // 0x80633ECC
    /* fadds f1, f2, f0 */ // 0x80633ED0
    FUN_805E3430(); // bl 0x805E3430
    /* stfs f1, 0x1c(r28) */ // 0x80633ED8
    /* lis r3, -0x2fef */ // 0x80633EDC
    r4 = r3 + -0x1000; // 0x80633EE0
    r0 = *(8 + r1); // lwz @ 0x80633EE4
    /* and. r0, r0, r4 */ // 0x80633EE8
    if (==) goto 0x0x80633efc;
    FUN_80842FAC(r4, r3); // bl 0x80842FAC
    /* b 0x80633f00 */ // 0x80633EF8
    r3 = r31;
    if (==) goto 0x0x80633f38;
    /* lfs f1, 0x1c(r28) */ // 0x80633F08
    /* lfs f0, 0x44(r30) */ // 0x80633F0C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80633F10
    if (>=) goto 0x0x80633f38;
    /* lfs f2, 0x6c(r28) */ // 0x80633F18
    /* lfs f1, 0x10(r30) */ // 0x80633F1C
    /* lfs f0, 0x48(r30) */ // 0x80633F20
    /* fadds f1, f2, f1 */ // 0x80633F24
    /* stfs f1, 0x6c(r28) */ // 0x80633F28
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80633F2C
    if (>=) goto 0x0x80633f38;
    /* stfs f0, 0x6c(r28) */ // 0x80633F34
    /* lfs f0, 0(r30) */ // 0x80633F38
    /* lfs f5, 0x6c(r28) */ // 0x80633F3C
    /* lfs f3, 0x4c(r30) */ // 0x80633F40
    /* fsubs f4, f0, f5 */ // 0x80633F44
    /* lfs f0, 0x50(r30) */ // 0x80633F48
    /* lfs f1, 0x18(r28) */ // 0x80633F4C
    /* lfs f2, 0x1c(r28) */ // 0x80633F50
    /* fmuls f3, f3, f4 */ // 0x80633F54
    /* fmuls f0, f0, f1 */ // 0x80633F58
    /* fadds f3, f5, f3 */ // 0x80633F5C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80633F60
    /* stfs f3, 0x6c(r28) */ // 0x80633F64
    if (<=) goto 0x0x80633f74;
    /* stfs f1, 0x1c(r28) */ // 0x80633F6C
    /* b 0x80633f88 */ // 0x80633F70
}