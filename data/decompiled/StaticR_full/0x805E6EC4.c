/* Function at 0x805E6EC4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805E6EC4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805E6ED8
    r30 = r3;
    r3 = *(0x1c + r3); // lwz @ 0x805E6EE0
    FUN_805EEFE4(); // bl 0x805EEFE4
    r4 = r3;
    /* li r3, 0x1c */ // 0x805E6EEC
    r4 = *(0x10 + r4); // lwz @ 0x805E6EF0
    /* li r5, 4 */ // 0x805E6EF4
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}