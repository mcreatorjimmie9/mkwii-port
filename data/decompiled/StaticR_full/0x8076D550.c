/* Function at 0x8076D550, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076D550(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* extsh r4, r4 */ // 0x8076D558
    *(0x1c + r1) = r31; // stw @ 0x8076D560
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8076D568
    FUN_8076C984(); // bl 0x8076C984
    r0 = *(0xa + r31); // lbz @ 0x8076D570
    /* lis r3, 0 */ // 0x8076D574
    r3 = r3 + 0; // 0x8076D578
    *(0 + r31) = r3; // stw @ 0x8076D57C
    if (==) goto 0x0x8076d598;
    r3 = *(8 + r31); // lhz @ 0x8076D588
    r0 = r3 + -1; // 0x8076D58C
    *(0x2a + r31) = r0; // sth @ 0x8076D590
    /* b 0x8076d5a0 */ // 0x8076D594
    r0 = *(8 + r31); // lhz @ 0x8076D598
    *(0x2a + r31) = r0; // sth @ 0x8076D59C
    r30 = *(0x2a + r31); // lhz @ 0x8076D5A0
    /* mulli r3, r30, 0x38 */ // 0x8076D5A4
    r3 = r3 + 0x10; // 0x8076D5A8
    FUN_805E3430(r3); // bl 0x805E3430
}