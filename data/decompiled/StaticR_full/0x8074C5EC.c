/* Function at 0x8074C5EC, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8074C5EC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074C5FC
    r31 = r31 + 0; // 0x8074C600
    *(0x28 + r1) = r30; // stw @ 0x8074C604
    r30 = r3;
    r4 = r30 + 0xb4; // 0x8074C60C
    /* lfs f3, 0xb4(r3) */ // 0x8074C610
    r5 = r30 + 0x104; // 0x8074C614
    /* lfs f2, 0xb8(r3) */ // 0x8074C618
    /* lfs f0, 0xbc(r3) */ // 0x8074C61C
    /* lfs f1, 0x11c(r3) */ // 0x8074C620
    /* stfs f3, 0xc0(r3) */ // 0x8074C624
    /* stfs f2, 0xc4(r3) */ // 0x8074C628
    /* stfs f0, 0xc8(r3) */ // 0x8074C62C
    FUN_8074CB64(r3); // bl 0x8074CB64
    /* lfs f0, 0x14(r1) */ // 0x8074C638
    /* stfs f0, 0xb4(r30) */ // 0x8074C63C
    /* fmuls f2, f0, f0 */ // 0x8074C640
    /* lfs f0, 0x64(r31) */ // 0x8074C644
    /* lfs f1, 0x18(r1) */ // 0x8074C648
    /* stfs f1, 0xb8(r30) */ // 0x8074C64C
    /* fmuls f1, f1, f1 */ // 0x8074C650
    /* lfs f3, 0x1c(r1) */ // 0x8074C654
    /* stfs f3, 0xbc(r30) */ // 0x8074C658
    /* fmuls f3, f3, f3 */ // 0x8074C65C
    /* fadds f1, f2, f1 */ // 0x8074C660
    /* fadds f1, f3, f1 */ // 0x8074C664
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074C668
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074C66C
    /* mfcr r0 */ // 0x8074C670
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074C674
    if (==) goto 0x0x8074c694;
    /* lfs f1, 0(r31) */ // 0x8074C67C
    /* lfs f0, 0x60(r31) */ // 0x8074C680
    /* stfs f1, 0xb4(r30) */ // 0x8074C684
    /* stfs f1, 0xb8(r30) */ // 0x8074C688
    /* stfs f0, 0xbc(r30) */ // 0x8074C68C
    /* b 0x8074c69c */ // 0x8074C690
    r3 = r30 + 0xb4; // 0x8074C694
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8074C69C
    /* lfs f1, 0(r4) */ // 0x8074C6A4
    r4 = r30 + 0xcc; // 0x8074C6A8
    r5 = r30 + 0xec; // 0x8074C6AC
    FUN_8074CB64(r4, r3, r4, r5); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074C6B4
    /* stfs f0, 0xcc(r30) */ // 0x8074C6B8
    /* fmuls f2, f0, f0 */ // 0x8074C6BC
    /* lfs f0, 0x64(r31) */ // 0x8074C6C0
    /* lfs f1, 0xc(r1) */ // 0x8074C6C4
    /* stfs f1, 0xd0(r30) */ // 0x8074C6C8
    /* fmuls f1, f1, f1 */ // 0x8074C6CC
    /* lfs f3, 0x10(r1) */ // 0x8074C6D0
    /* stfs f3, 0xd4(r30) */ // 0x8074C6D4
    /* fmuls f3, f3, f3 */ // 0x8074C6D8
    /* fadds f1, f2, f1 */ // 0x8074C6DC
    /* fadds f1, f3, f1 */ // 0x8074C6E0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074C6E4
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074C6E8
    /* mfcr r0 */ // 0x8074C6EC
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074C6F0
    if (==) goto 0x0x8074c710;
    /* lfs f1, 0(r31) */ // 0x8074C6F8
    /* lfs f0, 0x60(r31) */ // 0x8074C6FC
    /* stfs f1, 0xcc(r30) */ // 0x8074C700
    /* stfs f0, 0xd0(r30) */ // 0x8074C704
    /* stfs f1, 0xd4(r30) */ // 0x8074C708
    /* b 0x8074c718 */ // 0x8074C70C
    r3 = r30 + 0xcc; // 0x8074C710
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r4 = r30 + 0xcc; // 0x8074C71C
    r5 = r30 + 0xb4; // 0x8074C720
    FUN_808A1E9C(r3, r3, r4, r5); // bl 0x808A1E9C
    r0 = *(0x34 + r1); // lwz @ 0x8074C728
    r31 = *(0x2c + r1); // lwz @ 0x8074C72C
    r30 = *(0x28 + r1); // lwz @ 0x8074C730
    return;
}