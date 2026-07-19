/* Function at 0x807F3A60, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807F3A60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807F3A68
    /* lis r5, 0 */ // 0x807F3A6C
    *(0x24 + r1) = r0; // stw @ 0x807F3A70
    /* li r0, 0 */ // 0x807F3A74
    /* lfs f1, 0(r4) */ // 0x807F3A78
    /* li r4, 0 */ // 0x807F3A7C
    *(0x1c + r1) = r31; // stw @ 0x807F3A80
    r31 = r3;
    /* lfs f2, 0(r5) */ // 0x807F3A88
    *(0xb0 + r3) = r0; // stw @ 0x807F3A8C
    r6 = *(8 + r3); // lwz @ 0x807F3A90
    r3 = *(0x28 + r6); // lwz @ 0x807F3A94
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = r31;
    /* li r4, 0 */ // 0x807F3AA0
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r3 = r31;
    FUN_808A1BCC(r3, r4, r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x807F3AB4
    /* li r5, 2 */ // 0x807F3AB8
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 8(r1) */ // 0x807F3AC0
    r3 = r31 + 0xc4; // 0x807F3AC4
    /* stfs f0, 0xc4(r31) */ // 0x807F3AC8
    /* lfs f0, 0xc(r1) */ // 0x807F3ACC
    /* stfs f0, 0xc8(r31) */ // 0x807F3AD0
    /* lfs f0, 0x10(r1) */ // 0x807F3AD4
    /* stfs f0, 0xcc(r31) */ // 0x807F3AD8
    FUN_805E3430(); // bl 0x805E3430
}