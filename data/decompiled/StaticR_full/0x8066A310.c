/* Function at 0x8066A310, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8066A310(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066A324
    r30 = r3;
    r3 = r3 + 0x10; // 0x8066A32C
    FUN_805E3430(r3); // bl 0x805E3430
}