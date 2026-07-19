/* Function at 0x8088A310, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8088A310(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x34 + r1) = r29; // stw @ 0x8088A324
    r29 = r3;
    FUN_808A0278(); // bl 0x808A0278
    r12 = *(0 + r29); // lwz @ 0x8088A330
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x8088A338
    /* mtctr r12 */ // 0x8088A33C
    /* bctrl  */ // 0x8088A340
    /* lis r4, 0 */ // 0x8088A344
    r6 = r3;
    r4 = r4 + 0; // 0x8088A34C
    r5 = r4 + 9; // 0x8088A354
    /* li r4, 0x20 */ // 0x8088A358
    /* crclr cr1eq */ // 0x8088A35C
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}