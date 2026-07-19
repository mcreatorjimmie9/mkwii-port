/* Function at 0x806ECD34, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806ECD34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806ECD40
    r27 = r4;
    /* li r26, 0 */ // 0x806ECD48
    /* li r28, 0x30 */ // 0x806ECD4C
    /* li r29, 0x24 */ // 0x806ECD50
    /* li r30, 0x43 */ // 0x806ECD54
    /* li r31, 0 */ // 0x806ECD58
    r3 = r27;
    /* li r4, 0 */ // 0x806ECD60
    /* li r5, 4 */ // 0x806ECD64
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}