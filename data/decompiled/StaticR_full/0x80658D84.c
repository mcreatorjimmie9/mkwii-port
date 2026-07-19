/* Function at 0x80658D84, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80658D84(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80658D94
    r31 = r31 + 0; // 0x80658D98
    *(0x18 + r1) = r30; // stw @ 0x80658D9C
    /* li r30, 0 */ // 0x80658DA0
    *(0x14 + r1) = r29; // stw @ 0x80658DA4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80658DAC
    r28 = r3;
    r4 = *(0 + r31); // lwz @ 0x80658DB4
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
}