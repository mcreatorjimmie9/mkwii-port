/* Function at 0x806E27C0, size=64 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E27C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r7 = r5;
    r6 = r4 + 1; // 0x806E27CC
    *(0x64 + r1) = r0; // stw @ 0x806E27D0
    *(0x5c + r1) = r31; // stw @ 0x806E27D4
    /* lis r31, 0 */ // 0x806E27D8
    r31 = r31 + 0; // 0x806E27DC
    *(0x58 + r1) = r30; // stw @ 0x806E27E0
    r30 = r3;
    r5 = r31 + 0xc; // 0x806E27E8
    *(0x174 + r3) = r4; // stw @ 0x806E27EC
    /* li r4, 0xf */ // 0x806E27F4
    /* crclr cr1eq */ // 0x806E27F8
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}