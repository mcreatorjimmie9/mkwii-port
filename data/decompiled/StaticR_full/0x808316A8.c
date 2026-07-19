/* Function at 0x808316A8, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808316A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808316C0
    r29 = r4;
    /* li r4, 0 */ // 0x808316C8
    *(0x10 + r1) = r28; // stw @ 0x808316CC
    r28 = r3;
    FUN_808313BC(r4); // bl 0x808313BC
    r31 = r3;
    if (>) goto 0x0x8083170c;
    r0 = *(4 + r28); // lwz @ 0x808316E4
    /* lis r5, 0 */ // 0x808316E8
    /* lis r4, 0 */ // 0x808316EC
    r3 = r28;
    /* mulli r0, r0, 0x74 */ // 0x808316F4
    r5 = r5 + 0; // 0x808316F8
    /* lfs f1, 0(r4) */ // 0x808316FC
    r4 = r5 + r0; // 0x80831700
    r4 = *(0x64 + r4); // lwz @ 0x80831704
    FUN_8082DFAC(r5); // bl 0x8082DFAC
    *(0x6d + r28) = r30; // stb @ 0x80831710
    if (!=) goto 0x0x80831774;
    r3 = *(0x7c + r28); // lwz @ 0x80831718
    /* rlwinm. r0, r3, 0, 0x1a, 0x1a */ // 0x8083171C
    if (==) goto 0x0x80831774;
    if (==) goto 0x0x80831774;
    r0 = *(4 + r28); // lwz @ 0x8083172C
    if (!=) goto 0x0x8083175c;
    /* rlwinm. r0, r3, 0, 0x19, 0x19 */ // 0x80831738
    /* li r3, 0 */ // 0x8083173C
    if (!=) goto 0x0x80831754;
    r0 = *(0x78 + r28); // lwz @ 0x80831744
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80831748
    if (==) goto 0x0x80831754;
    /* li r3, 1 */ // 0x80831750
    if (!=) goto 0x0x80831774;
    r0 = *(0xc + r28); // lha @ 0x8083175C
    /* li r4, 2 */ // 0x80831760
    r3 = *(4 + r28); // lwz @ 0x80831764
    r5 = *(0x6d + r28); // lbz @ 0x80831768
    /* clrlwi r6, r0, 0x10 */ // 0x8083176C
    FUN_80827458(r4); // bl 0x80827458
    r0 = *(0x24 + r1); // lwz @ 0x80831774
    r31 = *(0x1c + r1); // lwz @ 0x80831778
    r30 = *(0x18 + r1); // lwz @ 0x8083177C
    r29 = *(0x14 + r1); // lwz @ 0x80831780
    r28 = *(0x10 + r1); // lwz @ 0x80831784
    return;
}