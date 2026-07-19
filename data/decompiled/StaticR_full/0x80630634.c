/* Function at 0x80630634, size=92 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80630634(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8063063C
    /* lfs f3, 0(r4) */ // 0x80630648
    *(0x5c + r1) = r31; // stw @ 0x8063064C
    *(0x58 + r1) = r30; // stw @ 0x80630650
    *(0x54 + r1) = r29; // stw @ 0x80630654
    r29 = r3;
    r4 = r29 + 0x88; // 0x8063065C
    /* lfs f2, 0x9c(r3) */ // 0x80630660
    r6 = r29 + 0xa0; // 0x80630664
    /* lfs f1, 0x98(r3) */ // 0x80630668
    /* lfs f0, 0x94(r3) */ // 0x8063066C
    /* fmuls f2, f3, f2 */ // 0x80630670
    /* fmuls f1, f3, f1 */ // 0x80630674
    r3 = r3 + 0xc; // 0x80630678
    /* fmuls f0, f3, f0 */ // 0x8063067C
    /* stfs f2, 0x1c(r1) */ // 0x80630680
    /* stfs f0, 0x14(r1) */ // 0x80630684
    /* stfs f1, 0x18(r1) */ // 0x80630688
    FUN_805E3430(r3); // bl 0x805E3430
}