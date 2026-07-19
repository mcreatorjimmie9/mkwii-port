/* Function at 0x805AD4C0, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805AD4C0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x805AD4C8
    /* li r5, 0x40 */ // 0x805AD4CC
    *(0x18 + r1) = r30; // stw @ 0x805AD4D8
    *(0x14 + r1) = r29; // stw @ 0x805AD4DC
    *(0x10 + r1) = r28; // stw @ 0x805AD4E0
    r28 = r3;
    r3 = r3 + 0x5c; // 0x805AD4E8
    FUN_805E3430(r3); // bl 0x805E3430
}