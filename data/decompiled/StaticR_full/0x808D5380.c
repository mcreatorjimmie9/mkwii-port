/* Function at 0x808D5380, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808D5380(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808D5388
    *(0x14 + r1) = r0; // stw @ 0x808D538C
    r4 = r4 + 0; // 0x808D5390
    r4 = r4 + 0x74; // 0x808D5394
    *(0xc + r1) = r31; // stw @ 0x808D5398
    r31 = r3;
    r3 = r3 + 0xa8; // 0x808D53A0
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    /* lis r4, 0 */ // 0x808D53A8
    *(0x260 + r31) = r3; // stw @ 0x808D53AC
    /* lfs f0, 0(r4) */ // 0x808D53B0
    r3 = r31;
    /* stfs f0, 0x25c(r31) */ // 0x808D53B8
    /* li r4, 6 */ // 0x808D53BC
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x14 + r1); // lwz @ 0x808D53C4
    r31 = *(0xc + r1); // lwz @ 0x808D53C8
    return;
}