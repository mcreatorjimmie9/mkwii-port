/* Function at 0x8066778C, size=56 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8066778C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80667794
    r6 = r6 + 0; // 0x8066779C
    *(0x5c + r1) = r31; // stw @ 0x806677A0
    r31 = r4;
    r5 = r31;
    r4 = r6 + 0x12; // 0x806677AC
    *(0x58 + r1) = r30; // stw @ 0x806677B0
    r30 = r3;
    /* crclr cr1eq */ // 0x806677BC
    FUN_805E3430(r4, r3); // bl 0x805E3430
}