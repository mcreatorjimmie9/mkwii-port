/* Function at 0x806EC958, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_806EC958(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x806EC964
    /* stmw r26, 8(r1) */ // 0x806EC968
    r28 = r3;
    r29 = r4;
    if (==) goto 0x0x806eca00;
    /* lis r3, 0 */ // 0x806EC978
    /* li r30, 0 */ // 0x806EC97C
    r31 = *(0 + r3); // lwz @ 0x806EC980
    /* li r27, 1 */ // 0x806EC984
    r4 = *(0x291c + r31); // lwz @ 0x806EC988
    /* clrlwi r0, r30, 0x18 */ // 0x806EC98C
    r3 = r27 << r0; // slw
    /* mulli r0, r4, 0x58 */ // 0x806EC994
    r4 = r31 + r0; // 0x806EC998
    r0 = *(0x48 + r4); // lwz @ 0x806EC99C
    /* and. r0, r3, r0 */ // 0x806EC9A0
    if (==) goto 0x0x806ec9e4;
    r0 = *(0x59 + r4); // lbz @ 0x806EC9A8
    if (==) goto 0x0x806ec9e4;
    r26 = r30 rlwinm 3; // rlwinm
    r0 = r30 rlwinm 2; // rlwinm
    r4 = r28 + r26; // 0x806EC9BC
    /* li r5, 0 */ // 0x806EC9C0
    r6 = r28 + r0; // 0x806EC9C4
    r3 = *(0x350 + r4); // lwz @ 0x806EC9C8
    r4 = *(0x354 + r4); // lwz @ 0x806EC9CC
    r6 = *(0x3b0 + r6); // lwz @ 0x806EC9D0
    FUN_805E3430(r5); // bl 0x805E3430
    r5 = r31 + r26; // 0x806EC9D8
    *(0x2964 + r5) = r4; // stw @ 0x806EC9DC
    *(0x2960 + r5) = r3; // stw @ 0x806EC9E0
    r30 = r30 + 1; // 0x806EC9E4
    if (<) goto 0x0x806ec988;
    if (<=) goto 0x0x806eca00;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r28;
    r0 = *(0x24 + r1); // lwz @ 0x806ECA08
}