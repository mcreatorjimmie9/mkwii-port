/* Function at 0x806EB550, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806EB550(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806EB55C
    r27 = r3 + 4; // 0x806EB560
    /* li r26, 0 */ // 0x806EB564
    /* li r30, 0 */ // 0x806EB568
    /* li r31, 0x10 */ // 0x806EB56C
    /* lis r29, 0 */ // 0x806EB570
    /* li r28, 2 */ // 0x806EB574
    r0 = *(0x1a + r27); // lbz @ 0x806EB578
    if (==) goto 0x0x806eb5f4;
    r0 = *(0x19 + r27); // lbz @ 0x806EB584
    if (==) goto 0x0x806eb59c;
    if (==) goto 0x0x806eb5b8;
    /* b 0x806eb5f4 */ // 0x806EB598
    r3 = *(0 + r29); // lwz @ 0x806EB59C
    r4 = *(0 + r27); // lwz @ 0x806EB5A0
    r0 = *(0x20 + r3); // lwz @ 0x806EB5A4
    if (>=) goto 0x0x806eb5f4;
    *(0x19 + r27) = r28; // stb @ 0x806EB5B0
    /* b 0x806eb5f4 */ // 0x806EB5B4
    r3 = *(0 + r29); // lwz @ 0x806EB5B8
    r4 = *(0 + r27); // lwz @ 0x806EB5BC
    r0 = *(0x20 + r3); // lwz @ 0x806EB5C0
    r3 = r4 + 0xc8; // 0x806EB5C4
    if (>=) goto 0x0x806eb5f4;
    *(0 + r27) = r30; // stw @ 0x806EB5D0
    r3 = r27 + 4; // 0x806EB5D4
    /* li r4, 0 */ // 0x806EB5D8
    /* li r5, 0x15 */ // 0x806EB5DC
    *(0x19 + r27) = r30; // stb @ 0x806EB5E0
    *(0x1a + r27) = r31; // stb @ 0x806EB5E4
    *(0x1b + r27) = r30; // stb @ 0x806EB5E8
    *(0x1c + r27) = r30; // stb @ 0x806EB5EC
    FUN_805E3430(r5); // bl 0x805E3430
    r26 = r26 + 1; // 0x806EB5F4
    r27 = r27 + 0x20; // 0x806EB5F8
    if (<) goto 0x0x806eb578;
    r0 = *(0x24 + r1); // lwz @ 0x806EB608
    return;
}