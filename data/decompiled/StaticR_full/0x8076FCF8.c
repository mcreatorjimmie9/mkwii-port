/* Function at 0x8076FCF8, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8076FCF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8076FD04
    r31 = r3;
    r5 = *(6 + r3); // lhz @ 0x8076FD0C
    /* stfs f1, 0x40(r3) */ // 0x8076FD10
    r0 = r5 + -1; // 0x8076FD14
    if (!=) goto 0x0x8076fd54;
    r0 = *(0xc + r3); // lbz @ 0x8076FD20
    /* extsh r5, r4 */ // 0x8076FD24
    r5 = r5 + -1; // 0x8076FD28
    *(0x46 + r3) = r4; // sth @ 0x8076FD2C
    *(0x48 + r3) = r5; // sth @ 0x8076FD34
    if (==) goto 0x0x8076fd48;
    /* li r0, 0 */ // 0x8076FD3C
    *(0x44 + r3) = r0; // stb @ 0x8076FD40
    /* b 0x8076fd6c */ // 0x8076FD44
    /* li r0, 1 */ // 0x8076FD48
    *(0x44 + r3) = r0; // stb @ 0x8076FD4C
    /* b 0x8076fd6c */ // 0x8076FD50
    /* extsh r5, r4 */ // 0x8076FD54
    /* li r0, 1 */ // 0x8076FD58
    r5 = r5 + 1; // 0x8076FD5C
    *(0x46 + r3) = r4; // sth @ 0x8076FD60
    *(0x48 + r3) = r5; // sth @ 0x8076FD64
    *(0x44 + r3) = r0; // stb @ 0x8076FD68
    r0 = *(0x46 + r3); // lha @ 0x8076FD6C
    r6 = *(8 + r3); // lwz @ 0x8076FD70
    /* slwi r4, r0, 4 */ // 0x8076FD74
    r0 = *(0x48 + r31); // lha @ 0x8076FD78
    /* lfsx f0, r6, r4 */ // 0x8076FD7C
    r5 = r6 + r4; // 0x8076FD80
    /* stfs f0, 0x18(r3) */ // 0x8076FD84
    /* slwi r0, r0, 4 */ // 0x8076FD88
    r4 = r6 + r0; // 0x8076FD8C
    /* lfs f0, 4(r5) */ // 0x8076FD90
    /* stfs f0, 0x1c(r3) */ // 0x8076FD94
    /* lfs f0, 8(r5) */ // 0x8076FD98
    /* stfs f0, 0x20(r3) */ // 0x8076FD9C
    FUN_805A4498(r3); // bl 0x805A4498
    /* lfs f2, 8(r1) */ // 0x8076FDA8
    r3 = r31 + 0x24; // 0x8076FDAC
    /* stfs f2, 0x4c(r31) */ // 0x8076FDB0
    /* lfs f1, 0xc(r1) */ // 0x8076FDB4
    /* stfs f1, 0x50(r31) */ // 0x8076FDB8
    /* lfs f0, 0x10(r1) */ // 0x8076FDBC
    /* stfs f0, 0x54(r31) */ // 0x8076FDC0
    /* stfs f2, 0x24(r31) */ // 0x8076FDC4
    /* stfs f1, 0x28(r31) */ // 0x8076FDC8
    /* stfs f0, 0x2c(r31) */ // 0x8076FDCC
    FUN_805E3430(); // bl 0x805E3430
}