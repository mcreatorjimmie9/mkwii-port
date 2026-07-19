/* Function at 0x807B5908, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B5908(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807B5910
    *(0x24 + r1) = r0; // stw @ 0x807B5914
    *(0x1c + r1) = r31; // stw @ 0x807B5918
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x807B5920
    r4 = *(4 + r3); // lbz @ 0x807B5924
    r5 = *(0xc + r5); // lwz @ 0x807B5928
    /* slwi r0, r4, 2 */ // 0x807B592C
    /* lwzx r5, r5, r0 */ // 0x807B5930
    r0 = *(0x38 + r5); // lwz @ 0x807B5934
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x807B5938
    if (==) goto 0x0x807b59d8;
    /* lis r3, 0 */ // 0x807B5940
    r3 = *(0 + r3); // lwz @ 0x807B5944
    FUN_8061D97C(r3); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x807B594C
    r4 = *(4 + r4); // lwz @ 0x807B5950
    r0 = *(8 + r4); // lwz @ 0x807B5954
    /* clrlwi. r0, r0, 0x1f */ // 0x807B5958
    if (!=) goto 0x0x807b59a0;
    /* lis r4, 0 */ // 0x807B5960
    /* lis r0, 0x4330 */ // 0x807B5964
    r6 = *(0 + r4); // lha @ 0x807B5968
    /* lis r5, 0 */ // 0x807B596C
    *(8 + r1) = r0; // stw @ 0x807B5970
    /* lis r4, 0 */ // 0x807B5974
    /* xoris r0, r6, 0x8000 */ // 0x807B5978
    /* lfd f3, 0(r5) */ // 0x807B597C
    *(0xc + r1) = r0; // stw @ 0x807B5980
    /* lfs f1, 0(r4) */ // 0x807B5984
    /* lfd f2, 8(r1) */ // 0x807B5988
    /* lfs f0, 8(r31) */ // 0x807B598C
    /* fsubs f2, f2, f3 */ // 0x807B5990
    /* fdivs f1, f1, f2 */ // 0x807B5994
    /* fadds f0, f0, f1 */ // 0x807B5998
    /* stfs f0, 8(r31) */ // 0x807B599C
    /* lis r4, 0 */ // 0x807B59A0
    /* lfs f1, 8(r31) */ // 0x807B59A4
    /* lfs f0, 0(r4) */ // 0x807B59A8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B59AC
    if (<=) goto 0x0x807b5a34;
    r3 = *(0 + r3); // lwz @ 0x807B59B4
    r3 = *(4 + r3); // lwz @ 0x807B59B8
    r0 = *(4 + r3); // lwz @ 0x807B59BC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x807B59C0
    if (!=) goto 0x0x807b5a34;
    /* li r0, 1 */ // 0x807B59C8
    /* stfs f0, 8(r31) */ // 0x807B59CC
    *(5 + r31) = r0; // stb @ 0x807B59D0
    /* b 0x807b5a34 */ // 0x807B59D4
    /* lis r4, 0 */ // 0x807B59D8
    /* lis r0, 0x4330 */ // 0x807B59DC
    r6 = *(0 + r4); // lha @ 0x807B59E0
    /* lis r7, 0 */ // 0x807B59E4
    /* lis r5, 0 */ // 0x807B59E8
    *(8 + r1) = r0; // stw @ 0x807B59EC
    /* xoris r6, r6, 0x8000 */ // 0x807B59F0
    /* lfd f3, 0(r7) */ // 0x807B59F4
    *(0xc + r1) = r6; // stw @ 0x807B59F8
    /* lis r4, 0 */ // 0x807B59FC
    /* lfs f2, 0(r5) */ // 0x807B5A00
    /* lfd f0, 8(r1) */ // 0x807B5A04
    /* lfs f1, 8(r3) */ // 0x807B5A08
    /* fsubs f3, f0, f3 */ // 0x807B5A0C
    /* lfs f0, 0(r4) */ // 0x807B5A10
    /* fdivs f2, f2, f3 */ // 0x807B5A14
    /* fsubs f1, f1, f2 */ // 0x807B5A18
    /* stfs f1, 8(r3) */ // 0x807B5A1C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B5A20
    if (>=) goto 0x0x807b5a34;
    /* li r0, 0 */ // 0x807B5A28
    /* stfs f0, 8(r3) */ // 0x807B5A2C
    *(5 + r3) = r0; // stb @ 0x807B5A30
    r0 = *(0x24 + r1); // lwz @ 0x807B5A34
    r31 = *(0x1c + r1); // lwz @ 0x807B5A38
    return;
}