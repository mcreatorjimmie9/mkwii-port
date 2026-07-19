/* Function at 0x808708AC, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_808708AC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x808708B8
    r26 = r3;
    /* lis r31, 0 */ // 0x808708C0
    /* li r28, 0 */ // 0x808708C4
    r30 = r26;
    r31 = r31 + 0; // 0x808708CC
    r29 = r31;
    /* li r27, 0 */ // 0x808708D4
    r3 = *(0 + r29); // lwz @ 0x808708D8
    FUN_8089E314(); // bl 0x8089E314
    r4 = r30 + r27; // 0x808708E0
    r27 = r27 + 1; // 0x808708E4
    *(0x18c + r4) = r3; // stb @ 0x808708EC
    r29 = r29 + 4; // 0x808708F0
    if (<) goto 0x0x808708d8;
    r28 = r28 + 1; // 0x808708F8
    r30 = r30 + 8; // 0x808708FC
    r31 = r31 + 0x20; // 0x80870904
    if (<) goto 0x0x808708d0;
    /* li r3, 0x18 */ // 0x8087090C
    FUN_8089E314(r3); // bl 0x8089E314
    *(0x1a4 + r26) = r3; // stb @ 0x80870914
    /* li r3, 0x1a */ // 0x80870918
    FUN_8089E314(r3, r3); // bl 0x8089E314
    *(0x1a5 + r26) = r3; // stb @ 0x80870920
    r0 = *(0x24 + r1); // lwz @ 0x80870928
    return;
}