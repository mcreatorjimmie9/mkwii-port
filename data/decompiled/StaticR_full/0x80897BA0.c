/* Function at 0x80897BA0, size=308 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80897BA0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80897BA8
    *(0xc + r1) = r31; // stw @ 0x80897BB0
    *(8 + r1) = r30; // stw @ 0x80897BB4
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x80897BBC
    r3 = *(0x28 + r5); // lwz @ 0x80897BC0
    FUN_805E7060(); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80897BC8
    /* lis r31, 0 */ // 0x80897BCC
    /* lfs f1, 0(r31) */ // 0x80897BD0
    r12 = *(0x1c + r12); // lwz @ 0x80897BD4
    /* mtctr r12 */ // 0x80897BD8
    /* bctrl  */ // 0x80897BDC
    r3 = *(8 + r30); // lwz @ 0x80897BE0
    /* li r4, 0 */ // 0x80897BE4
    r3 = *(0x28 + r3); // lwz @ 0x80897BE8
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80897BF0
    /* lfs f1, 0(r31) */ // 0x80897BF4
    r12 = *(0x10 + r12); // lwz @ 0x80897BF8
    /* mtctr r12 */ // 0x80897BFC
    /* bctrl  */ // 0x80897C00
    r12 = *(0 + r30); // lwz @ 0x80897C04
    r3 = r30;
    /* li r4, 0 */ // 0x80897C0C
    r12 = *(0x12c + r12); // lwz @ 0x80897C10
    /* mtctr r12 */ // 0x80897C14
    /* bctrl  */ // 0x80897C18
    r4 = *(0x2c + r30); // lhz @ 0x80897C1C
    /* li r0, 0 */ // 0x80897C20
    *(0x54 + r30) = r0; // stb @ 0x80897C24
    r0 = r4 | 4; // 0x80897C28
    *(0x2c + r30) = r0; // sth @ 0x80897C2C
    /* lfs f0, 0(r3) */ // 0x80897C30
    /* stfs f0, 0x58(r30) */ // 0x80897C34
    /* lfs f0, 4(r3) */ // 0x80897C38
    /* stfs f0, 0x5c(r30) */ // 0x80897C3C
    /* lfs f0, 8(r3) */ // 0x80897C40
    /* stfs f0, 0x60(r30) */ // 0x80897C44
    /* lfs f0, 0xc(r3) */ // 0x80897C48
    /* stfs f0, 0x64(r30) */ // 0x80897C4C
    /* lfs f0, 0x10(r3) */ // 0x80897C50
    /* stfs f0, 0x68(r30) */ // 0x80897C54
    /* lfs f0, 0x14(r3) */ // 0x80897C58
    /* stfs f0, 0x6c(r30) */ // 0x80897C5C
    /* lfs f0, 0x18(r3) */ // 0x80897C60
    /* stfs f0, 0x70(r30) */ // 0x80897C64
    /* lfs f0, 0x1c(r3) */ // 0x80897C68
    /* stfs f0, 0x74(r30) */ // 0x80897C6C
    /* lfs f0, 0x20(r3) */ // 0x80897C70
    /* stfs f0, 0x78(r30) */ // 0x80897C74
    /* lfs f0, 0x24(r3) */ // 0x80897C78
    /* stfs f0, 0x7c(r30) */ // 0x80897C7C
    /* lfs f0, 0x28(r3) */ // 0x80897C80
    /* stfs f0, 0x80(r30) */ // 0x80897C84
    /* lfs f0, 0x2c(r3) */ // 0x80897C88
    /* stfs f0, 0x84(r30) */ // 0x80897C8C
    /* lfs f0, 0xc(r3) */ // 0x80897C90
    /* stfs f0, 0x30(r30) */ // 0x80897C94
    /* lfs f0, 0x1c(r3) */ // 0x80897C98
    /* stfs f0, 0x34(r30) */ // 0x80897C9C
    /* lfs f0, 0x2c(r3) */ // 0x80897CA0
    r3 = r30;
    /* stfs f0, 0x38(r30) */ // 0x80897CA8
    r12 = *(0 + r30); // lwz @ 0x80897CAC
    r12 = *(0x1c + r12); // lwz @ 0x80897CB0
    /* mtctr r12 */ // 0x80897CB4
    /* bctrl  */ // 0x80897CB8
    r0 = *(0x14 + r1); // lwz @ 0x80897CBC
    r31 = *(0xc + r1); // lwz @ 0x80897CC0
    r30 = *(8 + r1); // lwz @ 0x80897CC4
    return;
}