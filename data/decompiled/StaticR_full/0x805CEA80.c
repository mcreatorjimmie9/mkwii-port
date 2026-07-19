/* Function at 0x805CEA80, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805CEA80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805CEA94
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805CEA9C
    r29 = r3;
    if (==) goto 0x0x805ceb7c;
    /* lis r4, 0 */ // 0x805CEAA8
    r4 = r4 + 0; // 0x805CEAAC
    *(0 + r3) = r4; // stw @ 0x805CEAB0
    r3 = *(0x584 + r3); // lwz @ 0x805CEAB4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x805CEABC
    /* lis r4, 0 */ // 0x805CEAC0
    *(0x584 + r29) = r0; // stw @ 0x805CEAC4
    r3 = r29 + 0x5ac; // 0x805CEAC8
    r4 = r4 + 0; // 0x805CEACC
    /* li r5, 0x18 */ // 0x805CEAD0
    /* li r6, 4 */ // 0x805CEAD4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
}