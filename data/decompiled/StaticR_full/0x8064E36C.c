/* Function at 0x8064E36C, size=76 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_8064E36C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -112(r1) */
    /* saved r25 */
    /* stmw r25, 0x54(r1) */ // 0x8064E378
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r8 = *(0 + r3); // lwz @ 0x8064E390
    r3 = r8 + 0xa8; // 0x8064E394
    FUN_806660A8(r3); // bl 0x806660A8
    /* lis r5, 0 */ // 0x8064E39C
    r6 = r29;
    /* li r4, 0x46 */ // 0x8064E3A8
    r5 = r5 + 0; // 0x8064E3AC
    /* crclr cr1eq */ // 0x8064E3B0
    FUN_805E3430(r6, r3, r4, r5); // bl 0x805E3430
}