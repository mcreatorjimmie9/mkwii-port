/* Function at 0x80709EAC, size=956 bytes */
/* Stack frame: 416 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_80709EAC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -416(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x198 + r1) = r30; // stw @ 0x80709EC0
    *(0x194 + r1) = r29; // stw @ 0x80709EC4
    r0 = *(0x54 + r3); // lwz @ 0x80709EC8
    if (==) goto 0x0x80709ee8;
    if (==) goto 0x0x8070a0ac;
    if (==) goto 0x0x8070a28c;
    /* b 0x8070a2ac */ // 0x80709EE4
    /* lis r3, 0 */ // 0x80709EE8
    r3 = *(0 + r3); // lwz @ 0x80709EEC
    r3 = *(0 + r3); // lwz @ 0x80709EF0
    r29 = *(0x150 + r3); // lwz @ 0x80709EF4
    if (!=) goto 0x0x80709f08;
    /* li r29, 0 */ // 0x80709F00
    /* b 0x80709f5c */ // 0x80709F04
    /* lis r30, 0 */ // 0x80709F08
    r30 = r30 + 0; // 0x80709F0C
    if (==) goto 0x0x80709f58;
    r12 = *(0 + r29); // lwz @ 0x80709F14
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80709F1C
    /* mtctr r12 */ // 0x80709F20
    /* bctrl  */ // 0x80709F24
    /* b 0x80709f40 */ // 0x80709F28
    if (!=) goto 0x0x80709f3c;
    /* li r0, 1 */ // 0x80709F34
    /* b 0x80709f4c */ // 0x80709F38
    r3 = *(0 + r3); // lwz @ 0x80709F3C
    if (!=) goto 0x0x80709f2c;
    /* li r0, 0 */ // 0x80709F48
    if (==) goto 0x0x80709f58;
    /* b 0x80709f5c */ // 0x80709F54
    /* li r29, 0 */ // 0x80709F58
    r0 = *(0xa50 + r29); // lwz @ 0x80709F5C
    if (!=) goto 0x0x8070a084;
    /* lis r3, 0 */ // 0x80709F68
    r3 = *(0 + r3); // lwz @ 0x80709F6C
    r3 = *(0 + r3); // lwz @ 0x80709F70
    r29 = *(0x144 + r3); // lwz @ 0x80709F74
    if (!=) goto 0x0x80709f88;
    /* li r29, 0 */ // 0x80709F80
    /* b 0x80709fdc */ // 0x80709F84
    /* lis r30, 0 */ // 0x80709F88
    r30 = r30 + 0; // 0x80709F8C
    if (==) goto 0x0x80709fd8;
    r12 = *(0 + r29); // lwz @ 0x80709F94
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80709F9C
    /* mtctr r12 */ // 0x80709FA0
    /* bctrl  */ // 0x80709FA4
    /* b 0x80709fc0 */ // 0x80709FA8
    if (!=) goto 0x0x80709fbc;
    /* li r0, 1 */ // 0x80709FB4
    /* b 0x80709fcc */ // 0x80709FB8
    r3 = *(0 + r3); // lwz @ 0x80709FBC
    if (!=) goto 0x0x80709fac;
    /* li r0, 0 */ // 0x80709FC8
    if (==) goto 0x0x80709fd8;
    /* b 0x80709fdc */ // 0x80709FD4
    /* li r29, 0 */ // 0x80709FD8
    r12 = *(0 + r29); // lwz @ 0x80709FDC
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x80709FE4
    /* mtctr r12 */ // 0x80709FE8
    /* bctrl  */ // 0x80709FEC
    r3 = r29;
    /* li r4, 0x1a2c */ // 0x80709FF4
    /* li r5, 0 */ // 0x80709FF8
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r29); // lwz @ 0x8070A000
    r3 = r29;
    /* li r4, 0x1a30 */ // 0x8070A008
    /* li r5, 0 */ // 0x8070A00C
    r12 = *(0x68 + r12); // lwz @ 0x8070A010
    /* mtctr r12 */ // 0x8070A014
    /* bctrl  */ // 0x8070A018
    r3 = r31 + 0x68; // 0x8070A01C
    /* li r4, 0x212c */ // 0x8070A020
    FUN_806C9DF0(r3, r4); // bl 0x806C9DF0
    /* lis r3, 0 */ // 0x8070A028
    r29 = *(0 + r3); // lwz @ 0x8070A02C
    r3 = r29;
    FUN_806F5A3C(r4, r3, r3); // bl 0x806F5A3C
    r0 = *(0x58 + r31); // lwz @ 0x8070A038
    r7 = r31 + 0xa0; // 0x8070A03C
    r8 = *(0x60 + r31); // lwz @ 0x8070A040
    /* mulli r0, r0, 0x28 */ // 0x8070A044
    r4 = r3 + r0; // 0x8070A048
    r3 = r29;
    r5 = *(8 + r4); // lwz @ 0x8070A050
    r6 = *(0xc + r4); // lwz @ 0x8070A054
    FUN_806FE488(r3); // bl 0x806FE488
    /* li r0, 2 */ // 0x8070A05C
    *(0x54 + r31) = r0; // stw @ 0x8070A060
    r3 = r31;
    /* li r4, 0x4f */ // 0x8070A068
    r12 = *(0 + r31); // lwz @ 0x8070A06C
    /* li r5, 0 */ // 0x8070A070
    r12 = *(0x24 + r12); // lwz @ 0x8070A074
    /* mtctr r12 */ // 0x8070A078
    /* bctrl  */ // 0x8070A07C
    /* b 0x8070a2ac */ // 0x8070A080
    /* lis r3, 0 */ // 0x8070A084
    /* li r4, 0xbe */ // 0x8070A088
    /* li r0, 0 */ // 0x8070A08C
    *(0x5c + r31) = r4; // stw @ 0x8070A090
    /* lfs f1, 0(r3) */ // 0x8070A094
    r3 = r31;
    *(0x54 + r31) = r0; // stw @ 0x8070A09C
    /* li r4, 1 */ // 0x8070A0A0
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x8070a2ac */ // 0x8070A0A8
    /* lis r3, 0 */ // 0x8070A0AC
    r3 = *(0 + r3); // lwz @ 0x8070A0B0
    r3 = *(0 + r3); // lwz @ 0x8070A0B4
    r29 = *(0x14c + r3); // lwz @ 0x8070A0B8
    if (!=) goto 0x0x8070a0cc;
    /* li r29, 0 */ // 0x8070A0C4
    /* b 0x8070a120 */ // 0x8070A0C8
    /* lis r30, 0 */ // 0x8070A0CC
    r30 = r30 + 0; // 0x8070A0D0
    if (==) goto 0x0x8070a11c;
    r12 = *(0 + r29); // lwz @ 0x8070A0D8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8070A0E0
    /* mtctr r12 */ // 0x8070A0E4
    /* bctrl  */ // 0x8070A0E8
    /* b 0x8070a104 */ // 0x8070A0EC
    if (!=) goto 0x0x8070a100;
    /* li r0, 1 */ // 0x8070A0F8
    /* b 0x8070a110 */ // 0x8070A0FC
    r3 = *(0 + r3); // lwz @ 0x8070A100
    if (!=) goto 0x0x8070a0f0;
    /* li r0, 0 */ // 0x8070A10C
    if (==) goto 0x0x8070a11c;
    /* b 0x8070a120 */ // 0x8070A118
    /* li r29, 0 */ // 0x8070A11C
    r12 = *(0 + r29); // lwz @ 0x8070A120
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8070A128
    /* mtctr r12 */ // 0x8070A12C
    /* bctrl  */ // 0x8070A130
    r3 = r29;
    /* li r4, 0x1a2c */ // 0x8070A138
    /* li r5, 0 */ // 0x8070A13C
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    /* lis r30, 0 */ // 0x8070A144
    r3 = *(0 + r30); // lwz @ 0x8070A148
    FUN_806F58E8(r4, r5); // bl 0x806F58E8
    if (!=) goto 0x0x8070a1ac;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = *(0 + r30); // lwz @ 0x8070A160
    FUN_806F5A3C(r3); // bl 0x806F5A3C
    r0 = *(0x58 + r31); // lwz @ 0x8070A168
    /* li r4, 0x1a31 */ // 0x8070A170
    /* mulli r0, r0, 0x28 */ // 0x8070A174
    r6 = r3 + r0; // 0x8070A178
    r3 = r29;
    r0 = r6 + 0x18; // 0x8070A180
    *(0x168 + r1) = r0; // stw @ 0x8070A184
    r12 = *(0 + r29); // lwz @ 0x8070A188
    r12 = *(0x68 + r12); // lwz @ 0x8070A18C
    /* mtctr r12 */ // 0x8070A190
    /* bctrl  */ // 0x8070A194
    r3 = r31;
    /* li r4, 0x50 */ // 0x8070A19C
    /* li r5, -1 */ // 0x8070A1A0
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x8070a264 */ // 0x8070A1A8
    FUN_80654ECC(r4, r5, r3); // bl 0x80654ECC
    r3 = *(0 + r30); // lwz @ 0x8070A1B4
    FUN_806F58F0(r3); // bl 0x806F58F0
    *(8 + r1) = r3; // stw @ 0x8070A1BC
    r3 = *(0 + r30); // lwz @ 0x8070A1C0
    FUN_806F5918(); // bl 0x806F5918
    if (>) goto 0x0x8070a248;
    /* lis r4, 0 */ // 0x8070A1D0
    /* slwi r0, r3, 2 */ // 0x8070A1D4
    r4 = r4 + 0; // 0x8070A1D8
    /* lwzx r4, r4, r0 */ // 0x8070A1DC
    /* mtctr r4 */ // 0x8070A1E0
    /* bctr  */ // 0x8070A1E4
    /* li r4, 0x18a6 */ // 0x8070A1E8
    /* b 0x8070a24c */ // 0x8070A1EC
    /* li r4, 0x18a7 */ // 0x8070A1F0
    /* b 0x8070a24c */ // 0x8070A1F4
    /* li r4, 0x18a8 */ // 0x8070A1F8
    /* b 0x8070a24c */ // 0x8070A1FC
    /* li r4, 0x18a9 */ // 0x8070A200
    /* b 0x8070a24c */ // 0x8070A204
    /* li r4, 0x18aa */ // 0x8070A208
    /* b 0x8070a24c */ // 0x8070A20C
    /* li r4, 0x18ab */ // 0x8070A210
    /* b 0x8070a24c */ // 0x8070A214
    /* li r4, 0x18ad */ // 0x8070A218
    /* b 0x8070a24c */ // 0x8070A21C
    /* lis r3, 0 */ // 0x8070A220
    r3 = *(0 + r3); // lwz @ 0x8070A224
    r3 = *(0x90 + r3); // lwz @ 0x8070A228
    FUN_806845A4(r4, r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x8070A230
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8070A238
    /* li r4, -1 */ // 0x8070A23C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x8070a2ac */ // 0x8070A244
    /* li r4, 0x18a6 */ // 0x8070A248
    r12 = *(0 + r29); // lwz @ 0x8070A24C
    r3 = r29;
    r12 = *(0x68 + r12); // lwz @ 0x8070A258
    /* mtctr r12 */ // 0x8070A25C
    /* bctrl  */ // 0x8070A260
    /* li r0, 4 */ // 0x8070A264
}