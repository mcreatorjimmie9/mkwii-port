/* Function at 0x808BF39C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808BF39C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808BF3A4
    *(0xc + r1) = r31; // stw @ 0x808BF3AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808BF3B4
    r30 = r3;
    r3 = r31;
    r4 = r30 + 0x658; // 0x808BF3C0
    FUN_80649EC4(r3, r4); // bl 0x80649EC4
    r3 = r31;
    r4 = r30 + 0x66c; // 0x808BF3CC
    FUN_80649EDC(r3, r4, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r4 = r30 + 0x680; // 0x808BF3D8
    FUN_80649EE4(r3, r4, r3, r4); // bl 0x80649EE4
    r0 = *(0x14 + r1); // lwz @ 0x808BF3E0
    r31 = *(0xc + r1); // lwz @ 0x808BF3E4
    r30 = *(8 + r1); // lwz @ 0x808BF3E8
    return;
}