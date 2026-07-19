/* Function at 0x80642784, size=176 bytes */
/* Stack frame: 0 bytes */

int FUN_80642784(int r3, int r4, int r5, int r6, int r7)
{
    /* cntlzw r0, r4 */ // 0x80642784
    r6 = r3 + 0x10; // 0x80642788
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* lis r5, 0 */ // 0x80642790
    /* neg r3, r0 */ // 0x80642794
    /* lfs f8, 0x1c(r6) */ // 0x80642798
    /* li r0, 3 */ // 0x8064279C
    r5 = r5 + 0; // 0x806427A0
    /* andc r0, r0, r3 */ // 0x806427A4
    /* lis r3, 0 */ // 0x806427A8
    /* slwi r7, r0, 2 */ // 0x806427AC
    *(0 + r6) = r0; // stw @ 0x806427B0
    r3 = r3 + 0; // 0x806427B4
    /* lfs f5, 0x20(r6) */ // 0x806427B8
    r4 = r6 + r7; // 0x806427BC
    /* lfsx f0, r3, r7 */ // 0x806427C0
    /* lfs f1, 0x40(r4) */ // 0x806427C4
    /* lis r3, 0 */ // 0x806427C8
    /* lfsx f9, r5, r7 */ // 0x806427CC
    /* li r0, 1 */ // 0x806427D0
    /* lfs f3, 0x24(r6) */ // 0x806427D4
    /* fsubs f4, f1, f8 */ // 0x806427D8
    /* fsubs f7, f0, f9 */ // 0x806427DC
    /* lfs f0, 0(r3) */ // 0x806427E0
    /* fsubs f2, f1, f5 */ // 0x806427E4
    /* stfs f0, 0x2c(r6) */ // 0x806427E8
    /* fsubs f1, f1, f3 */ // 0x806427EC
    /* fdivs f6, f4, f7 */ // 0x806427F0
    *(0x28 + r6) = r0; // stb @ 0x806427F4
    /* stfs f6, 0x10(r6) */ // 0x806427F8
    /* fdivs f4, f2, f7 */ // 0x806427FC
    /* stfs f4, 0x14(r6) */ // 0x80642800
    /* fdivs f0, f1, f7 */ // 0x80642804
    /* stfs f0, 0x18(r6) */ // 0x80642808
    /* fmuls f2, f6, f9 */ // 0x8064280C
    /* fmuls f1, f4, f9 */ // 0x80642810
    /* fmuls f0, f0, f9 */ // 0x80642814
    /* fsubs f2, f8, f2 */ // 0x80642818
    /* fsubs f1, f5, f1 */ // 0x8064281C
    /* fsubs f0, f3, f0 */ // 0x80642820
    /* stfs f2, 4(r6) */ // 0x80642824
    /* stfs f1, 8(r6) */ // 0x80642828
    /* stfs f0, 0xc(r6) */ // 0x8064282C
    return;
}