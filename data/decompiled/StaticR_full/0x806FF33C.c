/* Function at 0x806FF33C, size=52 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806FF33C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -288(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x806FF344
    *(0x124 + r1) = r0; // stw @ 0x806FF348
    r4 = r4 + 0; // 0x806FF34C
    /* stmw r26, 0x108(r1) */ // 0x806FF350
    r26 = r3;
    r28 = r5;
    r27 = r6;
    r29 = r7;
    r30 = r4 + 0xb1; // 0x806FF364
    /* li r3, 1 */ // 0x806FF368
    FUN_805E3430(r3); // bl 0x805E3430
}