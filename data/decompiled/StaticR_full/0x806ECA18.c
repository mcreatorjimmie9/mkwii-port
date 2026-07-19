/* Function at 0x806ECA18, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806ECA18(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x806ECA24
    r31 = r3;
    r25 = r3 + 0x18; // 0x806ECA2C
    /* li r26, 0 */ // 0x806ECA30
    r24 = r31;
    /* li r27, 0x30 */ // 0x806ECA38
    /* li r30, 0x24 */ // 0x806ECA3C
    /* li r29, 0x43 */ // 0x806ECA40
    /* li r28, 0 */ // 0x806ECA44
    r3 = r25;
    /* li r4, 0 */ // 0x806ECA4C
    /* li r5, 4 */ // 0x806ECA50
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}