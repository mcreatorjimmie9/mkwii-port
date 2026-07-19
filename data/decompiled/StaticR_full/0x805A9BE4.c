/* Function at 0x805A9BE4, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A9BE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r0, r4, 0x1c0 */ // 0x805A9BF0
    /* mulli r31, r5, 0x1c0 */ // 0x805A9BF8
    /* li r5, 0x1c0 */ // 0x805A9BFC
    *(0x18 + r1) = r30; // stw @ 0x805A9C00
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805A9C08
    r29 = r3;
    r3 = r3 + r31; // 0x805A9C10
    r4 = r29 + r0; // 0x805A9C14
    r3 = r3 + 8; // 0x805A9C18
    r4 = r4 + 8; // 0x805A9C1C
    FUN_805E3430(r3, r4); // bl 0x805E3430
}