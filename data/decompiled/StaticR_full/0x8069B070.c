/* Function at 0x8069B070, size=428 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_8069B070(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8069B084
    r29 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r29 + 0x98; // 0x8069B090
    /* li r4, 0 */ // 0x8069B094
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069B09C
    /* li r4, 0 */ // 0x8069B0A0
    /* lfs f1, 0(r5) */ // 0x8069B0A4
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r3 = *(0x64 + r29); // lwz @ 0x8069B0AC
    r3 = *(0xc + r3); // lwz @ 0x8069B0B0
    r30 = *(0x38 + r3); // lwz @ 0x8069B0B4
    if (!=) goto 0x0x8069b0c8;
    /* li r30, 0 */ // 0x8069B0C0
    /* b 0x8069b11c */ // 0x8069B0C4
    /* lis r31, 0 */ // 0x8069B0C8
    r31 = r31 + 0; // 0x8069B0CC
    if (==) goto 0x0x8069b118;
    r12 = *(0 + r30); // lwz @ 0x8069B0D4
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8069B0DC
    /* mtctr r12 */ // 0x8069B0E0
    /* bctrl  */ // 0x8069B0E4
    /* b 0x8069b100 */ // 0x8069B0E8
    if (!=) goto 0x0x8069b0fc;
    /* li r0, 1 */ // 0x8069B0F4
    /* b 0x8069b10c */ // 0x8069B0F8
    r3 = *(0 + r3); // lwz @ 0x8069B0FC
    if (!=) goto 0x0x8069b0ec;
    /* li r0, 0 */ // 0x8069B108
    if (==) goto 0x0x8069b118;
    /* b 0x8069b11c */ // 0x8069B114
    /* li r30, 0 */ // 0x8069B118
    r3 = *(0x54 + r30); // lwz @ 0x8069B11C
    r0 = r29 + 0x174; // 0x8069B120
    /* li r5, 0 */ // 0x8069B124
    if (!=) goto 0x0x8069b138;
    /* li r5, 1 */ // 0x8069B130
    /* b 0x8069b188 */ // 0x8069B134
    r3 = *(0xb0 + r30); // lwz @ 0x8069B138
    if (!=) goto 0x0x8069b14c;
    /* li r5, 1 */ // 0x8069B144
    /* b 0x8069b188 */ // 0x8069B148
    r3 = *(0x10c + r30); // lwz @ 0x8069B14C
    r4 = r30 + 0xb8; // 0x8069B150
    if (!=) goto 0x0x8069b164;
    /* li r5, 1 */ // 0x8069B15C
    /* b 0x8069b188 */ // 0x8069B160
    r3 = *(0xb0 + r4); // lwz @ 0x8069B164
    if (!=) goto 0x0x8069b178;
    /* li r5, 1 */ // 0x8069B170
    /* b 0x8069b188 */ // 0x8069B174
    r3 = *(0x10c + r4); // lwz @ 0x8069B178
    if (!=) goto 0x0x8069b188;
    /* li r5, 1 */ // 0x8069B184
    if (==) goto 0x0x8069b1b0;
    r3 = r29 + 0x98; // 0x8069B190
    /* li r4, 1 */ // 0x8069B194
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069B19C
    /* li r4, 2 */ // 0x8069B1A0
    /* lfs f1, 0(r5) */ // 0x8069B1A4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x8069b1cc */ // 0x8069B1AC
    r3 = r29 + 0x98; // 0x8069B1B0
    /* li r4, 1 */ // 0x8069B1B4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069B1BC
    /* li r4, 0 */ // 0x8069B1C0
    /* lfs f1, 0(r5) */ // 0x8069B1C4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8069B1CC
    /* li r4, 2 */ // 0x8069B1D0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8069B1D8
    /* li r4, 1 */ // 0x8069B1DC
    /* lfs f1, 0(r31) */ // 0x8069B1E0
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8069B1E8
    /* li r4, 3 */ // 0x8069B1EC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8069B1F4
    /* li r4, 1 */ // 0x8069B1F8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x8069B200
    r31 = *(0x1c + r1); // lwz @ 0x8069B204
    r30 = *(0x18 + r1); // lwz @ 0x8069B208
    r29 = *(0x14 + r1); // lwz @ 0x8069B20C
    return;
}