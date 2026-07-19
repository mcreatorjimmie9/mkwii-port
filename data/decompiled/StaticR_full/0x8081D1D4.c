/* Function at 0x8081D1D4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8081D1D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r6, 0 */ // 0x8081D1DC
    *(0x24 + r1) = r0; // stw @ 0x8081D1E0
    /* stmw r27, 0xc(r1) */ // 0x8081D1E4
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = *(4 + r4); // lwz @ 0x8081D1F4
    r6 = *(0 + r6); // lwz @ 0x8081D1F8
    /* mulli r0, r0, 0x24 */ // 0x8081D1FC
    r3 = r6 + r0; // 0x8081D200
    r3 = r3 + 0x48; // 0x8081D204
    FUN_80821284(r3); // bl 0x80821284
    r3 = *(0xc + r27); // lwz @ 0x8081D20C
    r4 = r28;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r28); // lwz @ 0x8081D218
    r3 = r27;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r28) = r0; // stw @ 0x8081D224
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r30 = r3;
    r3 = r27;
    FUN_8061E584(r3); // bl 0x8061E584
    r31 = r3;
    r3 = r27;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
}