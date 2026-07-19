/* Function at 0x8075E940, size=344 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8075E940(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8075E950
    r30 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = *(0xd0 + r30); // lwz @ 0x8075E95C
    /* li r31, 0 */ // 0x8075E960
    r3 = r30;
    r0 = *(0x2c + r4); // lhz @ 0x8075E968
    r0 = r0 | 4; // 0x8075E96C
    *(0x2c + r4) = r0; // sth @ 0x8075E970
    *(0x54 + r4) = r31; // stb @ 0x8075E974
    /* lfs f0, 0x58(r30) */ // 0x8075E978
    /* stfs f0, 0x58(r4) */ // 0x8075E97C
    /* lfs f0, 0x5c(r30) */ // 0x8075E980
    /* stfs f0, 0x5c(r4) */ // 0x8075E984
    /* lfs f0, 0x60(r30) */ // 0x8075E988
    /* stfs f0, 0x60(r4) */ // 0x8075E98C
    /* lfs f0, 0x64(r30) */ // 0x8075E990
    /* stfs f0, 0x64(r4) */ // 0x8075E994
    /* lfs f0, 0x68(r30) */ // 0x8075E998
    /* stfs f0, 0x68(r4) */ // 0x8075E99C
    /* lfs f0, 0x6c(r30) */ // 0x8075E9A0
    /* stfs f0, 0x6c(r4) */ // 0x8075E9A4
    /* lfs f0, 0x70(r30) */ // 0x8075E9A8
    /* stfs f0, 0x70(r4) */ // 0x8075E9AC
    /* lfs f0, 0x74(r30) */ // 0x8075E9B0
    /* stfs f0, 0x74(r4) */ // 0x8075E9B4
    /* lfs f0, 0x78(r30) */ // 0x8075E9B8
    /* stfs f0, 0x78(r4) */ // 0x8075E9BC
    /* lfs f0, 0x7c(r30) */ // 0x8075E9C0
    /* stfs f0, 0x7c(r4) */ // 0x8075E9C4
    /* lfs f0, 0x80(r30) */ // 0x8075E9C8
    /* stfs f0, 0x80(r4) */ // 0x8075E9CC
    /* lfs f0, 0x84(r30) */ // 0x8075E9D0
    /* stfs f0, 0x84(r4) */ // 0x8075E9D4
    /* lfs f0, 0x64(r30) */ // 0x8075E9D8
    /* stfs f0, 0x30(r4) */ // 0x8075E9DC
    /* lfs f0, 0x74(r30) */ // 0x8075E9E0
    /* stfs f0, 0x34(r4) */ // 0x8075E9E4
    /* lfs f0, 0x84(r30) */ // 0x8075E9E8
    /* stfs f0, 0x38(r4) */ // 0x8075E9EC
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = *(0xd4 + r30); // lwz @ 0x8075E9F4
    r0 = *(0x2c + r3); // lhz @ 0x8075E9F8
    r0 = r0 | 4; // 0x8075E9FC
    *(0x2c + r3) = r0; // sth @ 0x8075EA00
    *(0x54 + r3) = r31; // stb @ 0x8075EA04
    /* lfs f0, 0x58(r30) */ // 0x8075EA08
    /* stfs f0, 0x58(r3) */ // 0x8075EA0C
    /* lfs f0, 0x5c(r30) */ // 0x8075EA10
    /* stfs f0, 0x5c(r3) */ // 0x8075EA14
    /* lfs f0, 0x60(r30) */ // 0x8075EA18
    /* stfs f0, 0x60(r3) */ // 0x8075EA1C
    /* lfs f0, 0x64(r30) */ // 0x8075EA20
    /* stfs f0, 0x64(r3) */ // 0x8075EA24
    /* lfs f0, 0x68(r30) */ // 0x8075EA28
    /* stfs f0, 0x68(r3) */ // 0x8075EA2C
    /* lfs f0, 0x6c(r30) */ // 0x8075EA30
    /* stfs f0, 0x6c(r3) */ // 0x8075EA34
    /* lfs f0, 0x70(r30) */ // 0x8075EA38
    /* stfs f0, 0x70(r3) */ // 0x8075EA3C
    /* lfs f0, 0x74(r30) */ // 0x8075EA40
    /* stfs f0, 0x74(r3) */ // 0x8075EA44
    /* lfs f0, 0x78(r30) */ // 0x8075EA48
    /* stfs f0, 0x78(r3) */ // 0x8075EA4C
    /* lfs f0, 0x7c(r30) */ // 0x8075EA50
    /* stfs f0, 0x7c(r3) */ // 0x8075EA54
    /* lfs f0, 0x80(r30) */ // 0x8075EA58
    /* stfs f0, 0x80(r3) */ // 0x8075EA5C
    /* lfs f0, 0x84(r30) */ // 0x8075EA60
    /* stfs f0, 0x84(r3) */ // 0x8075EA64
    /* lfs f0, 0x64(r30) */ // 0x8075EA68
    /* stfs f0, 0x30(r3) */ // 0x8075EA6C
    /* lfs f0, 0x74(r30) */ // 0x8075EA70
    /* stfs f0, 0x34(r3) */ // 0x8075EA74
    /* lfs f0, 0x84(r30) */ // 0x8075EA78
    /* stfs f0, 0x38(r3) */ // 0x8075EA7C
    r31 = *(0xc + r1); // lwz @ 0x8075EA80
    r30 = *(8 + r1); // lwz @ 0x8075EA84
    r0 = *(0x14 + r1); // lwz @ 0x8075EA88
    return;
}