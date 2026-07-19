/* Function at 0x808D712C, size=68 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808D712C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = r4;
    /* li r4, 0x20 */ // 0x808D7138
    *(0x64 + r1) = r0; // stw @ 0x808D713C
    *(0x5c + r1) = r31; // stw @ 0x808D7140
    /* lis r31, 0 */ // 0x808D7144
    r31 = r31 + 0; // 0x808D7148
    *(0x58 + r1) = r30; // stw @ 0x808D714C
    r30 = r5;
    r7 = r30;
    r5 = r31 + 0x68; // 0x808D7158
    *(0x54 + r1) = r29; // stw @ 0x808D715C
    r29 = r3;
    /* crclr cr1eq */ // 0x808D7168
    FUN_805E3430(r5, r3); // bl 0x805E3430
}