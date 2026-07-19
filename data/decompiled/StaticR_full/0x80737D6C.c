/* Function at 0x80737D6C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80737D6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80737D78
    r31 = r3;
    r0 = *(0x44 + r3); // lbz @ 0x80737D80
    if (!=) goto 0x0x80737dc8;
    r4 = *(0x52c + r3); // lwz @ 0x80737D8C
    r7 = r3 + 0x6f4; // 0x80737D90
    r8 = r3 + 0x7bc; // 0x80737D94
    /* li r5, 2 */ // 0x80737D98
    /* li r6, 5 */ // 0x80737D9C
    /* li r9, 1 */ // 0x80737DA0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x52c + r31); // lwz @ 0x80737DA8
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80737DB0
    r8 = r31 + 0x7c8; // 0x80737DB4
    /* li r5, 5 */ // 0x80737DB8
    /* li r6, 8 */ // 0x80737DBC
    /* li r9, 1 */ // 0x80737DC0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80737DC8
    r31 = *(0xc + r1); // lwz @ 0x80737DCC
    return;
}