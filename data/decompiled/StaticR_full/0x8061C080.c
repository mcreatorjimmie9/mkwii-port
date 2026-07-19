/* Function at 0x8061C080, size=348 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8061C080(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r12, 0 */ // 0x8061C088
    *(0x2c + r1) = r31; // stw @ 0x8061C098
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x8061C0A4
    /* li r30, 0 */ // 0x8061C0A8
    r11 = *(0x10 + r12); // lhz @ 0x8061C0AC
    r10 = *(2 + r4); // lhz @ 0x8061C0B0
    r9 = *(4 + r4); // lhz @ 0x8061C0B4
    r8 = *(6 + r4); // lhz @ 0x8061C0B8
    r7 = *(0x18 + r12); // lhz @ 0x8061C0BC
    r6 = *(2 + r5); // lhz @ 0x8061C0C0
    r4 = *(4 + r5); // lhz @ 0x8061C0C4
    r0 = *(6 + r5); // lhz @ 0x8061C0C8
    *(0x10 + r1) = r11; // sth @ 0x8061C0CC
    *(0x12 + r1) = r10; // sth @ 0x8061C0D0
    *(0x14 + r1) = r9; // sth @ 0x8061C0D4
    *(0x16 + r1) = r8; // sth @ 0x8061C0D8
    *(8 + r1) = r7; // sth @ 0x8061C0DC
    *(0xa + r1) = r6; // sth @ 0x8061C0E0
    *(0xc + r1) = r4; // sth @ 0x8061C0E4
    *(0xe + r1) = r0; // sth @ 0x8061C0E8
    r7 = *(0x14 + r3); // lwz @ 0x8061C0EC
    r5 = *(0x14 + r7); // lwz @ 0x8061C0F0
    r4 = *(0 + r5); // lwz @ 0x8061C0F4
    r5 = *(4 + r5); // lwz @ 0x8061C0F8
    r0 = *(0 + r4); // lwz @ 0x8061C0FC
    /* slwi r6, r0, 1 */ // 0x8061C104
    r0 = *(0x1a4 + r5); // lhz @ 0x8061C108
    if (==) goto 0x0x8061c118;
    /* lhzx r30, r6, r4 */ // 0x8061C114
    r0 = *(0x1d0 + r5); // lhz @ 0x8061C11C
    if (==) goto 0x0x8061c134;
    /* lhzx r0, r6, r4 */ // 0x8061C128
    r0 = r30 + r0; // 0x8061C12C
    /* clrlwi r30, r0, 0x10 */ // 0x8061C130
    r0 = *(0x1fc + r5); // lhz @ 0x8061C134
    if (==) goto 0x0x8061c150;
    /* lhzx r0, r6, r4 */ // 0x8061C144
    r0 = r30 + r0; // 0x8061C148
    /* clrlwi r30, r0, 0x10 */ // 0x8061C14C
    r0 = *(0x228 + r5); // lhz @ 0x8061C154
    if (==) goto 0x0x8061c16c;
    /* lhzx r0, r6, r4 */ // 0x8061C160
    r0 = r30 + r0; // 0x8061C164
    /* clrlwi r30, r0, 0x10 */ // 0x8061C168
    *(0xe + r7) = r30; // sth @ 0x8061C16C
    /* lis r0, 0x4330 */ // 0x8061C170
    /* lfd f3, 0x20(r12) */ // 0x8061C174
    r4 = *(0x14 + r3); // lwz @ 0x8061C178
    *(0x18 + r1) = r0; // stw @ 0x8061C17C
    /* lfs f2, 4(r12) */ // 0x8061C180
    *(0xc + r4) = r30; // sth @ 0x8061C184
    /* lfd f1, 0x28(r12) */ // 0x8061C188
    r5 = *(0x14 + r3); // lwz @ 0x8061C18C
    *(0x20 + r1) = r0; // stw @ 0x8061C190
    r0 = *(0xe + r5); // lhz @ 0x8061C194
    *(0x1c + r1) = r0; // stw @ 0x8061C198
    /* lfd f0, 0x18(r1) */ // 0x8061C19C
    /* fsubs f0, f0, f3 */ // 0x8061C1A0
    /* fdivs f0, f2, f0 */ // 0x8061C1A4
    /* stfs f0, 0x2c(r5) */ // 0x8061C1A8
    r4 = *(0xe + r5); // lhz @ 0x8061C1AC
    r0 = r4 + 1; // 0x8061C1B0
    /* xoris r0, r0, 0x8000 */ // 0x8061C1B4
    *(0x24 + r1) = r0; // stw @ 0x8061C1B8
    /* lfd f0, 0x20(r1) */ // 0x8061C1BC
    /* fsubs f0, f0, f1 */ // 0x8061C1C0
    /* fdivs f0, f2, f0 */ // 0x8061C1C4
    /* stfs f0, 0x30(r5) */ // 0x8061C1C8
    r3 = *(0x14 + r3); // lwz @ 0x8061C1CC
    r0 = *(0xe + r3); // lhz @ 0x8061C1D0
    /* slwi r3, r0, 2 */ // 0x8061C1D4
    FUN_805E3430(); // bl 0x805E3430
}