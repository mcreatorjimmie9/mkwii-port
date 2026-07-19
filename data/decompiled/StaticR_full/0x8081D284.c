/* Function at 0x8081D284, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8081D284(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8081D290
    r31 = r3;
    r4 = *(0x54 + r3); // lwz @ 0x8081D298
    if (<=) goto 0x0x8081d39c;
    r0 = r4 + -1; // 0x8081D2A4
    *(0x54 + r3) = r0; // stw @ 0x8081D2A8
    if (==) goto 0x0x8081d2c4;
    if (==) goto 0x0x8081d2c4;
    if (!=) goto 0x0x8081d39c;
    r5 = *(0x50 + r3); // lwz @ 0x8081D2C4
    /* lis r4, 0 */ // 0x8081D2C8
    r28 = r5 + -1; // 0x8081D2CC
    *(0x50 + r3) = r28; // stw @ 0x8081D2D0
    /* slwi r0, r28, 2 */ // 0x8081D2D4
    r5 = r3 + r0; // 0x8081D2D8
    r3 = *(0 + r4); // lwz @ 0x8081D2DC
    r27 = *(0x20 + r5); // lwz @ 0x8081D2E0
    r0 = *(4 + r27); // lwz @ 0x8081D2E4
    r4 = r27;
    /* mulli r0, r0, 0x24 */ // 0x8081D2EC
    r3 = r3 + r0; // 0x8081D2F0
    r3 = r3 + 0x48; // 0x8081D2F4
    FUN_80821284(r4, r3); // bl 0x80821284
    r3 = *(0xc + r31); // lwz @ 0x8081D2FC
    r4 = r27;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r27); // lwz @ 0x8081D308
    r3 = r31;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r27) = r0; // stw @ 0x8081D314
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r29 = r3;
    r3 = r31;
    FUN_8061E584(r3); // bl 0x8061E584
    r30 = r3;
    r3 = r31;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
    r5 = r3;
    r3 = r27;
    r6 = r30;
    r4 = r28 + 1; // 0x8081D340
    r7 = r29 + 0x38; // 0x8081D344
}