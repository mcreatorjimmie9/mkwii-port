/* Function at 0x8070B508, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8070B508(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    /* lis r30, 0 */ // 0x8070B520
    *(0x14 + r1) = r29; // stw @ 0x8070B524
    *(0x10 + r1) = r28; // stw @ 0x8070B528
    r3 = *(0 + r30); // lwz @ 0x8070B52C
    FUN_805E3430(); // bl 0x805E3430
}