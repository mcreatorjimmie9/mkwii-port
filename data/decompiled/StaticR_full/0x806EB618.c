/* Function at 0x806EB618, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806EB618(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x806EB620
    /* li r5, 0xf8 */ // 0x806EB624
    *(0x24 + r1) = r0; // stw @ 0x806EB628
    /* stmw r26, 8(r1) */ // 0x806EB62C
    r26 = r3;
    /* li r30, 0 */ // 0x806EB634
    r3 = *(0 + r4); // lwz @ 0x806EB638
    /* li r4, 0 */ // 0x806EB63C
    r28 = r3 + 0x94; // 0x806EB640
    r3 = r28;
    r29 = r28 + 0x18; // 0x806EB648
    FUN_805E3430(r4, r3); // bl 0x805E3430
}