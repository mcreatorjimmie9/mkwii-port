/* Function at 0x8090A670, size=256 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_8090A670(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x8090A67C
    r30 = r3;
    /* li r31, 0 */ // 0x8090A684
    /* li r29, 0 */ // 0x8090A688
    /* li r28, 1 */ // 0x8090A68C
    /* b 0x8090a714 */ // 0x8090A690
    /* clrlwi r0, r31, 0x18 */ // 0x8090A694
    /* mulli r0, r0, 0x1c */ // 0x8090A698
    r3 = r30 + r0; // 0x8090A69C
    r25 = *(0xc + r3); // lwz @ 0x8090A6A0
    if (==) goto 0x0x8090a710;
    *(0x31c + r25) = r28; // stb @ 0x8090A6AC
    /* li r27, 0 */ // 0x8090A6B0
    /* li r26, 0 */ // 0x8090A6B4
    r0 = *(0x314 + r25); // lwz @ 0x8090A6B8
    r3 = r0 + r26; // 0x8090A6BC
    *(0xc + r3) = r29; // stb @ 0x8090A6C0
    r0 = *(0x314 + r25); // lwz @ 0x8090A6C4
    /* lwzx r3, r26, r0 */ // 0x8090A6C8
    r4 = r0 + r26; // 0x8090A6CC
    if (==) goto 0x0x8090a700;
    r0 = *(8 + r4); // lwz @ 0x8090A6D8
    if (==) goto 0x0x8090a700;
    r12 = *(0 + r3); // lwz @ 0x8090A6E4
    r12 = *(0x10 + r12); // lwz @ 0x8090A6E8
    /* mtctr r12 */ // 0x8090A6EC
    /* bctrl  */ // 0x8090A6F0
    r0 = *(0x314 + r25); // lwz @ 0x8090A6F4
    r3 = r0 + r26; // 0x8090A6F8
    *(8 + r3) = r29; // stw @ 0x8090A6FC
    r27 = r27 + 1; // 0x8090A700
    r26 = r26 + 0x64; // 0x8090A704
    if (<) goto 0x0x8090a6b8;
    r31 = r31 + 1; // 0x8090A710
    r0 = *(0 + r30); // lbz @ 0x8090A714
    /* clrlwi r3, r31, 0x18 */ // 0x8090A718
    if (<) goto 0x0x8090a694;
    /* li r5, 0 */ // 0x8090A724
    /* li r4, 1 */ // 0x8090A728
    /* b 0x8090a74c */ // 0x8090A72C
    r0 = r5 rlwinm 2; // rlwinm
    r3 = r30 + r0; // 0x8090A734
    r3 = *(0x1f74 + r3); // lwz @ 0x8090A738
    if (==) goto 0x0x8090a748;
    *(0xd0 + r3) = r4; // stb @ 0x8090A744
    r5 = r5 + 1; // 0x8090A748
    r0 = *(0x1eec + r30); // lbz @ 0x8090A74C
    /* clrlwi r3, r5, 0x18 */ // 0x8090A750
    if (<) goto 0x0x8090a730;
    r0 = *(0x34 + r1); // lwz @ 0x8090A760
    return;
}