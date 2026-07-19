/* Function at 0x808E80F8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808E80F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808E8100
    *(0xc + r1) = r31; // stw @ 0x808E8108
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E8110
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808E811C
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808E8128
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808E8134
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808E813C
    r31 = *(0xc + r1); // lwz @ 0x808E8140
    r30 = *(8 + r1); // lwz @ 0x808E8144
    return;
}