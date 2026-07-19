/* Function at 0x806E9FF4, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806E9FF4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806EA000
    r26 = r3;
    /* lis r29, 0 */ // 0x806EA008
    /* li r27, 0 */ // 0x806EA00C
    r28 = r26;
    /* li r31, 0 */ // 0x806EA014
    r29 = r29 + 0; // 0x806EA018
    /* li r3, 0xc */ // 0x806EA01C
    FUN_805E3430(r3); // bl 0x805E3430
}