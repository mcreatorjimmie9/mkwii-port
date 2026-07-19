/* Function at 0x806675D4, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806675D4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0 */ // 0x806675DC
    *(0x34 + r1) = r0; // stw @ 0x806675E0
    /* stmw r23, 0xc(r1) */ // 0x806675E4
    r28 = r3;
    r29 = r4;
    r3 = *(0 + r5); // lwz @ 0x806675F0
    r3 = *(0 + r3); // lwz @ 0x806675F4
    r30 = *(0x3e8 + r3); // lwz @ 0x806675F8
    r31 = *(0 + r30); // lwz @ 0x806675FC
    /* b 0x80667620 */ // 0x80667600
    r4 = r29;
    r3 = r31 + 0x370; // 0x80667608
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x8066761c;
    /* b 0x80667764 */ // 0x80667618
    r31 = *(0x3b0 + r31); // lwz @ 0x8066761C
}