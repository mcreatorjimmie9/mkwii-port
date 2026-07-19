/* Function at 0x808C2674, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808C2674(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808C267C
    *(0xc + r1) = r31; // stw @ 0x808C2684
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C268C
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808C2698
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808C26A4
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808C26B0
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808C26B8
    r31 = *(0xc + r1); // lwz @ 0x808C26BC
    r30 = *(8 + r1); // lwz @ 0x808C26C0
    return;
}