/* Function at 0x807AC394, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807AC394(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807AC3A4
    r30 = r3;
    r6 = *(0xc + r3); // lwz @ 0x807AC3AC
    r5 = *(0x10 + r3); // lwz @ 0x807AC3B0
    r4 = *(4 + r6); // lwz @ 0x807AC3B4
    r3 = r6;
    FUN_807AD778(r3); // bl 0x807AD778
    r31 = r3;
    r3 = *(4 + r30); // lwz @ 0x807AC3C4
    /* lfs f1, 0(r31) */ // 0x807AC3C8
    FUN_807AC06C(r3); // bl 0x807AC06C
    r3 = *(8 + r30); // lwz @ 0x807AC3D0
    /* lfs f1, 0(r31) */ // 0x807AC3D4
    FUN_807AC06C(); // bl 0x807AC06C
    r0 = *(0x14 + r1); // lwz @ 0x807AC3DC
    r31 = *(0xc + r1); // lwz @ 0x807AC3E0
    r30 = *(8 + r1); // lwz @ 0x807AC3E4
    return;
}