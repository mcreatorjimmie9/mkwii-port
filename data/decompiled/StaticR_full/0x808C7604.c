/* Function at 0x808C7604, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808C7604(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808C760C
    *(0xc + r1) = r31; // stw @ 0x808C7614
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C761C
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808C7628
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808C7634
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808C7640
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808C7648
    r31 = *(0xc + r1); // lwz @ 0x808C764C
    r30 = *(8 + r1); // lwz @ 0x808C7650
    return;
}