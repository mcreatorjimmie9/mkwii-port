/* Function at 0x80824AE4, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80824AE4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80824AF0
    /* lis r29, 0 */ // 0x80824AF4
    r26 = r3;
    /* li r28, 0 */ // 0x80824AFC
    r29 = r29 + 0; // 0x80824B00
    /* li r27, 0 */ // 0x80824B04
    /* li r30, 0 */ // 0x80824B08
    /* lis r31, 0 */ // 0x80824B0C
    r0 = *(0 + r31); // lwz @ 0x80824B10
    r3 = r0 + r30; // 0x80824B14
    r3 = r3 + 0x48; // 0x80824B18
    FUN_80822540(r3); // bl 0x80822540
    r0 = *(0x5c + r29); // lwz @ 0x80824B20
    r27 = r27 + 1; // 0x80824B24
    r30 = r30 + 0x24; // 0x80824B2C
    r0 = r0 * r3; // 0x80824B30
    r29 = r29 + 0x74; // 0x80824B34
    /* clrlwi r0, r0, 0x10 */ // 0x80824B38
    r28 = r28 + r0; // 0x80824B3C
    if (<) goto 0x0x80824b10;
    r0 = r28 + -0x1e; // 0x80824B44
    *(0x42c + r26) = r0; // stw @ 0x80824B48
    r0 = *(0x24 + r1); // lwz @ 0x80824B50
    return;
}