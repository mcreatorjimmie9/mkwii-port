/* Function at 0x80894F34, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80894F34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x80894F40
    r25 = r3;
    /* li r26, 0 */ // 0x80894F48
    /* lis r28, 0 */ // 0x80894F4C
    r27 = r25;
    /* lis r30, 0 */ // 0x80894F54
    /* lis r31, 0 */ // 0x80894F58
    r5 = r28 + 0; // 0x80894F60
    r6 = r26 + 2; // 0x80894F64
    /* li r4, 0xa */ // 0x80894F68
    /* crclr cr1eq */ // 0x80894F6C
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
}