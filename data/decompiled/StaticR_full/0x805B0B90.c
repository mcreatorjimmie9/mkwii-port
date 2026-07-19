/* Function at 0x805B0B90, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B0B90(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805B0B98
    /* lis r11, 0 */ // 0x805B0B9C
    *(0x24 + r1) = r0; // stw @ 0x805B0BA0
    /* lis r7, 0 */ // 0x805B0BA4
    /* lfs f1, 0(r4) */ // 0x805B0BA8
    /* lis r4, 0 */ // 0x805B0BAC
    *(0x1c + r1) = r31; // stw @ 0x805B0BB0
    /* li r10, 7 */ // 0x805B0BB4
    /* lfs f0, 0(r4) */ // 0x805B0BB8
    /* lis r4, 0 */ // 0x805B0BBC
    *(0x18 + r1) = r30; // stw @ 0x805B0BC0
    /* li r30, 0 */ // 0x805B0BC4
    r7 = r7 + 0; // 0x805B0BCC
    *(0x14 + r1) = r29; // stw @ 0x805B0BD0
    r4 = r4 + 0; // 0x805B0BD4
    /* li r31, -1 */ // 0x805B0BD8
    r29 = r3;
    r5 = *(0x88 + r3); // lbz @ 0x805B0BE0
    r0 = *(0xbc + r3); // lbz @ 0x805B0BE4
    r6 = r5 rlwinm 0; // rlwinm
    r9 = *(0x3c + r3); // lbz @ 0x805B0BEC
    r8 = *(0x54 + r3); // lbz @ 0x805B0BF0
    r0 = r0 rlwinm 0; // rlwinm
    r9 = r9 rlwinm 0; // rlwinm
    *(0 + r3) = r4; // stw @ 0x805B0BFC
    r8 = r8 rlwinm 0; // rlwinm
    /* li r4, 0 */ // 0x805B0C04
    *(4 + r3) = r30; // stw @ 0x805B0C08
    /* li r5, 6 */ // 0x805B0C0C
    *(0x1c + r3) = r31; // stb @ 0x805B0C10
    *(0x28 + r3) = r11; // stw @ 0x805B0C14
    *(0x2c + r3) = r30; // sth @ 0x805B0C18
    *(0x2e + r3) = r30; // sth @ 0x805B0C1C
    /* stfs f1, 0x34(r3) */ // 0x805B0C20
    /* stfs f1, 0x30(r3) */ // 0x805B0C24
    *(0x38 + r3) = r10; // stb @ 0x805B0C28
    *(0x39 + r3) = r10; // stb @ 0x805B0C2C
    *(0x3a + r3) = r30; // stb @ 0x805B0C30
    *(0x3b + r3) = r30; // stb @ 0x805B0C34
    *(0x3c + r3) = r9; // stb @ 0x805B0C38
    *(0x40 + r3) = r11; // stw @ 0x805B0C3C
    *(0x44 + r3) = r30; // sth @ 0x805B0C40
    *(0x46 + r3) = r30; // sth @ 0x805B0C44
    /* stfs f1, 0x4c(r3) */ // 0x805B0C48
    /* stfs f1, 0x48(r3) */ // 0x805B0C4C
    *(0x50 + r3) = r10; // stb @ 0x805B0C50
    *(0x51 + r3) = r10; // stb @ 0x805B0C54
    *(0x52 + r3) = r30; // stb @ 0x805B0C58
    *(0x53 + r3) = r30; // stb @ 0x805B0C5C
    *(0x54 + r3) = r8; // stb @ 0x805B0C60
    *(0x58 + r3) = r7; // stw @ 0x805B0C64
    *(0x5c + r3) = r30; // sth @ 0x805B0C68
    *(0x5e + r3) = r30; // sth @ 0x805B0C6C
    /* stfs f1, 0x64(r3) */ // 0x805B0C70
    /* stfs f1, 0x60(r3) */ // 0x805B0C74
    *(0x70 + r3) = r10; // stb @ 0x805B0C78
    *(0x71 + r3) = r10; // stb @ 0x805B0C7C
    /* stfs f0, 0x74(r3) */ // 0x805B0C80
    /* stfs f0, 0x78(r3) */ // 0x805B0C84
    /* stfs f1, 0x80(r3) */ // 0x805B0C88
    /* stfs f1, 0x7c(r3) */ // 0x805B0C8C
    /* stfs f1, 0x84(r3) */ // 0x805B0C90
    *(0x88 + r3) = r6; // stb @ 0x805B0C94
    *(0x8c + r3) = r7; // stw @ 0x805B0C98
    *(0x90 + r3) = r30; // sth @ 0x805B0C9C
    *(0x92 + r3) = r30; // sth @ 0x805B0CA0
    /* stfs f1, 0x98(r3) */ // 0x805B0CA4
    /* stfs f1, 0x94(r3) */ // 0x805B0CA8
    *(0xa4 + r3) = r10; // stb @ 0x805B0CAC
    *(0xa5 + r3) = r10; // stb @ 0x805B0CB0
    /* stfs f0, 0xa8(r3) */ // 0x805B0CB4
    /* stfs f0, 0xac(r3) */ // 0x805B0CB8
    /* stfs f1, 0xb4(r3) */ // 0x805B0CBC
    /* stfs f1, 0xb0(r3) */ // 0x805B0CC0
    /* stfs f1, 0xb8(r3) */ // 0x805B0CC4
    *(0xbc + r3) = r0; // stb @ 0x805B0CC8
    *(0xc0 + r3) = r30; // sth @ 0x805B0CCC
    r3 = r3 + 0xcc; // 0x805B0CD0
    FUN_805E3430(r3); // bl 0x805E3430
}