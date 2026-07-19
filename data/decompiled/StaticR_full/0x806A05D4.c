/* Function at 0x806A05D4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A05D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x806A05E8
    r30 = r3;
    r3 = r3 + 0xa8; // 0x806A05F0
    FUN_806660A8(r3); // bl 0x806660A8
    r4 = r31;
    r3 = r30 + 0xa8; // 0x806A05FC
    FUN_80666250(r3, r4, r3); // bl 0x80666250
    r5 = *(0xbc + r30); // lwz @ 0x806A0604
    r3 = r30 + 0x98; // 0x806A0608
    r4 = r30 + 0xa8; // 0x806A060C
    FUN_8069F0E4(r3, r3, r4); // bl 0x8069F0E4
    r3 = *(0xbc + r30); // lwz @ 0x806A0614
    r0 = *(0xbb + r3); // lbz @ 0x806A0618
    /* andi. r0, r0, 0xfd */ // 0x806A061C
    r0 = r0 | 2; // 0x806A0620
    *(0xbb + r3) = r0; // stb @ 0x806A0624
    r31 = *(0xc + r1); // lwz @ 0x806A0628
    r30 = *(8 + r1); // lwz @ 0x806A062C
    r0 = *(0x14 + r1); // lwz @ 0x806A0630
    return;
}