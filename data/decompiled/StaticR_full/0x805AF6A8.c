/* Function at 0x805AF6A8, size=356 bytes */
/* Stack frame: 16 bytes */

void FUN_805AF6A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r6, 0 */ // 0x805AF6AC
    r3 = *(6 + r5); // lhz @ 0x805AF6B0
    /* andi. r0, r3, 0x900 */ // 0x805AF6B4
    if (==) goto 0x0x805af6c0;
    r6 = r6 | 1; // 0x805AF6BC
    /* rlwinm. r0, r3, 0, 0x15, 0x16 */ // 0x805AF6C0
    if (==) goto 0x0x805af6d0;
    r0 = r6 | 2; // 0x805AF6C8
    /* clrlwi r6, r0, 0x10 */ // 0x805AF6CC
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x805AF6D0
    if (==) goto 0x0x805af6e0;
    r0 = r6 | 4; // 0x805AF6D8
    /* clrlwi r6, r0, 0x10 */ // 0x805AF6DC
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x805AF6E0
    if (==) goto 0x0x805af6f0;
    r0 = r6 | 8; // 0x805AF6E8
    /* clrlwi r6, r0, 0x10 */ // 0x805AF6EC
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x805AF6F0
    if (==) goto 0x0x805af700;
    r0 = r6 | 0x10; // 0x805AF6F8
    /* clrlwi r6, r0, 0x10 */ // 0x805AF6FC
    /* clrlwi. r0, r3, 0x1f */ // 0x805AF700
    if (==) goto 0x0x805af710;
    r0 = r6 | 0x20; // 0x805AF708
    /* clrlwi r6, r0, 0x10 */ // 0x805AF70C
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805AF710
    if (==) goto 0x0x805af720;
    r0 = r6 | 0x40; // 0x805AF718
    /* clrlwi r6, r0, 0x10 */ // 0x805AF71C
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x805AF720
    if (==) goto 0x0x805af730;
    r0 = r6 | 0x80; // 0x805AF728
    /* clrlwi r6, r0, 0x10 */ // 0x805AF72C
    /* andi. r0, r3, 0x5000 */ // 0x805AF730
    if (==) goto 0x0x805af740;
    r0 = r6 | 0x100; // 0x805AF738
    /* clrlwi r6, r0, 0x10 */ // 0x805AF73C
    *(4 + r4) = r6; // sth @ 0x805AF740
    /* lis r3, 0 */ // 0x805AF744
    r0 = *(6 + r5); // lhz @ 0x805AF748
    *(6 + r4) = r0; // sth @ 0x805AF74C
    r6 = *(0x10 + r5); // lbz @ 0x805AF750
    *(0x18 + r4) = r6; // stb @ 0x805AF754
    r3 = *(0 + r3); // lwz @ 0x805AF758
    r0 = *(0x4155 + r3); // lbz @ 0x805AF75C
    if (==) goto 0x0x805af79c;
    /* lis r0, 0x4330 */ // 0x805AF768
    *(0xc + r1) = r6; // stw @ 0x805AF76C
    /* lis r6, 0 */ // 0x805AF770
    /* lis r3, 0 */ // 0x805AF774
    *(8 + r1) = r0; // stw @ 0x805AF778
    /* lfd f2, 0(r6) */ // 0x805AF77C
    /* lfd f0, 8(r1) */ // 0x805AF780
    /* lfs f1, 0(r3) */ // 0x805AF784
    /* fsubs f0, f0, f2 */ // 0x805AF788
    /* fsubs f0, f0, f1 */ // 0x805AF78C
    /* fdivs f0, f0, f1 */ // 0x805AF790
    /* fneg f0, f0 */ // 0x805AF794
    /* b 0x805af7c8 */ // 0x805AF798
    /* lis r0, 0x4330 */ // 0x805AF79C
    *(0xc + r1) = r6; // stw @ 0x805AF7A0
    /* lis r6, 0 */ // 0x805AF7A4
    /* lis r3, 0 */ // 0x805AF7A8
    *(8 + r1) = r0; // stw @ 0x805AF7AC
    /* lfd f2, 0(r6) */ // 0x805AF7B0
    /* lfd f0, 8(r1) */ // 0x805AF7B4
    /* lfs f1, 0(r3) */ // 0x805AF7B8
    /* fsubs f0, f0, f2 */ // 0x805AF7BC
    /* fsubs f0, f0, f1 */ // 0x805AF7C0
    /* fdivs f0, f0, f1 */ // 0x805AF7C4
    /* stfs f0, 8(r4) */ // 0x805AF7C8
    /* lis r0, 0x4330 */ // 0x805AF7CC
    /* lis r6, 0 */ // 0x805AF7D0
    /* lis r3, 0 */ // 0x805AF7D4
    r5 = *(0x11 + r5); // lbz @ 0x805AF7D8
    *(0xc + r1) = r5; // stw @ 0x805AF7DC
    /* lfd f2, 0(r6) */ // 0x805AF7E0
    *(8 + r1) = r0; // stw @ 0x805AF7E4
    /* lfs f1, 0(r3) */ // 0x805AF7E8
    /* lfd f0, 8(r1) */ // 0x805AF7EC
    *(0x19 + r4) = r5; // stb @ 0x805AF7F0
    /* fsubs f0, f0, f2 */ // 0x805AF7F4
    /* fsubs f0, f0, f1 */ // 0x805AF7F8
    /* fdivs f0, f0, f1 */ // 0x805AF7FC
    /* stfs f0, 0xc(r4) */ // 0x805AF800
    return;
}