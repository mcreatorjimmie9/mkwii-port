/* Function at 0x806414A8, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806414A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806414B4
    r31 = r3;
    r3 = r3 + 8; // 0x806414BC
    FUN_80641394(r3); // bl 0x80641394
    /* lis r3, 0 */ // 0x806414C4
    /* li r6, 0 */ // 0x806414C8
    /* lfs f1, 0(r3) */ // 0x806414CC
    /* li r4, 0 */ // 0x806414D0
    /* b 0x8064152c */ // 0x806414D4
    /* clrlwi r3, r6, 0x10 */ // 0x806414D8
    r0 = *(0x8c + r31); // lwz @ 0x806414DC
    /* mulli r5, r3, 0x30 */ // 0x806414E0
    r6 = r6 + 1; // 0x806414E4
    r3 = r0 + r5; // 0x806414E8
    *(8 + r3) = r4; // stw @ 0x806414EC
    /* stfs f1, 0x14(r3) */ // 0x806414F0
    /* stfs f1, 0x10(r3) */ // 0x806414F4
    /* stfs f1, 0xc(r3) */ // 0x806414F8
    /* stfs f1, 0x20(r3) */ // 0x806414FC
    /* stfs f1, 0x1c(r3) */ // 0x80641500
    /* stfs f1, 0x18(r3) */ // 0x80641504
    /* stfs f1, 0x2c(r3) */ // 0x80641508
    /* stfs f1, 0x28(r3) */ // 0x8064150C
    /* stfs f1, 0x24(r3) */ // 0x80641510
    r0 = *(0x8c + r31); // lwz @ 0x80641514
    /* lfs f2, 0x94(r31) */ // 0x80641518
    /* lwzux r3, r5, r0 */ // 0x8064151C
    /* lfs f0, 0x10(r3) */ // 0x80641520
    /* fmuls f0, f0, f2 */ // 0x80641524
    /* stfs f0, 4(r5) */ // 0x80641528
    r0 = *(0 + r31); // lha @ 0x8064152C
    /* clrlwi r3, r6, 0x10 */ // 0x80641530
    if (<) goto 0x0x806414d8;
    r0 = *(0x14 + r1); // lwz @ 0x8064153C
    r31 = *(0xc + r1); // lwz @ 0x80641540
    return;
}