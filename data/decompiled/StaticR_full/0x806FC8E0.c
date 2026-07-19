/* Function at 0x806FC8E0, size=44 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FC8E0(int r3, int r4, int r5)
{
    /* Stack frame: -272(r1) */
    /* saved r27 */
    /* stmw r27, 0xfc(r1) */ // 0x806FC8EC
    r28 = r4;
    r27 = r3;
    r31 = r5;
    r3 = r28;
    /* li r4, 0 */ // 0x806FC904
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}