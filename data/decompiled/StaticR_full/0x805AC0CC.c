/* Function at 0x805AC0CC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AC0CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805AC0D4
    /* li r5, 0x16 */ // 0x805AC0D8
    *(0x14 + r1) = r0; // stw @ 0x805AC0DC
    *(0xc + r1) = r31; // stw @ 0x805AC0E0
    /* li r31, 0 */ // 0x805AC0E4
    *(8 + r1) = r30; // stw @ 0x805AC0E8
    r30 = r3;
    *(0 + r3) = r31; // stb @ 0x805AC0F0
    r3 = r3 + 2; // 0x805AC0F4
    FUN_805E3430(r3); // bl 0x805E3430
}