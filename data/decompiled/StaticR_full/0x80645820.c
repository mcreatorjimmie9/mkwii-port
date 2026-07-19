/* Function at 0x80645820, size=208 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80645820(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x58 + r1) = r30; // stw @ 0x80645834
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x8064583C
    r29 = r3;
    FUN_805C6D88(r3); // bl 0x805C6D88
    /* lfs f1, 0xc(r30) */ // 0x8064584C
    r4 = r31;
    FUN_805A86E4(r3, r4, r3); // bl 0x805A86E4
    FUN_805A4464(r3, r3, r4, r5); // bl 0x805A4464
    /* lfs f1, 0xc(r31) */ // 0x8064586C
    r4 = r30;
    FUN_805A86E4(r5, r4, r3); // bl 0x805A86E4
    FUN_805A4464(r3, r3, r4, r5); // bl 0x805A4464
    /* lfs f3, 0(r30) */ // 0x8064588C
    r3 = r29;
    /* lfs f2, 0(r31) */ // 0x80645894
    /* lfs f1, 4(r30) */ // 0x8064589C
    /* lfs f0, 4(r31) */ // 0x806458A0
    /* fmuls f3, f3, f2 */ // 0x806458A4
    /* lfs f5, 8(r30) */ // 0x806458A8
    /* fmuls f2, f1, f0 */ // 0x806458AC
    /* lfs f4, 8(r31) */ // 0x806458B0
    /* lfs f1, 0xc(r30) */ // 0x806458B4
    /* lfs f0, 0xc(r31) */ // 0x806458B8
    /* fmuls f4, f5, f4 */ // 0x806458BC
    /* fadds f2, f3, f2 */ // 0x806458C0
    /* fmuls f0, f1, f0 */ // 0x806458C4
    /* fadds f1, f4, f2 */ // 0x806458C8
    /* fsubs f1, f0, f1 */ // 0x806458CC
    FUN_806458F0(); // bl 0x806458F0
    r0 = *(0x64 + r1); // lwz @ 0x806458D4
    r31 = *(0x5c + r1); // lwz @ 0x806458D8
    r30 = *(0x58 + r1); // lwz @ 0x806458DC
    r29 = *(0x54 + r1); // lwz @ 0x806458E0
    return;
}