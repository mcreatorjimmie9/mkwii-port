/* Function at 0x80654024, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_80654024(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r0, 0 */ // 0x80654030
    /* stmw r26, 8(r1) */ // 0x80654034
    r30 = r3;
    /* li r31, 0 */ // 0x8065403C
    r4 = *(0x1dc + r3); // lwz @ 0x80654040
    *(0x1e0 + r3) = r0; // stw @ 0x80654044
    /* addic. r0, r4, 1 */ // 0x80654048
    if (<=) goto 0x0x806540c4;
    /* lis r3, 0 */ // 0x80654050
    /* li r26, 0 */ // 0x80654054
    r3 = r3 + 0; // 0x80654058
    /* li r29, -1 */ // 0x8065405C
    r27 = r3 + 0x43; // 0x80654060
    /* b 0x806540b4 */ // 0x80654064
    r0 = *(0x270 + r30); // lwz @ 0x80654068
    r3 = r0 + r26; // 0x8065406C
    *(0x174 + r3) = r29; // stw @ 0x80654070
    FUN_806A0C48(); // bl 0x806A0C48
    r3 = *(0x1e0 + r30); // lwz @ 0x80654078
    r4 = r27;
    r0 = *(0x270 + r30); // lwz @ 0x80654080
    /* subf r3, r31, r3 */ // 0x80654084
    /* cntlzw r5, r3 */ // 0x80654088
    r3 = r0 + r26; // 0x8065408C
    /* srwi r28, r5, 5 */ // 0x80654090
    r3 = r3 + 0xa8; // 0x80654094
    FUN_80665D1C(r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x8065409C
    r26 = r26 + 0x178; // 0x806540A0
    r31 = r31 + 1; // 0x806540A4
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | r28; // 0x806540AC
    *(0xbb + r3) = r0; // stb @ 0x806540B0
    r3 = *(0x1dc + r30); // lwz @ 0x806540B4
    r0 = r3 + 1; // 0x806540B8
    if (<) goto 0x0x80654068;
    r0 = *(0x24 + r1); // lwz @ 0x806540C8
    return;
}