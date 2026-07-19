/* Function at 0x8063DCCC, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8063DCCC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8063DCDC
    r31 = r31 + 0; // 0x8063DCE0
    /* lfs f2, 0(r31) */ // 0x8063DCE4
    *(8 + r1) = r30; // stw @ 0x8063DCE8
    r30 = r3;
    /* fmr f3, f2 */ // 0x8063DCF0
    /* lfs f1, 4(r31) */ // 0x8063DCF4
    /* fmr f4, f2 */ // 0x8063DCF8
    /* stfs f2, 0x70(r3) */ // 0x8063DCFC
    /* stfs f2, 0x6c(r3) */ // 0x8063DD00
    /* stfs f2, 0x68(r3) */ // 0x8063DD04
    /* stfs f2, 0x7c(r3) */ // 0x8063DD08
    /* stfs f2, 0x78(r3) */ // 0x8063DD0C
    /* stfs f2, 0x74(r3) */ // 0x8063DD10
    /* stfs f2, 0x88(r3) */ // 0x8063DD14
    /* stfs f2, 0x84(r3) */ // 0x8063DD18
    /* stfs f2, 0x80(r3) */ // 0x8063DD1C
    /* stfs f2, 0x94(r3) */ // 0x8063DD20
    /* stfs f2, 0x90(r3) */ // 0x8063DD24
    /* stfs f2, 0x8c(r3) */ // 0x8063DD28
    /* stfs f2, 0xa0(r3) */ // 0x8063DD2C
    /* stfs f2, 0x9c(r3) */ // 0x8063DD30
    /* stfs f2, 0x98(r3) */ // 0x8063DD34
    /* stfs f2, 0xac(r3) */ // 0x8063DD38
    /* stfs f2, 0xa8(r3) */ // 0x8063DD3C
    /* stfs f2, 0xa4(r3) */ // 0x8063DD40
    /* stfs f2, 0xb8(r3) */ // 0x8063DD44
    /* stfs f2, 0xb4(r3) */ // 0x8063DD48
    /* stfs f2, 0xb0(r3) */ // 0x8063DD4C
    /* stfs f2, 0xc4(r3) */ // 0x8063DD50
    /* stfs f2, 0xc0(r3) */ // 0x8063DD54
    /* stfs f2, 0xbc(r3) */ // 0x8063DD58
    /* stfs f2, 0xd0(r3) */ // 0x8063DD5C
    /* stfs f2, 0xcc(r3) */ // 0x8063DD60
    /* stfs f2, 0xc8(r3) */ // 0x8063DD64
    /* stfs f2, 0xdc(r3) */ // 0x8063DD68
    /* stfs f2, 0xd8(r3) */ // 0x8063DD6C
    /* stfs f2, 0xd4(r3) */ // 0x8063DD70
    /* stfs f2, 0xe0(r3) */ // 0x8063DD74
    /* stfs f2, 0xec(r3) */ // 0x8063DD78
    /* stfs f2, 0xe8(r3) */ // 0x8063DD7C
    /* stfs f2, 0xe4(r3) */ // 0x8063DD80
    r3 = r3 + 0xf0; // 0x8063DD84
    FUN_805E3430(r3); // bl 0x805E3430
}