/* Function at 0x8060573C, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8060573C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x80605748
    /* lis r30, 0 */ // 0x8060574C
    r26 = r3;
    r27 = r4;
    /* li r29, 0 */ // 0x80605758
    r30 = r30 + 0; // 0x8060575C
    /* li r31, 0 */ // 0x80605760
    r0 = r29 rlwinm 2; // rlwinm
    r3 = r26;
    /* lwzx r28, r30, r0 */ // 0x8060576C
    r4 = r28;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}