/* Function at 0x80870938, size=84 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_80870938(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r24 */
    /* stmw r24, 0x40(r1) */ // 0x80870944
    r26 = r3;
    r27 = r4;
    r28 = r5;
    FUN_808CFA50(); // bl 0x808CFA50
    r0 = *(0x1a8 + r26); // lwz @ 0x80870958
    /* lis r30, 0 */ // 0x8087095C
    r30 = r30 + 0; // 0x80870960
    /* clrlwi r29, r3, 0x18 */ // 0x80870964
    /* slwi r6, r0, 1 */ // 0x80870968
    r0 = r27 / r6; // 0x80870970
    r5 = r30 + 0x62; // 0x80870974
    /* li r4, 0x10 */ // 0x80870978
    r0 = r0 * r6; // 0x8087097C
    /* subf r6, r0, r27 */ // 0x80870980
    /* crclr cr1eq */ // 0x80870984
    FUN_805E3430(r5, r4); // bl 0x805E3430
}