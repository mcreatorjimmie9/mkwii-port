/* Function at 0x80665EDC, size=44 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80665EDC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80665EE4
    r5 = r4;
    *(0x64 + r1) = r0; // stw @ 0x80665EEC
    r4 = r6 + 0; // 0x80665EF0
    *(0x5c + r1) = r31; // stw @ 0x80665EF4
    r31 = r3;
    /* crclr cr1eq */ // 0x80665F00
    FUN_805E3430(r4, r3); // bl 0x805E3430
}