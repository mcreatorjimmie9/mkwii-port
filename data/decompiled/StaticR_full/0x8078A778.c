/* Function at 0x8078A778, size=224 bytes */
/* Stack frame: 0 bytes */

void FUN_8078A778(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8078A778
    /* lfs f4, 0x24(r3) */ // 0x8078A77C
    r4 = r4 + 0; // 0x8078A780
    /* lfs f5, 0x28(r3) */ // 0x8078A784
    /* lfs f0, 0x80(r4) */ // 0x8078A788
    /* lfs f6, 0x2c(r3) */ // 0x8078A78C
    /* fcmpu cr0, f0, f4 */ // 0x8078A790
    if (!=) goto 0x0x8078a7ac;
    /* lfs f1, 0x68(r4) */ // 0x8078A798
    /* lfs f0, 0x6c(r4) */ // 0x8078A79C
    /* fmr f6, f1 */ // 0x8078A7A0
    /* stfs f0, 0x28(r3) */ // 0x8078A7A4
    /* b 0x8078a828 */ // 0x8078A7A8
    /* fsubs f3, f4, f1 */ // 0x8078A7AC
    /* lfs f0, 0x7c(r4) */ // 0x8078A7B0
    /* fabs f3, f3 */ // 0x8078A7B4
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8078A7B8
    if (>=) goto 0x0x8078a7cc;
    /* stfs f1, 0x28(r3) */ // 0x8078A7C0
    /* lfs f6, 0x68(r4) */ // 0x8078A7C4
    /* b 0x8078a828 */ // 0x8078A7C8
    /* fsubs f3, f5, f1 */ // 0x8078A7CC
    /* fabs f3, f3 */ // 0x8078A7D0
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8078A7D4
    if (<=) goto 0x0x8078a818;
    /* .byte 0xfc, 0x01, 0x20, 0x40 */ // 0x8078A7DC
    /* stfs f1, 0x28(r3) */ // 0x8078A7E0
    if (>=) goto 0x0x8078a7f0;
    /* lfs f2, 0xac(r4) */ // 0x8078A7E8
    /* b 0x8078a808 */ // 0x8078A7EC
    /* lfs f0, 0x40(r3) */ // 0x8078A7F0
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8078A7F4
    if (<=) goto 0x0x8078a804;
    /* lfs f2, 0xb0(r4) */ // 0x8078A7FC
    /* b 0x8078a808 */ // 0x8078A800
    /* lfs f2, 0xb4(r4) */ // 0x8078A804
    /* fsubs f0, f1, f4 */ // 0x8078A808
    /* fdivs f6, f0, f2 */ // 0x8078A80C
    /* fadds f1, f6, f4 */ // 0x8078A810
    /* b 0x8078a828 */ // 0x8078A814
    /* lfs f0, 0x68(r4) */ // 0x8078A818
    /* fcmpu cr0, f0, f6 */ // 0x8078A81C
    if (==) goto 0x0x8078a828;
    /* fadds f1, f6, f4 */ // 0x8078A824
    /* lfs f0, 0x14(r3) */ // 0x8078A828
    /* lfs f2, 0x6c(r4) */ // 0x8078A82C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078A830
    if (<=) goto 0x0x8078a840;
    /* fmr f1, f0 */ // 0x8078A838
    /* b 0x8078a84c */ // 0x8078A83C
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x8078A840
    if (>=) goto 0x0x8078a84c;
    /* fmr f1, f2 */ // 0x8078A848
    /* stfs f6, 0x2c(r3) */ // 0x8078A84C
    /* stfs f1, 0x24(r3) */ // 0x8078A850
    return;
}