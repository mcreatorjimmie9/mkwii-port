/* Function at 0x8079D8F8, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8079D8F8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8079D900
    /* li r31, 0 */ // 0x8079D90C
    *(0x18 + r1) = r30; // stw @ 0x8079D910
    *(0x14 + r1) = r29; // stw @ 0x8079D914
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8079D91C
    r30 = r3 + 0x6e4; // 0x8079D920
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
}