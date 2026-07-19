/* Function at 0x808DD6B8, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808DD6B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x34 + r1) = r29; // stw @ 0x808DD6CC
    r29 = r3;
    FUN_808A0278(); // bl 0x808A0278
    r12 = *(0 + r29); // lwz @ 0x808DD6D8
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x808DD6E0
    /* mtctr r12 */ // 0x808DD6E4
    /* bctrl  */ // 0x808DD6E8
    /* lis r4, 0 */ // 0x808DD6EC
    r6 = r3;
    r4 = r4 + 0; // 0x808DD6F4
    r5 = r4 + 0x2d; // 0x808DD6FC
    /* li r4, 0x20 */ // 0x808DD700
    /* crclr cr1eq */ // 0x808DD704
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}