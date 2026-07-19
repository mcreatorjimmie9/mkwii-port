/* Function at 0x808224B8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808224B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808224C4
    r27 = r3;
    r3 = r4;
    r4 = *(0 + r27); // lwz @ 0x808224D0
    FUN_8082795C(r3); // bl 0x8082795C
    /* clrlwi r30, r3, 0x10 */ // 0x808224D8
    /* li r29, 0 */ // 0x808224DC
    /* li r28, 0 */ // 0x808224E0
    /* li r31, 0 */ // 0x808224E4
    /* b 0x8082251c */ // 0x808224E8
    r3 = *(4 + r27); // lwz @ 0x808224EC
    /* lwzx r3, r3, r31 */ // 0x808224F0
    r0 = *(0xc + r3); // lha @ 0x808224F4
    if (!=) goto 0x0x80822514;
    r0 = *(0 + r27); // lwz @ 0x80822500
    /* li r29, 1 */ // 0x80822504
    if (!=) goto 0x0x80822514;
    FUN_808340C4(); // bl 0x808340C4
    r31 = r31 + 4; // 0x80822514
    r28 = r28 + 1; // 0x80822518
    r0 = *(0x14 + r27); // lwz @ 0x8082251C
    if (<) goto 0x0x808224ec;
    r3 = r29;
    r0 = *(0x24 + r1); // lwz @ 0x80822530
    return;
}