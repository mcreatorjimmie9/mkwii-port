/* Function at 0x805EC710, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805EC710(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805EC728
    *(0x10 + r1) = r28; // stw @ 0x805EC72C
    r28 = r4;
    r5 = *(4 + r3); // lwz @ 0x805EC734
    r0 = r5 rlwinm 0xb; // rlwinm
    if (==) goto 0x0x805ec808;
    if (==) goto 0x0x805ec79c;
    /* rlwinm. r0, r5, 0, 7, 7 */ // 0x805EC74C
    if (==) goto 0x0x805ec7e4;
    r29 = r31;
    /* li r30, 0 */ // 0x805EC758
    r3 = *(0x1c + r29); // lwz @ 0x805EC75C
    r5 = *(0x14 + r29); // lwz @ 0x805EC760
    r12 = *(0 + r3); // lwz @ 0x805EC764
    r4 = *(0xe4 + r3); // lwz @ 0x805EC768
    r12 = *(0x34 + r12); // lwz @ 0x805EC76C
    r5 = *(0 + r5); // lwz @ 0x805EC770
    /* mtctr r12 */ // 0x805EC774
    /* bctrl  */ // 0x805EC778
    r30 = r30 + 1; // 0x805EC77C
    r29 = r29 + 4; // 0x805EC780
    if (<) goto 0x0x805ec75c;
    r0 = *(4 + r31); // lwz @ 0x805EC78C
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r31) = r0; // stw @ 0x805EC794
    /* b 0x805ec7e4 */ // 0x805EC798
    /* rlwinm. r0, r5, 0, 7, 7 */ // 0x805EC79C
    if (!=) goto 0x0x805ec7e4;
    r29 = r31;
    /* li r30, 0 */ // 0x805EC7A8
    r3 = *(0x1c + r29); // lwz @ 0x805EC7AC
    r4 = *(0x14 + r29); // lwz @ 0x805EC7B0
    r12 = *(0 + r3); // lwz @ 0x805EC7B4
    r4 = *(0 + r4); // lwz @ 0x805EC7B8
    r12 = *(0x3c + r12); // lwz @ 0x805EC7BC
    /* mtctr r12 */ // 0x805EC7C0
    /* bctrl  */ // 0x805EC7C4
    r30 = r30 + 1; // 0x805EC7C8
    r29 = r29 + 4; // 0x805EC7CC
    if (<) goto 0x0x805ec7ac;
    r0 = *(4 + r31); // lwz @ 0x805EC7D8
    r0 = r0 | 0x100; // 0x805EC7DC
    *(4 + r31) = r0; // stw @ 0x805EC7E0
    if (==) goto 0x0x805ec7fc;
    r0 = *(4 + r31); // lwz @ 0x805EC7EC
    r0 = r0 | 0x20; // 0x805EC7F0
    *(4 + r31) = r0; // stw @ 0x805EC7F4
    /* b 0x805ec808 */ // 0x805EC7F8
    r0 = *(4 + r31); // lwz @ 0x805EC7FC
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r31) = r0; // stw @ 0x805EC804
    r0 = *(0x24 + r1); // lwz @ 0x805EC808
    r31 = *(0x1c + r1); // lwz @ 0x805EC80C
    r30 = *(0x18 + r1); // lwz @ 0x805EC810
    r29 = *(0x14 + r1); // lwz @ 0x805EC814
    r28 = *(0x10 + r1); // lwz @ 0x805EC818
    return;
}