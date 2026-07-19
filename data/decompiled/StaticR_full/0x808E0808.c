/* Function at 0x808E0808, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808E0808(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808E081C
    r30 = r3;
    r0 = *(8 + r4); // lwz @ 0x808E0824
    if (>=) goto 0x0x808e0850;
    /* lis r5, 0 */ // 0x808E0830
    r4 = *(0 + r5); // lwzu @ 0x808E0834
    r0 = *(4 + r5); // lwz @ 0x808E0838
    *(4 + r3) = r0; // stw @ 0x808E083C
    *(0 + r3) = r4; // stw @ 0x808E0840
    r0 = *(8 + r5); // lwz @ 0x808E0844
    *(8 + r3) = r0; // stw @ 0x808E0848
    /* b 0x808e08d8 */ // 0x808E084C
    /* lis r7, 0 */ // 0x808E0850
    r6 = *(0 + r7); // lwzu @ 0x808E0854
    r3 = *(0x14 + r4); // lwz @ 0x808E0858
    r5 = *(4 + r7); // lwz @ 0x808E085C
    r0 = *(8 + r7); // lwz @ 0x808E0860
    r4 = *(0x18 + r4); // lwz @ 0x808E0864
    *(8 + r1) = r6; // stw @ 0x808E0868
    *(0xc + r1) = r5; // stw @ 0x808E086C
    *(0x10 + r1) = r0; // stw @ 0x808E0870
    FUN_8061FD14(); // bl 0x8061FD14
    if (==) goto 0x0x808e08a0;
    /* lfs f3, 0xc(r1) */ // 0x808E0880
    /* lfs f2, 0(r3) */ // 0x808E0884
    /* lfs f1, 0x10(r1) */ // 0x808E0888
    /* lfs f0, 4(r3) */ // 0x808E088C
    /* fadds f2, f3, f2 */ // 0x808E0890
    /* fadds f0, f1, f0 */ // 0x808E0894
    /* stfs f2, 0xc(r1) */ // 0x808E0898
    /* stfs f0, 0x10(r1) */ // 0x808E089C
    r0 = *(0x14 + r31); // lwz @ 0x808E08A0
    /* lis r4, 0 */ // 0x808E08A4
    r4 = r4 + 0; // 0x808E08A8
    /* lfs f1, 0xc(r1) */ // 0x808E08AC
    /* slwi r0, r0, 2 */ // 0x808E08B0
    r3 = *(8 + r1); // lwz @ 0x808E08B4
    /* lfsx f0, r4, r0 */ // 0x808E08B8
    r0 = *(0x10 + r1); // lwz @ 0x808E08BC
    /* fadds f0, f1, f0 */ // 0x808E08C0
    *(0 + r30) = r3; // stw @ 0x808E08C4
    /* stfs f0, 0xc(r1) */ // 0x808E08C8
    r3 = *(0xc + r1); // lwz @ 0x808E08CC
    *(4 + r30) = r3; // stw @ 0x808E08D0
    *(8 + r30) = r0; // stw @ 0x808E08D4
    r0 = *(0x24 + r1); // lwz @ 0x808E08D8
    r31 = *(0x1c + r1); // lwz @ 0x808E08DC
    r30 = *(0x18 + r1); // lwz @ 0x808E08E0
    return;
}