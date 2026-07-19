/* Function at 0x8078CF40, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078CF40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8078CF48
    r4 = r4 + 0; // 0x8078CF50
    *(0xc + r1) = r31; // stw @ 0x8078CF54
    *(8 + r1) = r30; // stw @ 0x8078CF58
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x8078CF60
    r3 = r3 + 4; // 0x8078CF64
    FUN_805E3430(r3); // bl 0x805E3430
}