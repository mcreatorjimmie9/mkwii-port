/* Function at 0x805A6020, size=264 bytes */
/* Stack frame: 32 bytes */

void FUN_805A6020(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    r5 = *(4 + r3); // lwz @ 0x805A6024
    /* lfs f3, 4(r4) */ // 0x805A6028
    /* lfs f0, 8(r5) */ // 0x805A602C
    /* lfs f2, 0(r4) */ // 0x805A6030
    /* fsubs f5, f3, f0 */ // 0x805A6034
    /* lfs f1, 4(r5) */ // 0x805A6038
    /* lfs f0, 0x18(r3) */ // 0x805A603C
    /* fsubs f4, f2, f1 */ // 0x805A6040
    /* lfs f2, 0x14(r3) */ // 0x805A6044
    /* fmuls f1, f5, f0 */ // 0x805A6048
    /* lfs f3, 8(r4) */ // 0x805A604C
    /* lfs f0, 0xc(r5) */ // 0x805A6050
    /* fmuls f2, f4, f2 */ // 0x805A6054
    /* stfs f4, 8(r1) */ // 0x805A6058
    /* fsubs f6, f3, f0 */ // 0x805A605C
    /* lfs f3, 0x1c(r3) */ // 0x805A6060
    /* fadds f1, f2, f1 */ // 0x805A6064
    /* lfs f0, 0x30(r3) */ // 0x805A6068
    /* stfs f5, 0xc(r1) */ // 0x805A606C
    /* fmuls f2, f6, f3 */ // 0x805A6070
    /* stfs f6, 0x10(r1) */ // 0x805A6074
    /* fadds f1, f2, f1 */ // 0x805A6078
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A607C
    if (>) goto 0x0x805a6094;
    /* lis r4, 0 */ // 0x805A6084
    /* lfs f0, 0(r4) */ // 0x805A6088
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A608C
    if (>=) goto 0x0x805a609c;
    /* li r3, 0 */ // 0x805A6094
    /* b 0x805a6120 */ // 0x805A6098
    /* lfs f1, 8(r3) */ // 0x805A609C
    /* lfs f0, 0xc(r3) */ // 0x805A60A0
    /* fmuls f2, f4, f1 */ // 0x805A60A4
    /* lfs f3, 0x10(r3) */ // 0x805A60A8
    /* fmuls f1, f5, f0 */ // 0x805A60AC
    /* lfs f0, 0x2c(r3) */ // 0x805A60B0
    /* fmuls f3, f6, f3 */ // 0x805A60B4
    /* fadds f1, f2, f1 */ // 0x805A60B8
    /* fadds f1, f3, f1 */ // 0x805A60BC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A60C0
    if (>) goto 0x0x805a60d4;
    /* fneg f0, f0 */ // 0x805A60C8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A60CC
    if (>=) goto 0x0x805a60dc;
    /* li r3, 0 */ // 0x805A60D4
    /* b 0x805a6120 */ // 0x805A60D8
    /* lfs f1, 0x20(r3) */ // 0x805A60DC
    /* lfs f0, 0x24(r3) */ // 0x805A60E0
    /* fmuls f2, f4, f1 */ // 0x805A60E4
    /* lfs f3, 0x28(r3) */ // 0x805A60E8
    /* fmuls f1, f5, f0 */ // 0x805A60EC
    /* lfs f0, 0x34(r3) */ // 0x805A60F0
    /* fmuls f3, f6, f3 */ // 0x805A60F4
    /* fadds f1, f2, f1 */ // 0x805A60F8
    /* fadds f1, f3, f1 */ // 0x805A60FC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A6100
    if (>) goto 0x0x805a6114;
    /* fneg f0, f0 */ // 0x805A6108
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A610C
    if (>=) goto 0x0x805a611c;
    /* li r3, 0 */ // 0x805A6114
    /* b 0x805a6120 */ // 0x805A6118
    /* li r3, 1 */ // 0x805A611C
    return;
}