/* Function at 0x806887E0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806887E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806887EC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806887F8
    /* lis r4, 0 */ // 0x806887FC
    /* li r0, 0 */ // 0x80688800
    *(0x52 + r31) = r0; // stb @ 0x80688804
    r3 = r3 + 0; // 0x80688808
    r4 = r4 + 0; // 0x8068880C
    *(0 + r31) = r3; // stw @ 0x80688810
    r3 = r31 + 0x80; // 0x80688814
    *(0x48 + r31) = r4; // stw @ 0x80688818
    *(0x4c + r31) = r0; // sth @ 0x8068881C
    *(0x4e + r31) = r0; // stb @ 0x80688820
    *(0x50 + r31) = r0; // sth @ 0x80688824
    *(0x54 + r31) = r0; // stb @ 0x80688828
    *(0x64 + r31) = r0; // stw @ 0x8068882C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80688834
    /* li r0, -1 */ // 0x80688838
    r3 = r3 + 0; // 0x8068883C
    *(0 + r31) = r3; // stw @ 0x80688840
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80688848
    r31 = *(0xc + r1); // lwz @ 0x8068884C
    r0 = *(0x14 + r1); // lwz @ 0x80688850
    return;
}