/* Function at 0x807FDAE4, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FDAE4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807FDAFC
    r29 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x807FDB04
    FUN_805E3430(); // bl 0x805E3430
}