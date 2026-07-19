/* Function at 0x808D7484, size=188 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808D7484(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x808D7494
    r30 = r3;
    r4 = r30;
    *(0x190 + r3) = r5; // stb @ 0x808D74A0
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808D74AC
    r7 = *(0 + r6); // lwzu @ 0x808D74B0
    /* lis r31, 0 */ // 0x808D74B4
    *(8 + r1) = r7; // stw @ 0x808D74B8
    r9 = *(4 + r6); // lwz @ 0x808D74BC
    r31 = r31 + 0; // 0x808D74C0
    r8 = *(8 + r6); // lwz @ 0x808D74C4
    r0 = *(0xc + r6); // lwz @ 0x808D74CC
    r4 = r31 + 0xb1; // 0x808D74D0
    *(0xc + r1) = r9; // stw @ 0x808D74D4
    r5 = r31 + 0xc0; // 0x808D74D8
    r6 = r31 + 0xcf; // 0x808D74DC
    *(0x10 + r1) = r8; // stw @ 0x808D74E4
    *(0x14 + r1) = r0; // stw @ 0x808D74E8
    FUN_8064E36C(r5, r6, r7); // bl 0x8064E36C
    r3 = r30 + 0x98; // 0x808D74F0
    /* li r4, 0 */ // 0x808D74F4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x808D74FC
    /* li r4, 0 */ // 0x808D7500
    /* lfs f1, 0(r5) */ // 0x808D7504
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r4 = r31 + 0xde; // 0x808D750C
    r3 = r30 + 0xa8; // 0x808D7510
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x198 + r30) = r3; // stw @ 0x808D7518
    /* li r4, -1 */ // 0x808D7520
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x808D7528
    r31 = *(0x4c + r1); // lwz @ 0x808D752C
    r30 = *(0x48 + r1); // lwz @ 0x808D7530
    return;
}