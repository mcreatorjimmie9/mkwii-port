/* Function at 0x807D021C, size=108 bytes */
/* Stack frame: 0 bytes */

void FUN_807D021C(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(8 + r3); // lwz @ 0x807D021C
    /* lis r4, 0 */ // 0x807D0220
    /* lis r5, 0 */ // 0x807D0224
    r6 = *(4 + r3); // lwz @ 0x807D0228
    /* mulli r0, r0, 0x14 */ // 0x807D022C
    /* lfs f0, 0(r4) */ // 0x807D0230
    r5 = r5 + 0; // 0x807D0234
    /* stfsx f1, r6, r0 */ // 0x807D0238
    r0 = *(8 + r3); // lwz @ 0x807D023C
    r4 = *(4 + r3); // lwz @ 0x807D0240
    /* mulli r0, r0, 0x14 */ // 0x807D0244
    r4 = r4 + r0; // 0x807D0248
    /* stfs f0, 4(r4) */ // 0x807D024C
    r0 = *(8 + r3); // lwz @ 0x807D0250
    r7 = *(4 + r3); // lwz @ 0x807D0254
    /* mulli r6, r0, 0x14 */ // 0x807D0258
    r0 = *(4 + r5); // lwz @ 0x807D025C
    r4 = *(0 + r5); // lwz @ 0x807D0260
    r6 = r7 + r6; // 0x807D0264
    *(8 + r6) = r4; // stw @ 0x807D0268
    *(0xc + r6) = r0; // stw @ 0x807D026C
    r0 = *(8 + r5); // lwz @ 0x807D0270
    *(0x10 + r6) = r0; // stw @ 0x807D0274
    r4 = *(8 + r3); // lwz @ 0x807D0278
    r0 = r4 + 1; // 0x807D027C
    *(8 + r3) = r0; // stw @ 0x807D0280
    return;
}