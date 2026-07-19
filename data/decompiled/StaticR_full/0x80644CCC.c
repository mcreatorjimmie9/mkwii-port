/* Function at 0x80644CCC, size=584 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 19 function(s) */

int FUN_80644CCC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x80644CE0
    /* lis r30, 0 */ // 0x80644CE4
    r30 = r30 + 0; // 0x80644CE8
    FUN_806464D4(); // bl 0x806464D4
    r4 = *(0 + r31); // lwz @ 0x80644CF0
    /* lis r3, 0 */ // 0x80644CF4
    /* lfs f0, 0(r3) */ // 0x80644CF8
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x80644D00
    /* lfs f1, 0x3c(r30) */ // 0x80644D04
    /* lfs f2, 0x88(r4) */ // 0x80644D08
    /* stfs f0, 0x18(r1) */ // 0x80644D0C
    /* fmuls f1, f1, f2 */ // 0x80644D10
    /* stfs f0, 0x20(r1) */ // 0x80644D14
    /* stfs f1, 0x1c(r1) */ // 0x80644D18
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f2, 0xe4(r3) */ // 0x80644D20
    /* lfs f0, 0x18(r1) */ // 0x80644D24
    /* lfs f1, 0x1c(r1) */ // 0x80644D28
    /* fadds f2, f2, f0 */ // 0x80644D2C
    /* lfs f0, 0x20(r1) */ // 0x80644D30
    /* stfs f2, 0xe4(r3) */ // 0x80644D34
    /* lfs f2, 0xe8(r3) */ // 0x80644D38
    /* fadds f1, f2, f1 */ // 0x80644D3C
    /* stfs f1, 0xe8(r3) */ // 0x80644D40
    /* lfs f1, 0xec(r3) */ // 0x80644D44
    /* fadds f0, f1, f0 */ // 0x80644D48
    /* stfs f0, 0xec(r3) */ // 0x80644D4C
    r3 = r31;
    FUN_80645324(r3); // bl 0x80645324
    r3 = *(0x16 + r31); // lha @ 0x80644D58
    r0 = *(0x1a + r30); // lha @ 0x80644D5C
    if (==) goto 0x0x80644d74;
    r0 = *(0x1c + r30); // lha @ 0x80644D68
    if (!=) goto 0x0x80644de4;
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80644D7C
    /* clrlwi r0, r3, 0x18 */ // 0x80644D80
    r4 = *(0 + r4); // lwz @ 0x80644D84
    /* lis r3, 0 */ // 0x80644D88
    /* mulli r0, r0, 0x248 */ // 0x80644D8C
    r3 = *(0 + r3); // lwz @ 0x80644D90
    r6 = *(0x14 + r4); // lwz @ 0x80644D94
    /* li r5, 0 */ // 0x80644D9C
    r6 = r6 + r0; // 0x80644DA0
    r0 = *(0x44 + r6); // lbz @ 0x80644DA4
    *(8 + r1) = r0; // stb @ 0x80644DA8
    FUN_805A7E1C(r4, r5); // bl 0x805A7E1C
    r4 = *(0x10 + r31); // lbz @ 0x80644DB0
    r0 = *(8 + r1); // lbz @ 0x80644DB4
    if (==) goto 0x0x80644de4;
    /* clrlwi r0, r3, 0x18 */ // 0x80644DC0
    if (==) goto 0x0x80644de4;
    /* li r0, 0xff */ // 0x80644DCC
    *(0x11 + r31) = r0; // stb @ 0x80644DD0
    r3 = r31;
    r4 = *(8 + r1); // lbz @ 0x80644DD8
    *(0x10 + r31) = r4; // stb @ 0x80644DDC
    FUN_8064635C(r3); // bl 0x8064635C
    r3 = *(0 + r31); // lwz @ 0x80644DE4
    r3 = *(4 + r3); // lwz @ 0x80644DE8
    r0 = *(8 + r3); // lwz @ 0x80644DEC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80644DF0
    if (!=) goto 0x0x80644e64;
    r3 = r31;
    FUN_806454D4(r3); // bl 0x806454D4
    r0 = *(0x3d + r31); // lbz @ 0x80644E00
    if (==) goto 0x0x80644e54;
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lis r4, 0 */ // 0x80644E14
    /* li r0, 1 */ // 0x80644E18
    /* lfs f0, 0(r4) */ // 0x80644E1C
    *(0x171 + r3) = r0; // stb @ 0x80644E20
    r3 = r31;
    /* stfs f0, 0xc(r1) */ // 0x80644E28
    /* stfs f0, 0x10(r1) */ // 0x80644E2C
    /* stfs f0, 0x14(r1) */ // 0x80644E30
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0xc(r1) */ // 0x80644E38
    /* stfs f0, 0x74(r3) */ // 0x80644E3C
    /* lfs f0, 0x10(r1) */ // 0x80644E40
    /* stfs f0, 0x78(r3) */ // 0x80644E44
    /* lfs f0, 0x14(r1) */ // 0x80644E48
    /* stfs f0, 0x7c(r3) */ // 0x80644E4C
    /* b 0x80644e64 */ // 0x80644E50
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* li r0, 0 */ // 0x80644E5C
    *(0x171 + r3) = r0; // stb @ 0x80644E60
    /* lis r4, 0 */ // 0x80644E64
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80644E6C
    /* li r4, 0x16 */ // 0x80644E70
    /* li r5, 1 */ // 0x80644E74
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r4 = *(0x12 + r31); // lha @ 0x80644E7C
    r3 = r31;
    r0 = r4 + 1; // 0x80644E84
    *(0x12 + r31) = r0; // sth @ 0x80644E88
    FUN_806466E0(r3); // bl 0x806466E0
    r3 = r31;
    FUN_80645CE8(r3, r3); // bl 0x80645CE8
    r0 = *(0x3e + r31); // lbz @ 0x80644E98
    if (==) goto 0x0x80644ed8;
    r3 = r31;
    FUN_80646D64(r3); // bl 0x80646D64
    if (==) goto 0x0x80644ed8;
    r3 = r31;
    FUN_806451A0(r3, r3); // bl 0x806451A0
    r3 = r31;
    FUN_8061E0C8(r3, r3); // bl 0x8061E0C8
    /* li r4, 0 */ // 0x80644EC4
    /* li r5, 0 */ // 0x80644EC8
    /* li r6, 1 */ // 0x80644ECC
    FUN_80603114(r3, r4, r5, r6); // bl 0x80603114
    /* b 0x80644efc */ // 0x80644ED4
    r3 = r31;
    FUN_80645910(r5, r6, r3); // bl 0x80645910
    if (!=) goto 0x0x80644ef4;
    r0 = *(0x31 + r31); // lbz @ 0x80644EE8
    if (==) goto 0x0x80644efc;
    r3 = r31;
    FUN_806451A0(r3); // bl 0x806451A0
    r0 = *(0x34 + r1); // lwz @ 0x80644EFC
    r31 = *(0x2c + r1); // lwz @ 0x80644F00
    r30 = *(0x28 + r1); // lwz @ 0x80644F04
    return;
}