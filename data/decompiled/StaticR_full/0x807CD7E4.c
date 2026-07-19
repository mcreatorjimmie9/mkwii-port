/* Function at 0x807CD7E4, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807CD7E4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x807CD7F8
    r30 = r3;
    r4 = r30;
    FUN_807CB4DC(r4, r3); // bl 0x807CB4DC
    r4 = r31;
    FUN_805A4498(r3, r4, r3, r5); // bl 0x805A4498
    /* lis r3, 0 */ // 0x807CD81C
    /* lfs f0, 0x14(r1) */ // 0x807CD820
    /* lfs f4, 0(r3) */ // 0x807CD824
    /* lis r3, 0 */ // 0x807CD828
    /* fmuls f2, f0, f0 */ // 0x807CD82C
    /* lfs f3, 0x1c(r1) */ // 0x807CD830
    /* fmuls f1, f4, f4 */ // 0x807CD834
    /* lfs f0, 0(r3) */ // 0x807CD838
    /* fmuls f3, f3, f3 */ // 0x807CD83C
    /* stfs f4, 0x18(r1) */ // 0x807CD840
    /* fadds f1, f2, f1 */ // 0x807CD844
    /* fadds f1, f3, f1 */ // 0x807CD848
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CD84C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CD850
    /* mfcr r0 */ // 0x807CD854
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807CD858
    if (!=) goto 0x0x807cd880;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x14(r1) */ // 0x807CD868
    /* stfs f0, 0x2e0(r30) */ // 0x807CD86C
    /* lfs f0, 0x18(r1) */ // 0x807CD870
    /* stfs f0, 0x2e4(r30) */ // 0x807CD874
    /* lfs f0, 0x1c(r1) */ // 0x807CD878
    /* stfs f0, 0x2e8(r30) */ // 0x807CD87C
}