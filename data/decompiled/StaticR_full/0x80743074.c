/* Function at 0x80743074, size=572 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80743074(int r3, int r4)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xa8 + r1) = r30; // stw @ 0x80743084
    r30 = r3;
    r0 = *(0x49 + r3); // lbz @ 0x8074308C
    if (==) goto 0x0x8074310c;
    /* li r0, 1 */ // 0x80743098
    *(0xb0 + r3) = r0; // stb @ 0x8074309C
    /* lis r31, 0 */ // 0x807430A0
    /* lfs f0, 0(r31) */ // 0x807430A8
    /* stfs f0, 0x9c(r1) */ // 0x807430B0
    /* stfs f0, 0xa0(r1) */ // 0x807430B4
    /* stfs f0, 0xa4(r1) */ // 0x807430B8
    /* lfs f1, 0xac4(r30) */ // 0x807430BC
    FUN_805A443C(r4); // bl 0x805A443C
    /* lfs f0, 0x90(r1) */ // 0x807430C4
    /* stfs f0, 0x72c(r30) */ // 0x807430CC
    /* lfs f0, 0(r31) */ // 0x807430D4
    /* lfs f1, 0x94(r1) */ // 0x807430D8
    /* stfs f1, 0x730(r30) */ // 0x807430DC
    /* lfs f1, 0x98(r1) */ // 0x807430E0
    /* stfs f1, 0x734(r30) */ // 0x807430E4
    /* stfs f0, 0x40(r1) */ // 0x807430E8
    /* stfs f0, 0x44(r1) */ // 0x807430EC
    /* lfs f1, 0xac4(r30) */ // 0x807430F0
    FUN_805DA974(); // bl 0x805DA974
    /* lfs f0, 0x38(r1) */ // 0x807430F8
    /* stfs f0, 0x738(r30) */ // 0x807430FC
    /* lfs f0, 0x3c(r1) */ // 0x80743100
    /* stfs f0, 0x73c(r30) */ // 0x80743104
    /* b 0x80743298 */ // 0x80743108
    /* lis r31, 0 */ // 0x8074310C
    /* lis r4, 0 */ // 0x80743110
    /* lfs f3, 0x730(r3) */ // 0x80743114
    /* lfs f2, 0(r31) */ // 0x80743118
    /* lfs f1, 0(r4) */ // 0x8074311C
    /* fsubs f0, f3, f2 */ // 0x80743120
    /* fabs f0, f0 */ // 0x80743124
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80743128
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8074312C
    /* mfcr r0 */ // 0x80743130
    /* lfs f0, 0x72c(r3) */ // 0x80743134
    r0 = r0 rlwinm 3; // rlwinm
    *(0xb0 + r3) = r0; // stb @ 0x8074313C
    /* fsubs f0, f0, f2 */ // 0x80743140
    /* fabs f0, f0 */ // 0x80743144
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80743148
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8074314C
    /* mfcr r4 */ // 0x80743150
    /* or. r0, r0, r0 */ // 0x80743154
    r4 = r4 rlwinm 3; // rlwinm
    if (==) goto 0x0x80743234;
    if (!=) goto 0x0x80743234;
    /* lfs f1, 0xac4(r3) */ // 0x80743168
    /* .byte 0xfc, 0x03, 0x08, 0x40 */ // 0x8074316C
    if (>=) goto 0x0x807431d4;
    /* stfs f2, 0x84(r1) */ // 0x80743174
    /* stfs f2, 0x88(r1) */ // 0x80743180
    /* stfs f2, 0x8c(r1) */ // 0x80743184
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x78(r1) */ // 0x8074318C
    /* stfs f0, 0x72c(r30) */ // 0x80743194
    /* lfs f0, 0(r31) */ // 0x8074319C
    /* lfs f1, 0x7c(r1) */ // 0x807431A0
    /* stfs f1, 0x730(r30) */ // 0x807431A4
    /* lfs f1, 0x80(r1) */ // 0x807431A8
    /* stfs f1, 0x734(r30) */ // 0x807431AC
    /* stfs f0, 0x30(r1) */ // 0x807431B0
    /* stfs f0, 0x34(r1) */ // 0x807431B4
    /* lfs f1, 0xac4(r30) */ // 0x807431B8
    FUN_805DA974(); // bl 0x805DA974
    /* lfs f0, 0x28(r1) */ // 0x807431C0
    /* stfs f0, 0x738(r30) */ // 0x807431C4
    /* lfs f0, 0x2c(r1) */ // 0x807431C8
    /* stfs f0, 0x73c(r30) */ // 0x807431CC
    /* b 0x80743298 */ // 0x807431D0
    /* fmr f1, f3 */ // 0x807431D4
    /* stfs f2, 0x6c(r1) */ // 0x807431D8
    /* stfs f2, 0x70(r1) */ // 0x807431E4
    /* stfs f2, 0x74(r1) */ // 0x807431E8
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x60(r1) */ // 0x807431F0
    /* stfs f0, 0x72c(r30) */ // 0x807431F8
    /* lfs f0, 0(r31) */ // 0x80743200
    /* lfs f1, 0x64(r1) */ // 0x80743204
    /* stfs f1, 0x730(r30) */ // 0x80743208
    /* lfs f2, 0x68(r1) */ // 0x8074320C
    /* stfs f2, 0x734(r30) */ // 0x80743210
    /* stfs f0, 0x20(r1) */ // 0x80743214
    /* stfs f0, 0x24(r1) */ // 0x80743218
    FUN_805DA974(); // bl 0x805DA974
    /* lfs f0, 0x18(r1) */ // 0x80743220
    /* stfs f0, 0x738(r30) */ // 0x80743224
    /* lfs f0, 0x1c(r1) */ // 0x80743228
    /* stfs f0, 0x73c(r30) */ // 0x8074322C
    /* b 0x80743298 */ // 0x80743230
    /* lis r31, 0 */ // 0x80743234
    /* lfs f0, 0(r31) */ // 0x8074323C
    /* stfs f0, 0x54(r1) */ // 0x80743244
    /* stfs f0, 0x58(r1) */ // 0x80743248
    /* stfs f0, 0x5c(r1) */ // 0x8074324C
    /* lfs f1, 0x72c(r30) */ // 0x80743250
    FUN_805A443C(r4); // bl 0x805A443C
    /* lfs f1, 0x48(r1) */ // 0x80743258
    /* stfs f1, 0x72c(r30) */ // 0x80743260
    /* lfs f0, 0(r31) */ // 0x80743268
    /* lfs f2, 0x4c(r1) */ // 0x8074326C
    /* stfs f2, 0x730(r30) */ // 0x80743270
    /* lfs f2, 0x50(r1) */ // 0x80743274
    /* stfs f2, 0x734(r30) */ // 0x80743278
    /* stfs f0, 0x10(r1) */ // 0x8074327C
    /* stfs f0, 0x14(r1) */ // 0x80743280
    FUN_805DA974(); // bl 0x805DA974
    /* lfs f0, 8(r1) */ // 0x80743288
    /* stfs f0, 0x738(r30) */ // 0x8074328C
    /* lfs f0, 0xc(r1) */ // 0x80743290
    /* stfs f0, 0x73c(r30) */ // 0x80743294
    r0 = *(0xb4 + r1); // lwz @ 0x80743298
    r31 = *(0xac + r1); // lwz @ 0x8074329C
    r30 = *(0xa8 + r1); // lwz @ 0x807432A0
    return;
}