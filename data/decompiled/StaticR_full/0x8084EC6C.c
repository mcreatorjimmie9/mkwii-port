/* Function at 0x8084EC6C, size=264 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8084EC6C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x8084EC80
    *(0x44 + r1) = r29; // stw @ 0x8084EC84
    r0 = *(0x2e4 + r3); // lwz @ 0x8084EC88
    if (==) goto 0x0x8084ee64;
    r3 = *(0x6c + r3); // lwz @ 0x8084EC94
    /* li r4, 0 */ // 0x8084EC98
    r3 = *(0x28 + r3); // lwz @ 0x8084EC9C
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084ECA4
    if (==) goto 0x0x8084ed34;
    r3 = *(0x6c + r31); // lwz @ 0x8084ECB0
    /* li r4, 0 */ // 0x8084ECB4
    r3 = *(0x28 + r3); // lwz @ 0x8084ECB8
    FUN_805E6F54(r4); // bl 0x805E6F54
    r30 = *(0xc + r3); // lwz @ 0x8084ECC0
    /* li r29, 0 */ // 0x8084ECC4
    if (==) goto 0x0x8084ed00;
    /* lis r4, 0 */ // 0x8084ECD0
    r3 = r30;
    r4 = r4 + 0; // 0x8084ECD8
    *(0xc + r1) = r4; // stw @ 0x8084ECDC
    r12 = *(0 + r30); // lwz @ 0x8084ECE4
    r12 = *(8 + r12); // lwz @ 0x8084ECE8
    /* mtctr r12 */ // 0x8084ECEC
    /* bctrl  */ // 0x8084ECF0
    if (==) goto 0x0x8084ed00;
    /* li r29, 1 */ // 0x8084ECFC
    if (==) goto 0x0x8084ed0c;
    /* b 0x8084ed10 */ // 0x8084ED08
    /* li r30, 0 */ // 0x8084ED0C
    r0 = *(0x2c + r30); // lwz @ 0x8084ED10
    /* lis r3, 0 */ // 0x8084ED14
    *(8 + r1) = r0; // stw @ 0x8084ED18
    /* lfs f1, 0(r3) */ // 0x8084ED20
    /* li r4, 0 */ // 0x8084ED24
    r3 = *(0x108 + r31); // lwz @ 0x8084ED28
    /* li r5, 0 */ // 0x8084ED2C
    FUN_808504CC(r6, r4, r5); // bl 0x808504CC
    r3 = r31;
    /* li r4, 1 */ // 0x8084ED38
    FUN_808565B8(r5, r3, r4); // bl 0x808565B8
    r3 = r31;
    FUN_8061DF18(r3, r4, r3); // bl 0x8061DF18
    r30 = r3;
    r3 = r3 + 0x1c8; // 0x8084ED4C
    r4 = r31 + 0x600; // 0x8084ED50
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30 + 0x1f8; // 0x8084ED58
    r4 = r31 + 0x630; // 0x8084ED5C
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
    r4 = *(0x104 + r31); // lwz @ 0x8084ED64
    r3 = r31 + 0x114; // 0x8084ED68
    r5 = r31 + 0x5a0; // 0x8084ED6C
    r4 = r4 + 0x3e4; // 0x8084ED70
}