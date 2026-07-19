/* Function at 0x80739BDC, size=384 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80739BDC(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x98 + r1) = r30; // stw @ 0x80739BEC
    r30 = r3;
    r3 = *(0x118 + r3); // lwz @ 0x80739BF4
    FUN_8061E2BC(); // bl 0x8061E2BC
    FUN_80858EA8(r4); // bl 0x80858EA8
    if (==) goto 0x0x80739c88;
    r4 = r30 + 0x6f4; // 0x80739C10
    /* li r5, 1 */ // 0x80739C14
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x50(r1) */ // 0x80739C1C
    /* lfs f1, 0x54(r1) */ // 0x80739C24
    r4 = r30 + 0x6f4; // 0x80739C28
    /* lfs f0, 0x58(r1) */ // 0x80739C2C
    /* li r5, 2 */ // 0x80739C30
    /* stfs f2, 0x60(r1) */ // 0x80739C34
    /* stfs f1, 0x70(r1) */ // 0x80739C38
    /* stfs f0, 0x80(r1) */ // 0x80739C3C
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x44(r1) */ // 0x80739C44
    /* lfs f1, 0x48(r1) */ // 0x80739C4C
    r4 = r30 + 0x6f4; // 0x80739C50
    /* lfs f0, 0x4c(r1) */ // 0x80739C54
    /* li r5, 0 */ // 0x80739C58
    /* stfs f2, 0x64(r1) */ // 0x80739C5C
    /* stfs f1, 0x74(r1) */ // 0x80739C60
    /* stfs f0, 0x84(r1) */ // 0x80739C64
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x80739C6C
    /* lfs f1, 0x3c(r1) */ // 0x80739C70
    /* lfs f0, 0x40(r1) */ // 0x80739C74
    /* stfs f2, 0x68(r1) */ // 0x80739C78
    /* stfs f1, 0x78(r1) */ // 0x80739C7C
    /* stfs f0, 0x88(r1) */ // 0x80739C80
    /* b 0x80739d28 */ // 0x80739C84
    r4 = r30 + 0x6f4; // 0x80739C8C
    /* li r5, 1 */ // 0x80739C90
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x80739C98
    /* lfs f1, 0x30(r1) */ // 0x80739CA0
    r4 = r30 + 0x6f4; // 0x80739CA4
    /* lfs f0, 0x34(r1) */ // 0x80739CA8
    /* li r5, 2 */ // 0x80739CAC
    /* stfs f2, 0x60(r1) */ // 0x80739CB0
    /* stfs f1, 0x70(r1) */ // 0x80739CB4
    /* stfs f0, 0x80(r1) */ // 0x80739CB8
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x20(r1) */ // 0x80739CC0
    /* lfs f1, 0x24(r1) */ // 0x80739CC8
    r4 = r30 + 0x6f4; // 0x80739CCC
    /* lfs f0, 0x28(r1) */ // 0x80739CD0
    /* li r5, 0 */ // 0x80739CD4
    /* stfs f2, 0x64(r1) */ // 0x80739CD8
    /* stfs f1, 0x74(r1) */ // 0x80739CDC
    /* stfs f0, 0x84(r1) */ // 0x80739CE0
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x14(r1) */ // 0x80739CE8
    /* lfs f1, 0x18(r1) */ // 0x80739CF0
    r4 = r30 + 0x6f4; // 0x80739CF4
    /* lfs f0, 0x1c(r1) */ // 0x80739CF8
    /* li r5, 3 */ // 0x80739CFC
    /* stfs f2, 0x68(r1) */ // 0x80739D00
    /* stfs f1, 0x78(r1) */ // 0x80739D04
    /* stfs f0, 0x88(r1) */ // 0x80739D08
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80739D10
    /* lfs f1, 0xc(r1) */ // 0x80739D14
    /* lfs f0, 0x10(r1) */ // 0x80739D18
    /* stfs f2, 0x6c(r1) */ // 0x80739D1C
    /* stfs f1, 0x7c(r1) */ // 0x80739D20
    /* stfs f0, 0x8c(r1) */ // 0x80739D24
    r31 = *(0x220 + r30); // lwz @ 0x80739D28
    if (==) goto 0x0x80739dc0;
    r3 = r31 + 0x74; // 0x80739D34
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80739d4c;
    /* li r3, 0 */ // 0x80739D44
    /* b 0x80739d50 */ // 0x80739D48
    r3 = *(0xc + r3); // lwz @ 0x80739D4C
    /* li r0, 0 */ // 0x80739D54
    if (==) goto 0x0x80739d64;
}