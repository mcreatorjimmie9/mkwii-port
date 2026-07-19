/* Function at 0x808DBC10, size=84 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808DBC10(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x90 + r1) = r28; // stw @ 0x808DBC28
    r28 = r3;
    FUN_8089BD4C(); // bl 0x8089BD4C
    r12 = *(0 + r28); // lwz @ 0x808DBC34
    r3 = r28;
    r12 = *(0x38 + r12); // lwz @ 0x808DBC3C
    /* mtctr r12 */ // 0x808DBC40
    /* bctrl  */ // 0x808DBC44
    /* lis r31, 0 */ // 0x808DBC48
    r6 = r3;
    /* li r4, 0x80 */ // 0x808DBC54
    r5 = r31 + 0; // 0x808DBC58
    /* crclr cr1eq */ // 0x808DBC5C
    FUN_805E3430(r6, r3, r4, r5); // bl 0x805E3430
}