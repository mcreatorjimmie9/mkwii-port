/* Function at 0x8065E188, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8065E188(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8065E198
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8065E1A4
    r3 = r30 + 0x44; // 0x8065E1A8
    r4 = r4 + 0; // 0x8065E1AC
    *(0 + r30) = r4; // stw @ 0x8065E1B0
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r30 + 0x54; // 0x8065E1B8
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8065E1C4
    r3 = r30 + 0x1c8; // 0x8065E1C8
    r4 = r4 + 0; // 0x8065E1CC
    *(0 + r31) = r4; // stw @ 0x8065E1D0
    FUN_8066D3F0(r4, r3, r4); // bl 0x8066D3F0
    r3 = r30 + 0x33c; // 0x8065E1D8
    FUN_8066CEBC(r3, r4, r3); // bl 0x8066CEBC
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8065E1E4
    r30 = *(8 + r1); // lwz @ 0x8065E1E8
    r0 = *(0x14 + r1); // lwz @ 0x8065E1EC
    return;
}