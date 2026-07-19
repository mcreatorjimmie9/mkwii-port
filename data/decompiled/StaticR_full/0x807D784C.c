/* Function at 0x807D784C, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807D784C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 1 */ // 0x807D7860
    *(0x14 + r1) = r29; // stw @ 0x807D7864
    r29 = r3;
    r4 = *(0x1f0 + r3); // lwz @ 0x807D786C
    r31 = *(0 + r4); // lwz @ 0x807D7870
    r3 = r31;
    FUN_807B6194(r3); // bl 0x807B6194
    if (!=) goto 0x0x807d7898;
    r3 = r31;
    FUN_807B61BC(r3, r3); // bl 0x807B61BC
    if (!=) goto 0x0x807d7898;
    /* li r30, 0 */ // 0x807D7894
    r3 = *(0 + r31); // lwz @ 0x807D7898
    r3 = *(4 + r3); // lwz @ 0x807D789C
    r0 = *(0xc + r3); // lwz @ 0x807D78A0
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x807D78A4
    if (==) goto 0x0x807d78bc;
    r3 = r29;
    r4 = r29 + 0x16c; // 0x807D78B0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d7964 */ // 0x807D78B8
    r12 = *(0x34 + r29); // lwz @ 0x807D78BC
    r3 = r29;
    r4 = *(0x1f4 + r29); // lwz @ 0x807D78C4
    r12 = *(0x8c + r12); // lwz @ 0x807D78C8
    /* mtctr r12 */ // 0x807D78CC
    /* bctrl  */ // 0x807D78D0
    if (==) goto 0x0x807d7928;
    if (!=) goto 0x0x807d7928;
    r3 = *(0x1f4 + r29); // lwz @ 0x807D78E4
    r0 = *(0 + r3); // lwz @ 0x807D78E8
    *(0x1f8 + r29) = r0; // stw @ 0x807D78EC
    r0 = *(4 + r3); // lwz @ 0x807D78F0
    if (==) goto 0x0x807d7908;
    if (==) goto 0x0x807d7918;
    /* b 0x807d7964 */ // 0x807D7904
    r3 = r29;
    r4 = r29 + 0xbc; // 0x807D790C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d7964 */ // 0x807D7914
    r3 = r29;
    r4 = r29 + 0x114; // 0x807D791C
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807d7964 */ // 0x807D7924
    r0 = *(0x1c + r31); // lwz @ 0x807D7928
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x807D792C
    if (==) goto 0x0x807d794c;
    if (!=) goto 0x0x807d794c;
    r3 = r29;
    r4 = r29 + 0x90; // 0x807D7940
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d7964 */ // 0x807D7948
    r0 = *(0x20c + r29); // lbz @ 0x807D794C
    if (==) goto 0x0x807d7964;
    r3 = r29;
    r4 = r29 + 0x140; // 0x807D795C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807D7964
    r31 = *(0x1c + r1); // lwz @ 0x807D7968
    r30 = *(0x18 + r1); // lwz @ 0x807D796C
    r29 = *(0x14 + r1); // lwz @ 0x807D7970
    return;
}