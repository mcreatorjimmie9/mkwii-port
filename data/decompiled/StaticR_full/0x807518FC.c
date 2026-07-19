/* Function at 0x807518FC, size=388 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31 */
/* Calls: 10 function(s) */

int FUN_807518FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    *(0xac + r1) = r31; // stw @ 0x80751908
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x80751914
    r0 = *(0x5c + r31); // lwz @ 0x8075191C
    *(0x7c + r1) = r0; // stw @ 0x80751924
    /* li r5, 1 */ // 0x80751928
    *(0x78 + r1) = r6; // stw @ 0x8075192C
    r6 = *(0x60 + r31); // lwz @ 0x80751930
    r0 = *(0x64 + r31); // lwz @ 0x80751934
    *(0x84 + r1) = r0; // stw @ 0x80751938
    *(0x80 + r1) = r6; // stw @ 0x8075193C
    r6 = *(0x68 + r31); // lwz @ 0x80751940
    r0 = *(0x6c + r31); // lwz @ 0x80751944
    *(0x8c + r1) = r0; // stw @ 0x80751948
    *(0x88 + r1) = r6; // stw @ 0x8075194C
    r6 = *(0x70 + r31); // lwz @ 0x80751950
    r0 = *(0x74 + r31); // lwz @ 0x80751954
    *(0x94 + r1) = r0; // stw @ 0x80751958
    *(0x90 + r1) = r6; // stw @ 0x8075195C
    r6 = *(0x78 + r31); // lwz @ 0x80751960
    r0 = *(0x7c + r31); // lwz @ 0x80751964
    *(0x9c + r1) = r0; // stw @ 0x80751968
    *(0x98 + r1) = r6; // stw @ 0x8075196C
    r6 = *(0x80 + r31); // lwz @ 0x80751970
    r0 = *(0x84 + r31); // lwz @ 0x80751974
    *(0xa4 + r1) = r0; // stw @ 0x80751978
    *(0xa0 + r1) = r6; // stw @ 0x8075197C
    FUN_805C70D8(); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x80751984
    /* lfs f1, 0(r4) */ // 0x8075198C
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x40(r31) */ // 0x80751998
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r4 = r31 + 0x30; // 0x807519AC
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* li r5, 2 */ // 0x807519C0
    FUN_805C70D8(r5, r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x807519C8
    /* lfs f1, 0(r4) */ // 0x807519D0
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x40(r31) */ // 0x807519DC
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x68(r1) */ // 0x807519FC
    /* lfs f1, 0x6c(r1) */ // 0x80751A04
    r4 = r31 + 0x30; // 0x80751A08
    /* lfs f0, 0x70(r1) */ // 0x80751A0C
    r5 = r31 + 0xf4; // 0x80751A10
    /* stfs f2, 0x84(r1) */ // 0x80751A14
    /* stfs f1, 0x94(r1) */ // 0x80751A18
    /* stfs f0, 0xa4(r1) */ // 0x80751A1C
    FUN_805A4498(r5); // bl 0x805A4498
    r12 = *(0 + r31); // lwz @ 0x80751A24
    r3 = r31;
    r12 = *(0xb4 + r12); // lwz @ 0x80751A2C
    /* mtctr r12 */ // 0x80751A30
    /* bctrl  */ // 0x80751A34
    r12 = *(0 + r3); // lwz @ 0x80751A38
    r5 = r31 + 0x3c; // 0x80751A40
    r12 = *(0x10 + r12); // lwz @ 0x80751A48
    /* mtctr r12 */ // 0x80751A4C
    /* bctrl  */ // 0x80751A50
    /* lfs f2, 0x30(r31) */ // 0x80751A54
    /* lfs f1, 0x34(r31) */ // 0x80751A58
    /* lfs f0, 0x38(r31) */ // 0x80751A5C
    /* stfs f2, 0xf4(r31) */ // 0x80751A60
    /* stfs f1, 0xf8(r31) */ // 0x80751A64
    /* stfs f0, 0xfc(r31) */ // 0x80751A68
    r31 = *(0xac + r1); // lwz @ 0x80751A6C
    r0 = *(0xb4 + r1); // lwz @ 0x80751A70
    return;
}