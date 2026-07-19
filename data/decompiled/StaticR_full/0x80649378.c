/* Function at 0x80649378, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80649378(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80649388
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80649394
    r3 = r30 + 0x44; // 0x80649398
    r4 = r4 + 0; // 0x8064939C
    *(0 + r30) = r4; // stw @ 0x806493A0
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r3, 0 */ // 0x806493A8
    r31 = r30 + 0x58; // 0x806493AC
    r3 = r3 + 0; // 0x806493B0
    *(0 + r30) = r3; // stw @ 0x806493B4
    r3 = r31;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806493C0
    r3 = r30 + 0x1cc; // 0x806493C4
    r4 = r4 + 0; // 0x806493C8
    *(0 + r31) = r4; // stw @ 0x806493CC
    FUN_8066D3F0(r4, r3, r4); // bl 0x8066D3F0
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806493D8
    r30 = *(8 + r1); // lwz @ 0x806493DC
    r0 = *(0x14 + r1); // lwz @ 0x806493E0
    return;
}