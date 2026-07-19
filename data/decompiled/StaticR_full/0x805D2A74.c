/* Function at 0x805D2A74, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D2A74(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x805D2A7C
    r4 = r4 + 0; // 0x805D2A84
    *(0x1c + r1) = r31; // stw @ 0x805D2A88
    *(0x18 + r1) = r30; // stw @ 0x805D2A8C
    *(0x14 + r1) = r29; // stw @ 0x805D2A90
    r29 = r3;
    *(0x10 + r3) = r4; // stw @ 0x805D2A98
    FUN_805E3430(); // bl 0x805E3430
}