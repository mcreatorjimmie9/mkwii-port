/* Function at 0x8088A268, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8088A268(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8088A27C
    r30 = r3;
    FUN_808990DC(); // bl 0x808990DC
    /* lis r3, 0 */ // 0x8088A288
    /* lis r5, 0 */ // 0x8088A28C
    r3 = r3 + 0; // 0x8088A290
    *(0 + r30) = r3; // stw @ 0x8088A294
    r3 = r30 + 0x104; // 0x8088A298
    r5 = r5 + 0; // 0x8088A29C
    r6 = *(0 + r31); // lwz @ 0x8088A2A0
    /* li r4, 0x10 */ // 0x8088A2A4
    r6 = *(0x2a + r6); // lha @ 0x8088A2A8
    /* crclr cr1eq */ // 0x8088A2AC
    FUN_805E3430(r5, r4); // bl 0x805E3430
}