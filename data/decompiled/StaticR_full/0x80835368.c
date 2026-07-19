/* Function at 0x80835368, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80835368(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80835378
    r30 = r3;
    FUN_8083953C(); // bl 0x8083953C
    /* li r31, 0 */ // 0x80835384
    /* li r0, -1 */ // 0x80835388
    *(0x2c0 + r30) = r31; // sth @ 0x8083538C
    r3 = r30;
    *(0x2c4 + r30) = r0; // stw @ 0x80835394
    *(0x2c8 + r30) = r31; // stw @ 0x80835398
    FUN_808355A0(r3); // bl 0x808355A0
    *(0x2ec + r30) = r3; // stb @ 0x808353A0
    /* lis r4, 0 */ // 0x808353A4
    /* lis r3, 0 */ // 0x808353A8
    r5 = *(0x9c + r30); // lwz @ 0x808353AC
    /* lfs f1, 0(r4) */ // 0x808353B0
    /* li r4, 1 */ // 0x808353B4
    *(0x2ed + r30) = r31; // stb @ 0x808353B8
    /* lfs f2, 0(r3) */ // 0x808353BC
    *(0x2f4 + r30) = r31; // sth @ 0x808353C0
    *(0x334 + r30) = r31; // stb @ 0x808353C4
    *(0x2f6 + r30) = r31; // stb @ 0x808353C8
    r3 = *(0x28 + r5); // lwz @ 0x808353CC
    FUN_805E70EC(); // bl 0x805E70EC
    /* lis r3, 0 */ // 0x808353D4
    r4 = *(0xa + r30); // lha @ 0x808353D8
    r3 = *(0 + r3); // lwz @ 0x808353DC
    r3 = *(0x74 + r3); // lwz @ 0x808353E0
    FUN_8071D0E4(r3); // bl 0x8071D0E4
    r0 = *(0x14 + r1); // lwz @ 0x808353E8
    r31 = *(0xc + r1); // lwz @ 0x808353EC
    r30 = *(8 + r1); // lwz @ 0x808353F0
    return;
}