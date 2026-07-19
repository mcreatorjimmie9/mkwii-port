/* Function at 0x806B96C0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B96C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806B96CC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806B96D8
    /* lis r4, 0 */ // 0x806B96DC
    r3 = r3 + 0; // 0x806B96E0
    *(0 + r31) = r3; // stw @ 0x806B96E4
    /* lis r7, 0 */ // 0x806B96E8
    r4 = r4 + 0; // 0x806B96EC
    r6 = *(0 + r7); // lwzu @ 0x806B96F0
    r3 = r31 + 0x58; // 0x806B96F4
    *(8 + r1) = r6; // stw @ 0x806B96F8
    r5 = *(4 + r7); // lwz @ 0x806B96FC
    r0 = *(8 + r7); // lwz @ 0x806B9700
    *(0xc + r1) = r5; // stw @ 0x806B9704
    *(0x10 + r1) = r0; // stw @ 0x806B9708
    *(0x44 + r31) = r4; // stw @ 0x806B970C
    *(0x48 + r31) = r31; // stw @ 0x806B9710
    *(0x4c + r31) = r6; // stw @ 0x806B9714
    *(0x50 + r31) = r5; // stw @ 0x806B9718
    *(0x54 + r31) = r0; // stw @ 0x806B971C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r4, 0 */ // 0x806B9724
    /* lis r5, 0 */ // 0x806B9728
    r3 = r31 + 0x19c; // 0x806B972C
    /* li r6, 0x2e8 */ // 0x806B9730
    r4 = r4 + 0; // 0x806B9734
    r5 = r5 + 0; // 0x806B9738
    /* li r7, 3 */ // 0x806B973C
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}