/* Function at 0x808820A4, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_808820A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x808820B0
    r25 = r3;
    /* li r26, 0 */ // 0x808820B8
    /* lis r28, 0 */ // 0x808820BC
    r27 = r25;
    /* lis r30, 0 */ // 0x808820C4
    /* lis r31, 0 */ // 0x808820C8
    r5 = r28 + 0; // 0x808820D0
    r6 = r26 + 2; // 0x808820D4
    /* li r4, 0xa */ // 0x808820D8
    /* crclr cr1eq */ // 0x808820DC
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
}