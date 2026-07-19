/* Function at 0x80669214, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80669214(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r7, r4, 0x28 */ // 0x8066921C
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8066922C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80669234
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8066923C
    r28 = r3;
    r3 = r7 + 0x10; // 0x80669244
    FUN_805E3430(r3); // bl 0x805E3430
}