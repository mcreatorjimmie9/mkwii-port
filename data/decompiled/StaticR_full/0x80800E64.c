/* Function at 0x80800E64, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80800E64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80800E74
    r4 = r31 + 0; // 0x80800E78
    *(0x18 + r1) = r30; // stw @ 0x80800E7C
    /* lis r30, 0 */ // 0x80800E80
    r30 = r30 + 0; // 0x80800E84
    *(0x14 + r1) = r29; // stw @ 0x80800E88
    /* lis r29, 0 */ // 0x80800E8C
    r29 = r29 + 0; // 0x80800E90
    r3 = r30 + 0x10; // 0x80800E94
    /* lfs f2, 0(r29) */ // 0x80800E98
    r5 = r30 + 4; // 0x80800E9C
    /* lfs f1, 0xcc(r29) */ // 0x80800EA0
    /* lfs f0, 0xc(r29) */ // 0x80800EA4
    /* stfs f2, 0x10(r30) */ // 0x80800EA8
    /* stfs f1, 4(r3) */ // 0x80800EAC
    /* stfs f0, 8(r3) */ // 0x80800EB0
    FUN_8091EFA4(); // bl 0x8091EFA4
    /* lfs f1, 0(r29) */ // 0x80800EB8
    r3 = r30 + 0x28; // 0x80800EBC
    /* lfs f0, 0xcc(r29) */ // 0x80800EC0
    r4 = r31 + 0; // 0x80800EC4
    /* stfs f1, 0x28(r30) */ // 0x80800EC8
    r5 = r30 + 0x1c; // 0x80800ECC
    /* stfs f0, 4(r3) */ // 0x80800ED0
    /* stfs f1, 8(r3) */ // 0x80800ED4
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r29) */ // 0x80800EDC
    r3 = r30 + 0x40; // 0x80800EE0
    /* lfs f0, 8(r29) */ // 0x80800EE4
    r4 = r31 + 0; // 0x80800EE8
    /* stfs f1, 0x40(r30) */ // 0x80800EEC
    r5 = r30 + 0x34; // 0x80800EF0
    /* stfs f0, 4(r3) */ // 0x80800EF4
    /* stfs f1, 8(r3) */ // 0x80800EF8
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f0, 0(r29) */ // 0x80800F00
    r3 = r30 + 0x58; // 0x80800F04
    /* stfs f0, 0x58(r30) */ // 0x80800F08
    r4 = r31 + 0; // 0x80800F0C
    r5 = r30 + 0x4c; // 0x80800F10
    /* stfs f0, 4(r3) */ // 0x80800F14
    /* stfs f0, 8(r3) */ // 0x80800F18
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x80800F20
    r31 = *(0x1c + r1); // lwz @ 0x80800F24
    r30 = *(0x18 + r1); // lwz @ 0x80800F28
    r29 = *(0x14 + r1); // lwz @ 0x80800F2C
    return;
}