/* Function at 0x80649170, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80649170(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064917C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80649188
    r3 = r31 + 0x44; // 0x8064918C
    r4 = r4 + 0; // 0x80649190
    *(0 + r31) = r4; // stw @ 0x80649194
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r4, 0 */ // 0x8064919C
    r3 = r31 + 0x58; // 0x806491A0
    r4 = r4 + 0; // 0x806491A4
    *(0 + r31) = r4; // stw @ 0x806491A8
    FUN_8066D3F0(r4, r3, r4); // bl 0x8066D3F0
    r3 = r31 + 0x1cc; // 0x806491B0
    FUN_8066CFDC(r3, r4, r3); // bl 0x8066CFDC
    r3 = r31 + 0x340; // 0x806491B8
    FUN_8066D278(r3, r3); // bl 0x8066D278
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806491C4
    r0 = *(0x14 + r1); // lwz @ 0x806491C8
    return;
}