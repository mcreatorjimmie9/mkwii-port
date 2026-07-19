/* Function at 0x80732604, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80732604(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x8073260C
    r8 = r3 + 0x7bc; // 0x80732610
    *(0x14 + r1) = r0; // stw @ 0x80732614
    /* li r5, 0x10 */ // 0x80732618
    /* li r6, 0x13 */ // 0x8073261C
    /* li r9, 1 */ // 0x80732620
    *(0xc + r1) = r31; // stw @ 0x80732624
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x8073262C
    FUN_80727608(r6, r9); // bl 0x80727608
    r4 = *(0x530 + r31); // lwz @ 0x80732634
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8073263C
    r8 = r31 + 0x7c8; // 0x80732640
    /* li r5, 0x13 */ // 0x80732644
    /* li r6, 0x16 */ // 0x80732648
    /* li r9, 1 */ // 0x8073264C
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r0 = *(0x14 + r1); // lwz @ 0x80732654
    r31 = *(0xc + r1); // lwz @ 0x80732658
    return;
}