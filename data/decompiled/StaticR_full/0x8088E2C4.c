/* Function at 0x8088E2C4, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8088E2C4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8088E2D4
    r31 = r31 + 0; // 0x8088E2D8
    *(0x28 + r1) = r30; // stw @ 0x8088E2DC
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8088E2E4
    r29 = r3;
    /* li r3, 0x1b4 */ // 0x8088E2EC
    FUN_805E3430(r3); // bl 0x805E3430
}