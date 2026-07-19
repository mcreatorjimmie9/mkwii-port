/* Function at 0x808A029C, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808A029C(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x808A02B8
    *(0x30 + r1) = r28; // stw @ 0x808A02BC
    r12 = *(0 + r3); // lwz @ 0x808A02C0
    r12 = *(0x34 + r12); // lwz @ 0x808A02C4
    /* mtctr r12 */ // 0x808A02C8
    /* bctrl  */ // 0x808A02CC
    /* lis r29, 0 */ // 0x808A02D0
    r4 = r29 + 0; // 0x808A02D4
    FUN_805E3430(r4); // bl 0x805E3430
}