/* Function at 0x806ECB64, size=80 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_806ECB64(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x806ECB70
    r23 = r3;
    r24 = r3 + 0x40; // 0x806ECB78
    /* li r20, 0 */ // 0x806ECB7C
    /* li r31, 0xff */ // 0x806ECB80
    /* li r26, 0x30 */ // 0x806ECB84
    /* li r27, 0x24 */ // 0x806ECB88
    /* li r28, 0x43 */ // 0x806ECB8C
    /* li r29, 0 */ // 0x806ECB90
    /* li r30, -1 */ // 0x806ECB94
    r21 = r23;
    r22 = r24 + 0x10; // 0x806ECB9C
    /* li r25, 0 */ // 0x806ECBA0
    r3 = r22;
    /* li r4, 0 */ // 0x806ECBA8
    /* li r5, 4 */ // 0x806ECBAC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}