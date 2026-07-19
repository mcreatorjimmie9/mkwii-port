/* Function at 0x80778054, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80778054(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8077805C
    *(0x24 + r1) = r0; // stw @ 0x80778060
    *(0x1c + r1) = r31; // stw @ 0x80778064
    r31 = r3;
    r0 = *(0x2c + r3); // lhz @ 0x8077806C
    /* lfs f2, 0xf4(r3) */ // 0x80778070
    /* lfs f1, 0xf8(r3) */ // 0x80778074
    r0 = r0 | 1; // 0x80778078
    /* lfs f0, 0xfc(r3) */ // 0x8077807C
    /* stfs f2, 0x530(r3) */ // 0x80778080
    /* stfs f1, 0x534(r3) */ // 0x80778084
    /* stfs f0, 0x538(r3) */ // 0x80778088
    *(0x2c + r3) = r0; // sth @ 0x8077808C
    /* stfs f2, 0x30(r3) */ // 0x80778090
    /* stfs f1, 0x34(r3) */ // 0x80778094
    /* stfs f0, 0x38(r3) */ // 0x80778098
    r3 = *(0 + r4); // lwz @ 0x8077809C
    r3 = *(4 + r3); // lwz @ 0x807780A0
    FUN_805E36A8(); // bl 0x805E36A8
    /* lis r3, 0 */ // 0x807780A8
    /* lfs f0, 0(r3) */ // 0x807780AC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807780B0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807780B4
    if (!=) goto 0x0x807780d8;
    /* lfs f2, 0x124(r31) */ // 0x807780BC
    /* lfs f1, 0x128(r31) */ // 0x807780C0
    /* lfs f0, 0x12c(r31) */ // 0x807780C4
    /* stfs f2, 0x53c(r31) */ // 0x807780C8
    /* stfs f1, 0x540(r31) */ // 0x807780CC
    /* stfs f0, 0x544(r31) */ // 0x807780D0
    /* b 0x807780fc */ // 0x807780D4
    r4 = r31 + 0x124; // 0x807780DC
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f0, 8(r1) */ // 0x807780E4
    /* stfs f0, 0x53c(r31) */ // 0x807780E8
    /* lfs f0, 0xc(r1) */ // 0x807780EC
    /* stfs f0, 0x540(r31) */ // 0x807780F0
    /* lfs f0, 0x10(r1) */ // 0x807780F4
    /* stfs f0, 0x544(r31) */ // 0x807780F8
    /* li r0, 0 */ // 0x807780FC
    *(0x548 + r31) = r0; // sth @ 0x80778100
    r31 = *(0x1c + r1); // lwz @ 0x80778104
    r0 = *(0x24 + r1); // lwz @ 0x80778108
    return;
}