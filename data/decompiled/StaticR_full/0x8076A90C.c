/* Function at 0x8076A90C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076A90C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8076A914
    *(0x24 + r1) = r0; // stw @ 0x8076A918
    *(0x1c + r1) = r31; // stw @ 0x8076A91C
    r31 = r3;
    /* lfs f1, 0x10c(r3) */ // 0x8076A924
    /* lfs f3, 0(r4) */ // 0x8076A928
    /* .byte 0xfc, 0x01, 0x18, 0x40 */ // 0x8076A92C
    if (>=) goto 0x0x8076a968;
    /* lis r5, 0 */ // 0x8076A934
    r4 = r31 + 0x114; // 0x8076A938
    /* lfs f0, 0(r5) */ // 0x8076A93C
    /* fadds f0, f1, f0 */ // 0x8076A940
    /* stfs f0, 0x10c(r3) */ // 0x8076A944
    /* lfs f1, 0(r5) */ // 0x8076A94C
    FUN_805A443C(r3); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x8076A954
    /* stfs f0, 0x100(r31) */ // 0x8076A958
    /* lfs f0, 0x10(r1) */ // 0x8076A95C
    /* stfs f0, 0x108(r31) */ // 0x8076A960
    /* b 0x8076a994 */ // 0x8076A964
    /* lfs f1, 0x114(r3) */ // 0x8076A968
    /* lis r4, 0 */ // 0x8076A96C
    /* lfs f0, 0x11c(r3) */ // 0x8076A970
    /* fmuls f1, f1, f3 */ // 0x8076A974
    /* lfs f2, 0(r4) */ // 0x8076A978
    /* fmuls f0, f0, f3 */ // 0x8076A97C
    /* stfs f3, 0x10c(r3) */ // 0x8076A980
    /* stfs f2, 0x100(r3) */ // 0x8076A984
    /* stfs f2, 0x108(r3) */ // 0x8076A988
    /* stfs f1, 0xf4(r3) */ // 0x8076A98C
    /* stfs f0, 0xfc(r3) */ // 0x8076A990
    r0 = *(0x24 + r1); // lwz @ 0x8076A994
    r31 = *(0x1c + r1); // lwz @ 0x8076A998
    return;
}