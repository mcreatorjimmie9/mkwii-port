/* Function at 0x80604768, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_80604768(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x80604774
    /* stmw r27, 0xc(r1) */ // 0x80604778
    r28 = r4;
    r27 = r3;
    r29 = r5;
    r30 = r6;
    r3 = r28;
    /* li r31, 0 */ // 0x80604790
    if (==) goto 0x0x806047a0;
    r4 = r27 + 4; // 0x80604798
    /* b 0x806047a4 */ // 0x8060479C
    r4 = r27;
    FUN_805EB784(r4, r4); // bl 0x805EB784
    if (==) goto 0x0x8060480c;
    r0 = *(0x10 + r27); // lbz @ 0x806047B0
    if (==) goto 0x0x806047d0;
    r0 = *(4 + r29); // lwz @ 0x806047BC
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x806047C0
    if (!=) goto 0x0x806047d0;
    /* li r0, 1 */ // 0x806047C8
    *(0x24 + r29) = r0; // stw @ 0x806047CC
    r3 = r29;
    r4 = r28;
    if (==) goto 0x0x806047e8;
    r5 = r27 + 4; // 0x806047E0
    /* b 0x806047ec */ // 0x806047E4
    r5 = r27;
    /* li r6, 0 */ // 0x806047EC
    FUN_805EBE08(r5, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r27); // lwz @ 0x806047F4
    if (==) goto 0x0x80604808;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r31, 1 */ // 0x80604808
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80604814
    return;
}