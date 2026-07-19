/* Function at 0x806C5308, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806C5308(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C5310
    /* li r31, 0 */ // 0x806C531C
    *(0x18 + r1) = r30; // stw @ 0x806C5320
    *(0x14 + r1) = r29; // stw @ 0x806C5324
    r29 = r3;
    *(0x58 + r3) = r31; // stb @ 0x806C532C
    *(0x29f4 + r3) = r31; // stb @ 0x806C5330
    *(0x1f0 + r3) = r31; // stb @ 0x806C5334
    *(0x1f1 + r3) = r31; // stb @ 0x806C5338
    *(0x1f2 + r3) = r31; // stb @ 0x806C533C
    *(0x1f3 + r3) = r31; // stb @ 0x806C5340
    r3 = *(0 + r4); // lwz @ 0x806C5344
    r30 = *(0x98 + r3); // lwz @ 0x806C5348
    FUN_805E3430(); // bl 0x805E3430
}