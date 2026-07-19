/* Function at 0x8061B054, size=204 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_8061B054(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x8061B060
    /* lis r26, 0 */ // 0x8061B064
    r27 = r3;
    /* li r29, 0 */ // 0x8061B06C
    r26 = r26 + 0; // 0x8061B070
    /* lis r25, 0 */ // 0x8061B074
    /* li r31, 1 */ // 0x8061B078
    /* b 0x8061b0fc */ // 0x8061B07C
    r30 = r29 rlwinm 1; // rlwinm
    /* li r28, 0 */ // 0x8061B084
    r0 = r28 + r30; // 0x8061B088
    r3 = *(0x20 + r27); // lwz @ 0x8061B08C
    /* clrlwi r4, r0, 0x18 */ // 0x8061B090
    r0 = *(0x24 + r27); // lwz @ 0x8061B094
    r4 = r31 << r4; // slw
    r5 = r3 & r4; // 0x8061B09C
    r3 = r0 & r4; // 0x8061B0A0
    /* neg r4, r5 */ // 0x8061B0A4
    /* neg r0, r3 */ // 0x8061B0A8
    r0 = r0 | r3; // 0x8061B0AC
    r4 = r4 | r5; // 0x8061B0B0
    /* srwi r3, r4, 0x1f */ // 0x8061B0B4
    /* srwi r0, r0, 0x1f */ // 0x8061B0B8
    if (==) goto 0x0x8061b0ec;
    r3 = *(0 + r25); // lwz @ 0x8061B0C4
    /* clrlwi r4, r29, 0x18 */ // 0x8061B0C8
    FUN_8061D97C(); // bl 0x8061D97C
    /* clrlwi r0, r28, 0x18 */ // 0x8061B0D0
    r4 = r3;
    /* mulli r0, r0, 0xc */ // 0x8061B0D8
    r3 = r27;
    r12 = r26 + r0; // 0x8061B0E0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r28 = r28 + 1; // 0x8061B0EC
    if (<) goto 0x0x8061b088;
    r29 = r29 + 1; // 0x8061B0F8
    r3 = *(0 + r25); // lwz @ 0x8061B0FC
    /* clrlwi r4, r29, 0x18 */ // 0x8061B100
    r0 = *(0x24 + r3); // lbz @ 0x8061B104
    if (<) goto 0x0x8061b080;
    r0 = *(0x34 + r1); // lwz @ 0x8061B114
}