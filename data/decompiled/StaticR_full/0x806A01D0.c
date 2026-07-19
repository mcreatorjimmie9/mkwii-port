/* Function at 0x806A01D0, size=184 bytes */
/* Stack frame: 0 bytes */

void FUN_806A01D0(int r3, int r4, int r5)
{
    r4 = *(0x64 + r3); // lwz @ 0x806A01D0
    r4 = *(8 + r4); // lwz @ 0x806A01D4
    if (==) goto 0x0x806a0214;
    /* lfs f2, 0x34(r3) */ // 0x806A01E0
    /* lfs f0, 0x28(r4) */ // 0x806A01E4
    /* lfs f1, 0x1c(r3) */ // 0x806A01E8
    /* fmuls f3, f2, f0 */ // 0x806A01EC
    /* lfs f2, 0x38(r3) */ // 0x806A01F0
    /* lfs f0, 0x20(r3) */ // 0x806A01F4
    /* fadds f1, f1, f3 */ // 0x806A01F8
    /* stfs f1, 0x4c(r3) */ // 0x806A01FC
    /* lfs f1, 0x2c(r4) */ // 0x806A0200
    /* fmuls f1, f2, f1 */ // 0x806A0204
    /* fadds f0, f0, f1 */ // 0x806A0208
    /* stfs f0, 0x50(r3) */ // 0x806A020C
    /* b 0x806a0234 */ // 0x806A0210
    /* lfs f3, 0x1c(r3) */ // 0x806A0214
    /* lfs f2, 0x34(r3) */ // 0x806A0218
    /* lfs f1, 0x20(r3) */ // 0x806A021C
    /* lfs f0, 0x38(r3) */ // 0x806A0220
    /* fadds f2, f3, f2 */ // 0x806A0224
    /* fadds f0, f1, f0 */ // 0x806A0228
    /* stfs f2, 0x4c(r3) */ // 0x806A022C
    /* stfs f0, 0x50(r3) */ // 0x806A0230
    r5 = *(0x30 + r3); // lbz @ 0x806A0234
    r4 = *(0x48 + r3); // lbz @ 0x806A0238
    r5 = r5 + 1; // 0x806A023C
    /* lfs f1, 0x24(r3) */ // 0x806A0240
    r0 = r4 + 1; // 0x806A0244
    /* lfs f0, 0x3c(r3) */ // 0x806A0248
    r4 = r5 * r0; // 0x806A024C
    /* lfs f3, 0x28(r3) */ // 0x806A0250
    /* fadds f4, f1, f0 */ // 0x806A0254
    /* lfs f2, 0x40(r3) */ // 0x806A0258
    /* lfs f1, 0x2c(r3) */ // 0x806A025C
    /* lfs f0, 0x44(r3) */ // 0x806A0260
    /* fmuls f2, f3, f2 */ // 0x806A0264
    r0 = r4 + -1; // 0x806A0268
    /* fmuls f0, f1, f0 */ // 0x806A026C
    r0 = r0 rlwinm 0x18; // rlwinm
    /* stfs f4, 0x54(r3) */ // 0x806A0274
    /* stfs f2, 0x58(r3) */ // 0x806A0278
    /* stfs f0, 0x5c(r3) */ // 0x806A027C
    *(0x60 + r3) = r0; // stb @ 0x806A0280
    return;
}