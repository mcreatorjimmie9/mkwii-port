/* Function at 0x80628748, size=212 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80628748(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80628758
    r31 = r31 + 0; // 0x8062875C
    *(0x58 + r1) = r30; // stw @ 0x80628760
    r30 = r3;
    r4 = *(0x7c + r3); // lwz @ 0x80628768
    r0 = *(4 + r4); // lwz @ 0x8062876C
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80628770
    if (==) goto 0x0x8062889c;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r30); // lwz @ 0x8062877C
    /* lfs f2, 0(r31) */ // 0x80628780
    /* lfs f1, 0x6c(r4) */ // 0x80628784
    /* lfs f0, 0x22c(r3) */ // 0x80628788
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x8062878C
    if (<=) goto 0x0x80628798;
    /* fdivs f2, f0, f1 */ // 0x80628794
    /* lfs f0, 0x9c(r30) */ // 0x80628798
    /* lfs f1, 4(r31) */ // 0x8062879C
    /* fadds f2, f0, f2 */ // 0x806287A0
    /* stfs f2, 0x9c(r30) */ // 0x806287A4
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x806287A8
    if (<=) goto 0x0x806287bc;
    /* fsubs f0, f2, f1 */ // 0x806287B0
    /* stfs f0, 0x9c(r30) */ // 0x806287B4
    /* b 0x806287d0 */ // 0x806287B8
    /* lfs f0, 8(r31) */ // 0x806287BC
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x806287C0
    if (>=) goto 0x0x806287d0;
    /* fadds f0, f2, f1 */ // 0x806287C8
    /* stfs f0, 0x9c(r30) */ // 0x806287CC
    r3 = r30;
    FUN_8061DF18(r3); // bl 0x8061DF18
    /* lfs f2, 0x98(r3) */ // 0x806287D8
    r3 = r30 + 0xa0; // 0x806287DC
    /* lfs f0, 0xc(r31) */ // 0x806287E0
    /* lfs f1, 0x9c(r30) */ // 0x806287E8
    /* fmuls f2, f0, f2 */ // 0x806287EC
    /* lfs f0, 0(r31) */ // 0x806287F0
    /* stfs f1, 0x14(r1) */ // 0x806287F4
    /* stfs f2, 0x18(r1) */ // 0x806287F8
    /* stfs f0, 0x1c(r1) */ // 0x806287FC
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30 + 0x1c; // 0x80628804
    r4 = r30 + 0xa0; // 0x80628808
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r6 = *(0x98 + r30); // lwz @ 0x80628814
    r3 = r30;
}