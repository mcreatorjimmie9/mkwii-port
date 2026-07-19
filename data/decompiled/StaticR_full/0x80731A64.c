/* Function at 0x80731A64, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80731A64(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x80731A6C
    r8 = r3 + 0x7bc; // 0x80731A70
    *(0x14 + r1) = r0; // stw @ 0x80731A74
    /* li r5, 2 */ // 0x80731A78
    /* li r6, 4 */ // 0x80731A7C
    /* li r9, 1 */ // 0x80731A80
    *(0xc + r1) = r31; // stw @ 0x80731A84
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731A8C
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r4 = *(0x530 + r31); // lwz @ 0x80731A94
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731A9C
    r8 = r31 + 0x7c8; // 0x80731AA0
    /* li r5, 4 */ // 0x80731AA4
    /* li r6, 6 */ // 0x80731AA8
    /* li r9, 1 */ // 0x80731AAC
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80731AB4
    r31 = *(0xc + r1); // lwz @ 0x80731AB8
    return;
}