/* Function at 0x80666250, size=52 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_80666250(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -208(r1) */
    /* saved r19 */
    /* lis r6, 0 */ // 0x80666258
    *(0xd4 + r1) = r0; // stw @ 0x8066625C
    r6 = r6 + 0; // 0x80666260
    /* stmw r19, 0x9c(r1) */ // 0x80666264
    r19 = r4;
    r30 = r3;
    r5 = r19;
    r4 = r6 + 9; // 0x80666278
    /* crclr cr1eq */ // 0x8066627C
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}