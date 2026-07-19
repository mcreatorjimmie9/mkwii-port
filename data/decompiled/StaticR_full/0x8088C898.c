/* Function at 0x8088C898, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8088C898(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x8088C8A4
    r25 = r3;
    /* li r26, 0 */ // 0x8088C8AC
    /* lis r28, 0 */ // 0x8088C8B0
    r27 = r25;
    /* lis r30, 0 */ // 0x8088C8B8
    /* lis r31, 0 */ // 0x8088C8BC
    r5 = r28 + 0; // 0x8088C8C4
    r6 = r26 + 1; // 0x8088C8C8
    /* li r4, 0xa */ // 0x8088C8CC
    /* crclr cr1eq */ // 0x8088C8D0
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
}