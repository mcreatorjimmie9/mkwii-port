/* Function at 0x806D9D54, size=1492 bytes */
/* Stack frame: 832 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_806D9D54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -832(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x334 + r1) = r29; // stw @ 0x806D9D6C
    /* lis r29, 0 */ // 0x806D9D70
    r3 = *(0 + r29); // lwz @ 0x806D9D74
    r3 = *(0x98 + r3); // lwz @ 0x806D9D78
    r0 = *(0x3c4 + r3); // lwz @ 0x806D9D7C
    r31 = *(0x3c8 + r3); // lwz @ 0x806D9D80
    if (==) goto 0x0x806d9da8;
    if (==) goto 0x0x806d9ea8;
    if (==) goto 0x0x806d9fa8;
    if (==) goto 0x0x806da104;
    /* b 0x806da244 */ // 0x806D9DA4
    /* lis r3, 0 */ // 0x806D9DA8
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806D9DB0
    r6 = r30 + 0x68; // 0x806D9DB4
    /* li r5, 1 */ // 0x806D9DB8
    FUN_807007C8(r3, r4, r6, r5); // bl 0x807007C8
    if (!=) goto 0x0x806da244;
    r3 = *(0 + r29); // lwz @ 0x806D9DC8
    r3 = *(0 + r3); // lwz @ 0x806D9DCC
    r31 = *(0x14c + r3); // lwz @ 0x806D9DD0
    if (!=) goto 0x0x806d9de4;
    /* li r31, 0 */ // 0x806D9DDC
    /* b 0x806d9e38 */ // 0x806D9DE0
    /* lis r29, 0 */ // 0x806D9DE4
    r29 = r29 + 0; // 0x806D9DE8
    if (==) goto 0x0x806d9e34;
    r12 = *(0 + r31); // lwz @ 0x806D9DF0
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806D9DF8
    /* mtctr r12 */ // 0x806D9DFC
    /* bctrl  */ // 0x806D9E00
    /* b 0x806d9e1c */ // 0x806D9E04
    if (!=) goto 0x0x806d9e18;
    /* li r0, 1 */ // 0x806D9E10
    /* b 0x806d9e28 */ // 0x806D9E14
    r3 = *(0 + r3); // lwz @ 0x806D9E18
    if (!=) goto 0x0x806d9e08;
    /* li r0, 0 */ // 0x806D9E24
    if (==) goto 0x0x806d9e34;
    /* b 0x806d9e38 */ // 0x806D9E30
    /* li r31, 0 */ // 0x806D9E34
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D9E40
    r3 = *(0 + r3); // lwz @ 0x806D9E44
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0x260 + r1) = r3; // stw @ 0x806D9E4C
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x806D9E54
    r12 = *(0x64 + r12); // lwz @ 0x806D9E58
    /* mtctr r12 */ // 0x806D9E5C
    /* bctrl  */ // 0x806D9E60
    r12 = *(0 + r31); // lwz @ 0x806D9E64
    r3 = r31;
    /* li r4, 0x17e0 */ // 0x806D9E70
    r12 = *(0x68 + r12); // lwz @ 0x806D9E74
    /* mtctr r12 */ // 0x806D9E78
    /* bctrl  */ // 0x806D9E7C
    r12 = *(0 + r30); // lwz @ 0x806D9E80
    r3 = r30;
    /* li r4, 0x51 */ // 0x806D9E88
    /* li r5, 0 */ // 0x806D9E8C
    r12 = *(0x24 + r12); // lwz @ 0x806D9E90
    /* mtctr r12 */ // 0x806D9E94
    /* bctrl  */ // 0x806D9E98
    /* li r0, 0x10 */ // 0x806D9E9C
    *(0x2874 + r30) = r0; // stw @ 0x806D9EA0
    /* b 0x806da30c */ // 0x806D9EA4
    /* lis r3, 0 */ // 0x806D9EA8
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806D9EB0
    r6 = r30 + 0x68; // 0x806D9EB4
    /* li r5, 0 */ // 0x806D9EB8
    FUN_807007C8(r3, r4, r6, r5); // bl 0x807007C8
    if (!=) goto 0x0x806da244;
    r3 = *(0 + r29); // lwz @ 0x806D9EC8
    r3 = *(0 + r3); // lwz @ 0x806D9ECC
    r31 = *(0x14c + r3); // lwz @ 0x806D9ED0
    if (!=) goto 0x0x806d9ee4;
    /* li r31, 0 */ // 0x806D9EDC
    /* b 0x806d9f38 */ // 0x806D9EE0
    /* lis r29, 0 */ // 0x806D9EE4
    r29 = r29 + 0; // 0x806D9EE8
    if (==) goto 0x0x806d9f34;
    r12 = *(0 + r31); // lwz @ 0x806D9EF0
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806D9EF8
    /* mtctr r12 */ // 0x806D9EFC
    /* bctrl  */ // 0x806D9F00
    /* b 0x806d9f1c */ // 0x806D9F04
    if (!=) goto 0x0x806d9f18;
    /* li r0, 1 */ // 0x806D9F10
    /* b 0x806d9f28 */ // 0x806D9F14
    r3 = *(0 + r3); // lwz @ 0x806D9F18
    if (!=) goto 0x0x806d9f08;
    /* li r0, 0 */ // 0x806D9F24
    if (==) goto 0x0x806d9f34;
    /* b 0x806d9f38 */ // 0x806D9F30
    /* li r31, 0 */ // 0x806D9F34
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D9F40
    r3 = *(0 + r3); // lwz @ 0x806D9F44
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0x19c + r1) = r3; // stw @ 0x806D9F4C
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x806D9F54
    r12 = *(0x64 + r12); // lwz @ 0x806D9F58
    /* mtctr r12 */ // 0x806D9F5C
    /* bctrl  */ // 0x806D9F60
    r12 = *(0 + r31); // lwz @ 0x806D9F64
    r3 = r31;
    /* li r4, 0x17e0 */ // 0x806D9F70
    r12 = *(0x68 + r12); // lwz @ 0x806D9F74
    /* mtctr r12 */ // 0x806D9F78
    /* bctrl  */ // 0x806D9F7C
    r12 = *(0 + r30); // lwz @ 0x806D9F80
    r3 = r30;
    /* li r4, 0x51 */ // 0x806D9F88
    /* li r5, 0 */ // 0x806D9F8C
    r12 = *(0x24 + r12); // lwz @ 0x806D9F90
    /* mtctr r12 */ // 0x806D9F94
    /* bctrl  */ // 0x806D9F98
    /* li r0, 0x10 */ // 0x806D9F9C
    *(0x2874 + r30) = r0; // stw @ 0x806D9FA0
    /* b 0x806da30c */ // 0x806D9FA4
    /* lis r3, 0 */ // 0x806D9FA8
    r5 = *(0 + r3); // lwz @ 0x806D9FAC
    r0 = *(0x36 + r5); // lha @ 0x806D9FB0
    if (<) goto 0x0x806d9fd8;
    /* lis r3, 1 */ // 0x806D9FBC
    /* clrlwi r4, r0, 0x18 */ // 0x806D9FC0
    r0 = r3 + -0x6c10; // 0x806D9FC4
    r0 = r0 * r4; // 0x806D9FC8
    r3 = r5 + r0; // 0x806D9FCC
    r3 = r3 + 0x38; // 0x806D9FD0
    /* b 0x806d9fdc */ // 0x806D9FD4
    /* li r3, 0 */ // 0x806D9FD8
    r5 = r31;
    /* li r4, 0 */ // 0x806D9FE0
    FUN_805D7994(r3, r3, r5, r4); // bl 0x805D7994
    /* lis r4, 0 */ // 0x806D9FE8
    r5 = r3;
    /* lfs f1, 0(r4) */ // 0x806D9FF0
    r4 = r5 + 0x4c; // 0x806D9FF8
    FUN_805C3BDC(r4, r5, r3, r4); // bl 0x805C3BDC
    /* lis r3, 0 */ // 0x806DA000
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806DA008
    r6 = r30 + 0x68; // 0x806DA010
    FUN_80700A90(r3, r4, r5, r6); // bl 0x80700A90
    if (!=) goto 0x0x806da244;
    /* lis r3, 0 */ // 0x806DA020
    r3 = *(0 + r3); // lwz @ 0x806DA024
    r3 = *(0 + r3); // lwz @ 0x806DA028
    r31 = *(0x14c + r3); // lwz @ 0x806DA02C
    if (!=) goto 0x0x806da040;
    /* li r31, 0 */ // 0x806DA038
    /* b 0x806da094 */ // 0x806DA03C
    /* lis r29, 0 */ // 0x806DA040
    r29 = r29 + 0; // 0x806DA044
    if (==) goto 0x0x806da090;
    r12 = *(0 + r31); // lwz @ 0x806DA04C
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806DA054
    /* mtctr r12 */ // 0x806DA058
    /* bctrl  */ // 0x806DA05C
    /* b 0x806da078 */ // 0x806DA060
    if (!=) goto 0x0x806da074;
    /* li r0, 1 */ // 0x806DA06C
    /* b 0x806da084 */ // 0x806DA070
    r3 = *(0 + r3); // lwz @ 0x806DA074
    if (!=) goto 0x0x806da064;
    /* li r0, 0 */ // 0x806DA080
    if (==) goto 0x0x806da090;
    /* b 0x806da094 */ // 0x806DA08C
    /* li r31, 0 */ // 0x806DA090
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806DA09C
    r3 = *(0 + r3); // lwz @ 0x806DA0A0
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0xd8 + r1) = r3; // stw @ 0x806DA0A8
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x806DA0B0
    r12 = *(0x64 + r12); // lwz @ 0x806DA0B4
    /* mtctr r12 */ // 0x806DA0B8
    /* bctrl  */ // 0x806DA0BC
    r12 = *(0 + r31); // lwz @ 0x806DA0C0
    r3 = r31;
    /* li r4, 0x17e0 */ // 0x806DA0CC
    r12 = *(0x68 + r12); // lwz @ 0x806DA0D0
    /* mtctr r12 */ // 0x806DA0D4
    /* bctrl  */ // 0x806DA0D8
    r12 = *(0 + r30); // lwz @ 0x806DA0DC
    r3 = r30;
    /* li r4, 0x51 */ // 0x806DA0E4
    /* li r5, 0 */ // 0x806DA0E8
    r12 = *(0x24 + r12); // lwz @ 0x806DA0EC
    /* mtctr r12 */ // 0x806DA0F0
    /* bctrl  */ // 0x806DA0F4
    /* li r0, 0x10 */ // 0x806DA0F8
    *(0x2874 + r30) = r0; // stw @ 0x806DA0FC
    /* b 0x806da30c */ // 0x806DA100
    /* lis r3, 0 */ // 0x806DA104
    r3 = *(0 + r3); // lwz @ 0x806DA108
    FUN_806F946C(r3); // bl 0x806F946C
    r0 = *(0 + r3); // lwz @ 0x806DA110
    /* li r4, -1 */ // 0x806DA114
    /* li r5, 0 */ // 0x806DA118
    /* mtctr r0 */ // 0x806DA11C
    if (<=) goto 0x0x806da148;
    r0 = *(4 + r3); // lwz @ 0x806DA128
    if (!=) goto 0x0x806da13c;
    r4 = r5;
    /* b 0x806da148 */ // 0x806DA138
    r3 = r3 + 0x70; // 0x806DA13C
    r5 = r5 + 1; // 0x806DA140
    if (counter-- != 0) goto 0x0x806da128;
    /* lis r3, 0 */ // 0x806DA148
    r5 = r30 + 0x68; // 0x806DA14C
    r3 = *(0 + r3); // lwz @ 0x806DA150
    FUN_8070093C(r5, r3, r5); // bl 0x8070093C
    if (!=) goto 0x0x806da244;
    /* lis r3, 0 */ // 0x806DA160
    r3 = *(0 + r3); // lwz @ 0x806DA164
    r3 = *(0 + r3); // lwz @ 0x806DA168
    r31 = *(0x14c + r3); // lwz @ 0x806DA16C
    if (!=) goto 0x0x806da180;
    /* li r31, 0 */ // 0x806DA178
    /* b 0x806da1d4 */ // 0x806DA17C
    /* lis r29, 0 */ // 0x806DA180
    r29 = r29 + 0; // 0x806DA184
    if (==) goto 0x0x806da1d0;
    r12 = *(0 + r31); // lwz @ 0x806DA18C
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806DA194
    /* mtctr r12 */ // 0x806DA198
    /* bctrl  */ // 0x806DA19C
    /* b 0x806da1b8 */ // 0x806DA1A0
    if (!=) goto 0x0x806da1b4;
    /* li r0, 1 */ // 0x806DA1AC
    /* b 0x806da1c4 */ // 0x806DA1B0
    r3 = *(0 + r3); // lwz @ 0x806DA1B4
    if (!=) goto 0x0x806da1a4;
    /* li r0, 0 */ // 0x806DA1C0
    if (==) goto 0x0x806da1d0;
    /* b 0x806da1d4 */ // 0x806DA1CC
    /* li r31, 0 */ // 0x806DA1D0
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806DA1DC
    r3 = *(0 + r3); // lwz @ 0x806DA1E0
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0x14 + r1) = r3; // stw @ 0x806DA1E8
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x806DA1F0
    r12 = *(0x64 + r12); // lwz @ 0x806DA1F4
    /* mtctr r12 */ // 0x806DA1F8
    /* bctrl  */ // 0x806DA1FC
    r12 = *(0 + r31); // lwz @ 0x806DA200
    r3 = r31;
    /* li r4, 0x17e0 */ // 0x806DA20C
    r12 = *(0x68 + r12); // lwz @ 0x806DA210
    /* mtctr r12 */ // 0x806DA214
    /* bctrl  */ // 0x806DA218
    r12 = *(0 + r30); // lwz @ 0x806DA21C
    r3 = r30;
    /* li r4, 0x51 */ // 0x806DA224
    /* li r5, 0 */ // 0x806DA228
    r12 = *(0x24 + r12); // lwz @ 0x806DA22C
    /* mtctr r12 */ // 0x806DA230
    /* bctrl  */ // 0x806DA234
    /* li r0, 0x10 */ // 0x806DA238
    *(0x2874 + r30) = r0; // stw @ 0x806DA23C
    /* b 0x806da30c */ // 0x806DA240
    /* li r0, 4 */ // 0x806DA244
    *(0x2874 + r30) = r0; // stw @ 0x806DA248
    /* lis r3, 0 */ // 0x806DA24C
    r3 = *(0 + r3); // lwz @ 0x806DA250
    r3 = *(0 + r3); // lwz @ 0x806DA254
    r31 = *(0x148 + r3); // lwz @ 0x806DA258
    if (!=) goto 0x0x806da26c;
    /* li r31, 0 */ // 0x806DA264
    /* b 0x806da2c0 */ // 0x806DA268
    /* lis r29, 0 */ // 0x806DA26C
    r29 = r29 + 0; // 0x806DA270
    if (==) goto 0x0x806da2bc;
    r12 = *(0 + r31); // lwz @ 0x806DA278
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806DA280
    /* mtctr r12 */ // 0x806DA284
    /* bctrl  */ // 0x806DA288
    /* b 0x806da2a4 */ // 0x806DA28C
    if (!=) goto 0x0x806da2a0;
    /* li r0, 1 */ // 0x806DA298
    /* b 0x806da2b0 */ // 0x806DA29C
    r3 = *(0 + r3); // lwz @ 0x806DA2A0
    if (!=) goto 0x0x806da290;
    /* li r0, 0 */ // 0x806DA2AC
    if (==) goto 0x0x806da2bc;
    /* b 0x806da2c0 */ // 0x806DA2B8
    /* li r31, 0 */ // 0x806DA2BC
    r12 = *(0 + r31); // lwz @ 0x806DA2C0
    r3 = r31;
    r12 = *(0x64 + r12); // lwz @ 0x806DA2C8
    /* mtctr r12 */ // 0x806DA2CC
    /* bctrl  */ // 0x806DA2D0
    r12 = *(0 + r31); // lwz @ 0x806DA2D4
    r3 = r31;
    /* li r4, 0x17de */ // 0x806DA2DC
    /* li r5, 0 */ // 0x806DA2E0
    r12 = *(0x68 + r12); // lwz @ 0x806DA2E4
    /* mtctr r12 */ // 0x806DA2E8
    /* bctrl  */ // 0x806DA2EC
    r12 = *(0 + r30); // lwz @ 0x806DA2F0
    r3 = r30;
    /* li r4, 0x50 */ // 0x806DA2F8
    /* li r5, 0 */ // 0x806DA2FC
    r12 = *(0x24 + r12); // lwz @ 0x806DA300
    /* mtctr r12 */ // 0x806DA304
    /* bctrl  */ // 0x806DA308
    r0 = *(0x344 + r1); // lwz @ 0x806DA30C
    r31 = *(0x33c + r1); // lwz @ 0x806DA310
    r30 = *(0x338 + r1); // lwz @ 0x806DA314
    r29 = *(0x334 + r1); // lwz @ 0x806DA318
    return;
}