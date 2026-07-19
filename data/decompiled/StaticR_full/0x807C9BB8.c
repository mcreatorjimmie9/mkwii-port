/* Function at 0x807C9BB8, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807C9BB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807C9BC8
    r31 = r31 + 0; // 0x807C9BCC
    *(0x18 + r1) = r30; // stw @ 0x807C9BD0
    /* lis r30, 0 */ // 0x807C9BD4
    r30 = r30 + 0; // 0x807C9BD8
    *(0x14 + r1) = r29; // stw @ 0x807C9BDC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807C9BE4
    r28 = r3;
    r3 = *(4 + r3); // lwz @ 0x807C9BEC
    FUN_807ABA8C(); // bl 0x807ABA8C
    r3 = *(4 + r28); // lwz @ 0x807C9BF4
    /* li r4, 0 */ // 0x807C9BF8
    /* lfs f1, 0x3c(r31) */ // 0x807C9BFC
    FUN_807ABDF8(r4); // bl 0x807ABDF8
    r3 = *(4 + r28); // lwz @ 0x807C9C04
    /* li r4, 1 */ // 0x807C9C08
    /* lfs f1, 0x3c(r31) */ // 0x807C9C0C
    FUN_807ABDF8(r4); // bl 0x807ABDF8
    /* lfs f0, 0(r30) */ // 0x807C9C14
    /* li r0, 0 */ // 0x807C9C1C
    *(8 + r28) = r0; // stw @ 0x807C9C20
    *(0xc + r28) = r0; // stw @ 0x807C9C24
    *(0x10 + r28) = r0; // stb @ 0x807C9C28
    *(0x11 + r28) = r0; // stb @ 0x807C9C2C
    /* stfs f0, 0x14(r28) */ // 0x807C9C30
    if (==) goto 0x0x807c9c40;
    /* lfs f0, 0x24(r31) */ // 0x807C9C38
    /* b 0x807c9c44 */ // 0x807C9C3C
    /* lfs f0, 0x1c(r31) */ // 0x807C9C40
    /* stfs f0, 0x58(r28) */ // 0x807C9C48
    if (==) goto 0x0x807c9c58;
    /* lfs f1, 0x28(r31) */ // 0x807C9C50
    /* b 0x807c9c5c */ // 0x807C9C54
    /* lfs f1, 0x20(r31) */ // 0x807C9C58
    /* lfs f0, 0(r30) */ // 0x807C9C5C
    /* stfs f1, 0x5c(r28) */ // 0x807C9C64
    /* stfs f0, 0x6c(r28) */ // 0x807C9C68
    /* stfs f0, 0x68(r28) */ // 0x807C9C6C
    /* stfs f0, 0x74(r28) */ // 0x807C9C70
    /* stfs f0, 0x70(r28) */ // 0x807C9C74
    /* stfs f0, 0x7c(r28) */ // 0x807C9C78
    /* stfs f0, 0x78(r28) */ // 0x807C9C7C
    r3 = *(0xa + r31); // lhz @ 0x807C9C80
    if (==) goto 0x0x807c9c8c;
    r3 = *(0xc + r31); // lhz @ 0x807C9C88
    /* li r0, 0 */ // 0x807C9C8C
    *(0x80 + r28) = r3; // sth @ 0x807C9C90
    /* lis r6, 0 */ // 0x807C9C94
    /* lis r4, 0 */ // 0x807C9C98
    *(0x82 + r28) = r29; // stb @ 0x807C9C9C
    r5 = r6 + 0; // 0x807C9CA0
    r3 = r4 + 0; // 0x807C9CA4
    *(0x84 + r28) = r0; // stw @ 0x807C9CAC
    /* lfs f1, 0(r30) */ // 0x807C9CB0
    *(0x88 + r28) = r0; // stw @ 0x807C9CB4
    /* lfs f0, 4(r30) */ // 0x807C9CB8
    *(0x8c + r28) = r0; // stw @ 0x807C9CBC
    /* lfs f4, 0(r6) */ // 0x807C9CC0
    /* stfs f4, 0x24(r28) */ // 0x807C9CC4
    /* lfs f3, 4(r5) */ // 0x807C9CC8
    /* stfs f3, 0x28(r28) */ // 0x807C9CCC
    /* lfs f2, 8(r5) */ // 0x807C9CD0
    /* stfs f2, 0x2c(r28) */ // 0x807C9CD4
    /* stfs f4, 0x18(r28) */ // 0x807C9CD8
    /* stfs f3, 0x1c(r28) */ // 0x807C9CDC
    /* stfs f2, 0x20(r28) */ // 0x807C9CE0
    /* lfs f2, 0(r4) */ // 0x807C9CE4
    /* stfs f2, 0x30(r28) */ // 0x807C9CE8
    /* lfs f2, 4(r3) */ // 0x807C9CEC
    /* stfs f2, 0x34(r28) */ // 0x807C9CF0
    /* lfs f2, 8(r3) */ // 0x807C9CF4
    /* stfs f2, 0x38(r28) */ // 0x807C9CF8
    /* stfs f1, 0x3c(r28) */ // 0x807C9CFC
    /* stfs f0, 0x40(r28) */ // 0x807C9D00
    if (==) goto 0x0x807c9d1c;
    /* lfs f1, 0x24(r31) */ // 0x807C9D08
    /* lfs f0, 8(r30) */ // 0x807C9D0C
    /* fmuls f1, f0, f1 */ // 0x807C9D10
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x807c9d2c */ // 0x807C9D18
    /* lfs f1, 0x1c(r31) */ // 0x807C9D1C
    /* lfs f0, 8(r30) */ // 0x807C9D20
    /* fmuls f1, f0, f1 */ // 0x807C9D24
}