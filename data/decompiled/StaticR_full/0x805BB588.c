/* Function at 0x805BB588, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805BB588(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0x1062 */ // 0x805BB590
    *(0x34 + r1) = r0; // stw @ 0x805BB594
    /* stmw r23, 0xc(r1) */ // 0x805BB598
    /* li r25, 0 */ // 0x805BB59C
    /* li r30, 0x64 */ // 0x805BB5A0
    r23 = r3;
    r31 = r25 * r30; // 0x805BB5A8
    r24 = r4;
    r28 = r5 + 0x4dd3; // 0x805BB5B0
    /* li r27, 1 */ // 0x805BB5B4
    /* li r26, 8 */ // 0x805BB5B8
    /* lis r29, -0x8000 */ // 0x805BB5BC
    r3 = r23;
    r4 = r24;
    /* li r5, 0 */ // 0x805BB5C8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}