/* Function at 0x805EC828, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_805EC828(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805EC834
    r26 = r3;
    r27 = r4;
    r5 = *(4 + r3); // lwz @ 0x805EC840
    r0 = r5 rlwinm 6; // rlwinm
    if (==) goto 0x0x805ec8dc;
    /* rlwinm. r0, r5, 0, 0xa, 0xa */ // 0x805EC850
    if (==) goto 0x0x805ec8dc;
    /* cntlzw r0, r4 */ // 0x805EC858
    r28 = r26;
    /* srwi r30, r0, 5 */ // 0x805EC860
    /* li r31, 0 */ // 0x805EC864
    r3 = *(0x14 + r28); // lwz @ 0x805EC868
    r5 = r30;
    /* li r4, 6 */ // 0x805EC870
    r29 = *(0 + r3); // lwz @ 0x805EC874
    r12 = *(0 + r29); // lwz @ 0x805EC878
    r3 = r29;
    r12 = *(0x20 + r12); // lwz @ 0x805EC880
    /* mtctr r12 */ // 0x805EC884
    /* bctrl  */ // 0x805EC888
    r12 = *(0 + r29); // lwz @ 0x805EC88C
    r3 = r29;
    r5 = r30;
    /* li r4, 7 */ // 0x805EC898
    r12 = *(0x20 + r12); // lwz @ 0x805EC89C
    /* mtctr r12 */ // 0x805EC8A0
    /* bctrl  */ // 0x805EC8A4
    r31 = r31 + 1; // 0x805EC8A8
    r28 = r28 + 4; // 0x805EC8AC
    if (<) goto 0x0x805ec868;
    if (==) goto 0x0x805ec8d0;
    r0 = *(4 + r26); // lwz @ 0x805EC8C0
    r0 = r0 | 0x400; // 0x805EC8C4
    *(4 + r26) = r0; // stw @ 0x805EC8C8
    /* b 0x805ec8dc */ // 0x805EC8CC
    r0 = *(4 + r26); // lwz @ 0x805EC8D0
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r26) = r0; // stw @ 0x805EC8D8
    r0 = *(0x24 + r1); // lwz @ 0x805EC8E0
    return;
}