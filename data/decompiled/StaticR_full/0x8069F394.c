/* Function at 0x8069F394, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */

int FUN_8069F394(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stfd f31, 0x28(r1) */ // 0x8069F3A0
    /* fmr f31, f1 */ // 0x8069F3A4
    /* stmw r26, 0x10(r1) */ // 0x8069F3A8
    /* mulli r31, r4, 0x44 */ // 0x8069F3AC
    r27 = r5;
    r5 = r6;
    r26 = r3;
    r28 = r7;
    r29 = r8;
    /* li r4, 0 */ // 0x8069F3C4
    /* li r6, 0 */ // 0x8069F3C8
    r9 = *(0xc + r3); // lwz @ 0x8069F3CC
    r30 = *(0 + r3); // lwz @ 0x8069F3D0
    r3 = *(0x24 + r9); // lwz @ 0x8069F3D4
    r12 = *(0 + r3); // lwz @ 0x8069F3D8
    r12 = *(0xc + r12); // lwz @ 0x8069F3DC
    /* mtctr r12 */ // 0x8069F3E0
    /* bctrl  */ // 0x8069F3E4
    r5 = *(0xc + r26); // lwz @ 0x8069F3E8
    r4 = r3;
    /* lwzx r6, r30, r31 */ // 0x8069F3F0
    /* slwi r0, r27, 4 */ // 0x8069F3F4
    r3 = r5 + 4; // 0x8069F3F8
    r5 = *(0x24 + r5); // lwz @ 0x8069F3FC
    r12 = *(0 + r3); // lwz @ 0x8069F400
    r30 = r6 + r0; // 0x8069F404
    r12 = *(0x14 + r12); // lwz @ 0x8069F408
    /* mtctr r12 */ // 0x8069F40C
    /* bctrl  */ // 0x8069F410
    *(0 + r30) = r3; // stw @ 0x8069F414
    *(4 + r30) = r28; // stw @ 0x8069F418
    *(0xc + r30) = r29; // stb @ 0x8069F41C
    /* stfs f31, 8(r30) */ // 0x8069F420
    /* lfd f31, 0x28(r1) */ // 0x8069F424
    r0 = *(0x34 + r1); // lwz @ 0x8069F42C
    return;
}