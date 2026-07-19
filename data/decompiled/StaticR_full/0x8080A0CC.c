/* Function at 0x8080A0CC, size=164 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080A0CC(int r3, int r4)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8080A0DC
    r31 = r31 + 0; // 0x8080A0E0
    *(0xe8 + r1) = r30; // stw @ 0x8080A0E4
    r30 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f3, 0x58(r30) */ // 0x8080A0F0
    /* lis r3, 0 */ // 0x8080A0F4
    /* stfs f3, 0xb0(r1) */ // 0x8080A0F8
    r4 = r3 + 0; // 0x8080A0FC
    /* lfs f2, 0(r3) */ // 0x8080A100
    /* lfs f3, 0x5c(r30) */ // 0x8080A108
    /* stfs f3, 0xb4(r1) */ // 0x8080A10C
    /* lfs f1, 4(r4) */ // 0x8080A110
    /* lfs f3, 0x60(r30) */ // 0x8080A114
    /* stfs f3, 0xb8(r1) */ // 0x8080A118
    /* lfs f0, 8(r4) */ // 0x8080A11C
    /* lfs f3, 0x64(r30) */ // 0x8080A120
    /* stfs f3, 0xbc(r1) */ // 0x8080A124
    /* lfs f3, 0x68(r30) */ // 0x8080A128
    /* stfs f3, 0xc0(r1) */ // 0x8080A12C
    /* lfs f3, 0x6c(r30) */ // 0x8080A130
    /* stfs f3, 0xc4(r1) */ // 0x8080A134
    /* lfs f3, 0x70(r30) */ // 0x8080A138
    /* stfs f3, 0xc8(r1) */ // 0x8080A13C
    /* lfs f3, 0x74(r30) */ // 0x8080A140
    /* stfs f3, 0xcc(r1) */ // 0x8080A144
    /* lfs f3, 0x78(r30) */ // 0x8080A148
    /* stfs f3, 0xd0(r1) */ // 0x8080A14C
    /* lfs f3, 0x7c(r30) */ // 0x8080A150
    /* stfs f3, 0xd4(r1) */ // 0x8080A154
    /* lfs f3, 0x80(r30) */ // 0x8080A158
    /* stfs f3, 0xd8(r1) */ // 0x8080A15C
    /* stfs f2, 0xbc(r1) */ // 0x8080A160
    /* stfs f1, 0xcc(r1) */ // 0x8080A164
    /* stfs f0, 0xdc(r1) */ // 0x8080A168
    FUN_805E3430(); // bl 0x805E3430
}