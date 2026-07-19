/* Function at 0x806EC108, size=76 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 2 function(s) */

int FUN_806EC108(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* lis r4, 0 */ // 0x806EC110
    *(0x44 + r1) = r0; // stw @ 0x806EC114
    /* stmw r19, 0xc(r1) */ // 0x806EC118
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806EC120
    FUN_806E6B58(r4); // bl 0x806E6B58
    r20 = r31;
    /* li r29, 0 */ // 0x806EC130
    /* li r28, 0x30 */ // 0x806EC134
    /* li r27, 0x24 */ // 0x806EC138
    /* li r26, 0x43 */ // 0x806EC13C
    /* li r25, 0 */ // 0x806EC140
    r3 = r19;
    /* li r4, 0 */ // 0x806EC148
    /* li r5, 4 */ // 0x806EC14C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}