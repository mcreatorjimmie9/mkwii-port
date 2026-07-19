/* Function at 0x8060F294, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8060F294(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 1 */ // 0x8060F29C
    *(0xc + r1) = r31; // stw @ 0x8060F2A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8060F2AC
    r30 = r3;
    r7 = *(0 + r3); // lwz @ 0x8060F2B4
    r5 = *(4 + r7); // lwz @ 0x8060F2B8
    r0 = *(8 + r5); // lwz @ 0x8060F2BC
    /* andi. r0, r0, 0x102 */ // 0x8060F2C0
    if (!=) goto 0x0x8060f2e0;
    /* lis r4, 0x20c */ // 0x8060F2C8
    r5 = *(0xc + r5); // lwz @ 0x8060F2CC
    r0 = r4 + 0x6000; // 0x8060F2D0
    /* and. r0, r5, r0 */ // 0x8060F2D4
    if (!=) goto 0x0x8060f2e0;
    /* li r6, 0 */ // 0x8060F2DC
    if (!=) goto 0x0x8060f340;
    r8 = *(4 + r7); // lwz @ 0x8060F2E8
    /* lis r5, 0 */ // 0x8060F2EC
    /* lfs f1, 0(r5) */ // 0x8060F2F0
    /* li r0, 1 */ // 0x8060F2F4
    r7 = *(0xc + r8); // lwz @ 0x8060F2F8
    /* lis r6, 0 */ // 0x8060F2FC
    /* li r4, 0x1f */ // 0x8060F300
    /* li r5, 1 */ // 0x8060F304
    r7 = r7 | 0x1000; // 0x8060F308
    *(0xc + r8) = r7; // stw @ 0x8060F30C
    *(0x190 + r3) = r0; // stb @ 0x8060F310
    r0 = *(0 + r6); // lha @ 0x8060F314
    *(0x18e + r3) = r0; // sth @ 0x8060F318
    r3 = r30;
    FUN_8061DC98(r3); // bl 0x8061DC98
    r3 = r30;
    /* li r4, 0x15 */ // 0x8060F328
    FUN_8061F03C(r3, r3, r4); // bl 0x8061F03C
    if (!=) goto 0x0x8060f340;
    r3 = r30;
    FUN_8061F15C(r4, r3); // bl 0x8061F15C
    r0 = *(0x14 + r1); // lwz @ 0x8060F340
    r31 = *(0xc + r1); // lwz @ 0x8060F344
    r30 = *(8 + r1); // lwz @ 0x8060F348
    return;
}