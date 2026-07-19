/* Function at 0x807C105C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C105C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807C1064
    *(0x1c + r1) = r31; // stw @ 0x807C106C
    r31 = r4;
    /* li r4, 0x64 */ // 0x807C1074
    *(0x18 + r1) = r30; // stw @ 0x807C1078
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x807C1080
    FUN_807C03BC(r4); // bl 0x807C03BC
    r5 = *(0xc + r30); // lwz @ 0x807C1088
    /* lis r0, 0x4330 */ // 0x807C108C
    *(8 + r1) = r0; // stw @ 0x807C1090
    /* lis r4, 0 */ // 0x807C1094
    /* xoris r0, r5, 0x8000 */ // 0x807C1098
    /* lfs f0, 0x28(r31) */ // 0x807C109C
    *(0xc + r1) = r0; // stw @ 0x807C10A0
    /* lfd f2, 0(r4) */ // 0x807C10A4
    /* lfd f1, 8(r1) */ // 0x807C10A8
    r31 = *(0x1c + r1); // lwz @ 0x807C10AC
    /* fsubs f1, f1, f2 */ // 0x807C10B0
    r30 = *(0x18 + r1); // lwz @ 0x807C10B4
    /* fmuls f0, f1, f0 */ // 0x807C10B8
    /* fctiwz f0, f0 */ // 0x807C10BC
    /* stfd f0, 0x10(r1) */ // 0x807C10C0
    r4 = *(0x14 + r1); // lwz @ 0x807C10C4
    r0 = r4 ^ r3; // 0x807C10C8
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x807C10D0
    /* subf r0, r0, r3 */ // 0x807C10D4
    /* srwi r3, r0, 0x1f */ // 0x807C10D8
    r0 = *(0x24 + r1); // lwz @ 0x807C10DC
    return;
}