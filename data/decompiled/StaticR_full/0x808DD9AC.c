/* Function at 0x808DD9AC, size=80 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808DD9AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xe8 + r1) = r30; // stw @ 0x808DD9BC
    r30 = r3;
    FUN_8089BD4C(); // bl 0x8089BD4C
    r12 = *(0 + r30); // lwz @ 0x808DD9C8
    r3 = r30;
    r12 = *(0x38 + r12); // lwz @ 0x808DD9D0
    /* mtctr r12 */ // 0x808DD9D4
    /* bctrl  */ // 0x808DD9D8
    /* lis r4, 0 */ // 0x808DD9DC
    r6 = r3;
    r4 = r4 + 0; // 0x808DD9E4
    r5 = r4 + 0x32; // 0x808DD9EC
    /* li r4, 0x80 */ // 0x808DD9F0
    /* crclr cr1eq */ // 0x808DD9F4
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}