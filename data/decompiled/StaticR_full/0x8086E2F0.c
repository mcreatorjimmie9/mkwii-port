/* Function at 0x8086E2F0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_8086E2F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8086E2FC
    r27 = r3;
    /* li r30, 0xc */ // 0x8086E304
    /* li r28, 0 */ // 0x8086E308
    r29 = r27;
    /* li r31, 0 */ // 0x8086E310
    *(8 + r3) = r30; // stb @ 0x8086E314
    /* b 0x8086e33c */ // 0x8086E318
    r4 = *(0x18 + r29); // lwz @ 0x8086E31C
    *(8 + r4) = r30; // stw @ 0x8086E320
    *(0xc + r4) = r31; // stb @ 0x8086E324
    r3 = *(0 + r4); // lwz @ 0x8086E328
    r4 = *(4 + r4); // lwz @ 0x8086E32C
    FUN_805ECA18(); // bl 0x805ECA18
    r29 = r29 + 4; // 0x8086E334
    r28 = r28 + 1; // 0x8086E338
    r0 = *(4 + r27); // lwz @ 0x8086E33C
    if (<) goto 0x0x8086e31c;
    r0 = *(0x24 + r1); // lwz @ 0x8086E34C
    return;
}