/* Function at 0x809180D4, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_809180D4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x809180E4
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x809180EC
    r12 = *(0x34 + r12); // lwz @ 0x809180F0
    /* mtctr r12 */ // 0x809180F4
    /* bctrl  */ // 0x809180F8
    /* lis r31, 0 */ // 0x809180FC
    r31 = r31 + 0; // 0x80918100
    r4 = r31 + 0x12; // 0x80918104
    FUN_805E3430(r4); // bl 0x805E3430
}