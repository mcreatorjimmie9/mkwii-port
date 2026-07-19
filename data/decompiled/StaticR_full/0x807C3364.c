/* Function at 0x807C3364, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C3364(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x64 */ // 0x807C336C
    *(0xc + r1) = r31; // stw @ 0x807C3374
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807C337C
    /* lis r30, 0 */ // 0x807C3380
    r3 = *(0 + r30); // lwz @ 0x807C3384
    FUN_807C03BC(); // bl 0x807C03BC
    r4 = *(0xc + r31); // lwz @ 0x807C338C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C3394
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C339C
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C33A4
    r3 = *(0 + r30); // lwz @ 0x807C33A8
    r4 = *(0xc + r4); // lwz @ 0x807C33AC
    r3 = *(0x8c + r3); // lwz @ 0x807C33B0
    /* lwzx r4, r4, r0 */ // 0x807C33B4
    r4 = *(0x20 + r4); // lbz @ 0x807C33B8
    r4 = r4 + -1; // 0x807C33BC
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(5 + r3); // lbz @ 0x807C33C4
    /* clrlwi r3, r31, 0x18 */ // 0x807C33C8
    r31 = *(0xc + r1); // lwz @ 0x807C33CC
    /* subf r0, r0, r3 */ // 0x807C33D0
    r30 = *(8 + r1); // lwz @ 0x807C33D4
    /* srwi r3, r0, 0x1f */ // 0x807C33D8
    r0 = *(0x14 + r1); // lwz @ 0x807C33DC
    return;
}