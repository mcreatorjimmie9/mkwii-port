/* Function at 0x805F2854, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F2854(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805F2868
    r30 = r3;
    r5 = *(0x8c + r3); // lwz @ 0x805F2870
    r3 = *(0x6c + r4); // lwz @ 0x805F2874
    if (==) goto 0x0x805f28a0;
    r0 = *(0 + r5); // lwz @ 0x805F2880
    r3 = r3 + 4; // 0x805F2884
    *(8 + r1) = r0; // stw @ 0x805F2888
    /* li r4, 0 */ // 0x805F2890
    /* li r6, 0 */ // 0x805F2894
    /* lfs f1, 0x90(r30) */ // 0x805F2898
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r0 = *(0x40 + r30); // lhz @ 0x805F28A0
    /* clrlwi. r0, r0, 0x1f */ // 0x805F28A4
    if (==) goto 0x0x805f28d0;
    /* li r0, 0 */ // 0x805F28AC
    *(0 + r31) = r0; // stw @ 0x805F28B0
    r3 = r31 + 0x70; // 0x805F28B4
    r12 = *(0x70 + r31); // lwz @ 0x805F28B8
    r12 = *(8 + r12); // lwz @ 0x805F28BC
    /* mtctr r12 */ // 0x805F28C0
    /* bctrl  */ // 0x805F28C4
    r5 = r3;
    /* b 0x805f28e8 */ // 0x805F28CC
    r3 = *(0x6c + r31); // lwz @ 0x805F28D0
    r12 = *(0 + r3); // lwz @ 0x805F28D4
    r12 = *(8 + r12); // lwz @ 0x805F28D8
    /* mtctr r12 */ // 0x805F28DC
    /* bctrl  */ // 0x805F28E0
    r5 = r3;
    r3 = *(0x30 + r30); // lwz @ 0x805F28E8
    r6 = r31;
    /* li r4, 0 */ // 0x805F28F0
    FUN_805E3430(r5, r6, r4); // bl 0x805E3430
}