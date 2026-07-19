/* Function at 0x80704B18, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80704B18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80704B28
    *(0x18 + r1) = r30; // stw @ 0x80704B2C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80704B38
    r29 = r3;
    r5 = r29;
    r6 = r30;
    /* li r3, 0x79b */ // 0x80704B48
    FUN_805E3430(r5, r6, r3); // bl 0x805E3430
}