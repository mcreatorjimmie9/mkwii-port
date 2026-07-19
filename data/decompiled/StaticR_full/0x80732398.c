/* Function at 0x80732398, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80732398(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x807323A0
    r8 = r3 + 0x7bc; // 0x807323A4
    *(0x14 + r1) = r0; // stw @ 0x807323A8
    /* li r5, 0xa */ // 0x807323AC
    /* li r6, 0xd */ // 0x807323B0
    /* li r9, 1 */ // 0x807323B4
    *(0xc + r1) = r31; // stw @ 0x807323B8
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x807323C0
    FUN_80727608(r6, r9); // bl 0x80727608
    r4 = *(0x530 + r31); // lwz @ 0x807323C8
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x807323D0
    r8 = r31 + 0x7c8; // 0x807323D4
    /* li r5, 0xd */ // 0x807323D8
    /* li r6, 0x10 */ // 0x807323DC
    /* li r9, 1 */ // 0x807323E0
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r0 = *(0x14 + r1); // lwz @ 0x807323E8
    r31 = *(0xc + r1); // lwz @ 0x807323EC
    return;
}