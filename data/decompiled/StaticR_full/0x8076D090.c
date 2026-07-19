/* Function at 0x8076D090, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8076D090(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = r3;
    /* lis r3, 0 */ // 0x8076D09C
    *(0x14 + r1) = r0; // stw @ 0x8076D0A0
    *(0xc + r1) = r31; // stw @ 0x8076D0A4
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8076D0AC
    r30 = r4;
    r4 = *(4 + r6); // lha @ 0x8076D0B4
    r3 = *(0 + r3); // lwz @ 0x8076D0B8
    FUN_80770F48(); // bl 0x80770F48
    /* mulli r0, r30, 0xc */ // 0x8076D0C0
    r3 = *(0x14 + r3); // lwz @ 0x8076D0C4
    /* lfsux f0, r3, r0 */ // 0x8076D0C8
    /* stfs f0, 0(r31) */ // 0x8076D0CC
    /* lfs f0, 4(r3) */ // 0x8076D0D0
    /* stfs f0, 4(r31) */ // 0x8076D0D4
    /* lfs f0, 8(r3) */ // 0x8076D0D8
    /* stfs f0, 8(r31) */ // 0x8076D0DC
    r31 = *(0xc + r1); // lwz @ 0x8076D0E0
    r30 = *(8 + r1); // lwz @ 0x8076D0E4
    r0 = *(0x14 + r1); // lwz @ 0x8076D0E8
    return;
}