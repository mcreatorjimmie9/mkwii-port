/* Function at 0x806FFAAC, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FFAAC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 1 */ // 0x806FFAB4
    /* lis r6, 0 */ // 0x806FFAB8
    *(0x24 + r1) = r0; // stw @ 0x806FFABC
    r0 = r3 + -0x6c10; // 0x806FFAC0
    r0 = r4 * r0; // 0x806FFAC4
    *(0x1c + r1) = r31; // stw @ 0x806FFACC
    *(0x18 + r1) = r30; // stw @ 0x806FFAD0
    r30 = r5;
    r3 = *(0 + r6); // lwz @ 0x806FFAD8
    r3 = r3 + r0; // 0x806FFADC
    r31 = r3 + 0x4e; // 0x806FFAE0
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}