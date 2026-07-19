/* Function at 0x808EA898, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808EA898(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808EA8A0
    *(0xc + r1) = r31; // stw @ 0x808EA8A8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EA8B0
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808EA8BC
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808EA8C8
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808EA8D4
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808EA8DC
    r31 = *(0xc + r1); // lwz @ 0x808EA8E0
    r30 = *(8 + r1); // lwz @ 0x808EA8E4
    return;
}