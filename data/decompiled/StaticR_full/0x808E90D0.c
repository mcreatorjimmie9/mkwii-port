/* Function at 0x808E90D0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808E90D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808E90D8
    *(0xc + r1) = r31; // stw @ 0x808E90E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E90E8
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808E90F4
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808E9100
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808E910C
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808E9114
    r31 = *(0xc + r1); // lwz @ 0x808E9118
    r30 = *(8 + r1); // lwz @ 0x808E911C
    return;
}