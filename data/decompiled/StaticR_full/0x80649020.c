/* Function at 0x80649020, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80649020(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064902C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80649038
    r3 = r31 + 0x44; // 0x8064903C
    r4 = r4 + 0; // 0x80649040
    *(0 + r31) = r4; // stw @ 0x80649044
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80649050
    r0 = *(0x14 + r1); // lwz @ 0x80649054
    return;
}