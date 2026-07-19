/* Function at 0x80704530, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80704530(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r6 = r4;
    /* li r4, 0x40 */ // 0x8070453C
    *(0x1c + r1) = r31; // stw @ 0x80704544
    *(0x18 + r1) = r30; // stw @ 0x80704548
    /* lis r30, 0 */ // 0x8070454C
    r30 = r30 + 0; // 0x80704550
    *(0x14 + r1) = r29; // stw @ 0x80704554
    r29 = r3;
    *(0x18 + r3) = r5; // stw @ 0x8070455C
    r5 = r30 + 0x267; // 0x80704560
    /* crclr cr1eq */ // 0x80704564
    r3 = r3 + 0x1c; // 0x80704568
    FUN_805E3430(r5, r3); // bl 0x805E3430
}