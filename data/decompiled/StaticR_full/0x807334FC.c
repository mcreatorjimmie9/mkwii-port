/* Function at 0x807334FC, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807334FC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x818; // 0x80733504
    r8 = r3 + 0x7c8; // 0x80733508
    *(0x14 + r1) = r0; // stw @ 0x8073350C
    /* li r5, 0x14 */ // 0x80733510
    /* li r6, 0x15 */ // 0x80733514
    /* li r9, 1 */ // 0x80733518
    *(0xc + r1) = r31; // stw @ 0x8073351C
    r31 = r3;
    r4 = *(0x614 + r3); // lwz @ 0x80733524
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r4 = *(0x614 + r31); // lwz @ 0x8073352C
    r3 = r31;
    r7 = r31 + 0x818; // 0x80733534
    r8 = r31 + 0x7c8; // 0x80733538
    /* li r5, 0x15 */ // 0x8073353C
    /* li r6, 0x16 */ // 0x80733540
    /* li r9, 1 */ // 0x80733544
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x8073354C
    r31 = *(0xc + r1); // lwz @ 0x80733550
    return;
}