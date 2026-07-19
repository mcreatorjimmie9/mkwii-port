/* Function at 0x807900EC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807900EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807900F8
    r31 = r3;
    FUN_8078E714(); // bl 0x8078E714
    /* lis r4, 0 */ // 0x80790104
    /* li r0, 2 */ // 0x80790108
    r4 = r4 + 0; // 0x8079010C
    *(0 + r31) = r4; // stw @ 0x80790110
    r5 = r4 + 0x1c; // 0x80790114
    r3 = r31;
    r4 = r4 + 0x7c; // 0x8079011C
    *(0x54 + r31) = r5; // stw @ 0x80790120
    *(0x94 + r31) = r4; // stw @ 0x80790124
    *(0xa0 + r31) = r0; // stw @ 0x80790128
    r31 = *(0xc + r1); // lwz @ 0x8079012C
    r0 = *(0x14 + r1); // lwz @ 0x80790130
    return;
}