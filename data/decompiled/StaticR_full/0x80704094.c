/* Function at 0x80704094, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80704094(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807040A4
    *(8 + r1) = r30; // stw @ 0x807040A8
    r30 = r3;
    *(0x18 + r3) = r6; // stw @ 0x807040B0
    *(0x1c + r3) = r7; // stw @ 0x807040B4
    if (!=) goto 0x0x807040e0;
    /* lis r5, 0 */ // 0x807040BC
    r6 = r4;
    r5 = r5 + 0; // 0x807040C4
    /* li r4, 0x40 */ // 0x807040C8
    r5 = r5 + 0x161; // 0x807040CC
    /* crclr cr1eq */ // 0x807040D0
    r3 = r3 + 0x20; // 0x807040D4
    FUN_805E3430(r5, r4, r5, r3); // bl 0x805E3430
    /* b 0x80704104 */ // 0x807040DC
    /* lis r5, 0 */ // 0x807040E0
    r6 = r4;
    r5 = r5 + 0; // 0x807040E8
    r7 = *(0xc + r3); // lbz @ 0x807040EC
    r5 = r5 + 0x17f; // 0x807040F0
    /* li r4, 0x40 */ // 0x807040F4
    /* crclr cr1eq */ // 0x807040F8
    r3 = r3 + 0x20; // 0x807040FC
}