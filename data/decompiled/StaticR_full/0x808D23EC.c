/* Function at 0x808D23EC, size=72 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_808D23EC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r25 */
    /* lis r7, 0 */ // 0x808D23F4
    /* lis r6, 0 */ // 0x808D23F8
    *(0xa4 + r1) = r0; // stw @ 0x808D23FC
    /* stmw r25, 0x84(r1) */ // 0x808D2400
    r28 = r3;
    r29 = r4;
    r31 = r7 + 0; // 0x808D240C
    r30 = r5;
    /* li r4, 2 */ // 0x808D2414
    r5 = r31 + 0x36; // 0x808D2418
    r3 = *(0 + r6); // lwz @ 0x808D241C
    /* li r6, 0 */ // 0x808D2420
    FUN_805CFD60(r4, r5, r6); // bl 0x805CFD60
    r27 = r3;
    /* li r3, 0x20 */ // 0x808D242C
    FUN_805E3430(r6, r3); // bl 0x805E3430
}