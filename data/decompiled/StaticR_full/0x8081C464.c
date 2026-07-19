/* Function at 0x8081C464, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8081C464(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0xc; // 0x8081C474
    r4 = r31;
    *(0x18 + r1) = r30; // stw @ 0x8081C47C
    *(0x14 + r1) = r29; // stw @ 0x8081C480
    r29 = r3;
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}