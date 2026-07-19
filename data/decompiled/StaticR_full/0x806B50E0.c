/* Function at 0x806B50E0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B50E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806B50EC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806B50F8
    /* lis r4, 0 */ // 0x806B50FC
    r3 = r3 + 0; // 0x806B5100
    *(0 + r31) = r3; // stw @ 0x806B5104
    /* lis r7, 0 */ // 0x806B5108
    r4 = r4 + 0; // 0x806B510C
    r6 = *(0 + r7); // lwzu @ 0x806B5110
    r3 = r31 + 0x58; // 0x806B5114
    *(8 + r1) = r6; // stw @ 0x806B5118
    r5 = *(4 + r7); // lwz @ 0x806B511C
    r0 = *(8 + r7); // lwz @ 0x806B5120
    *(0xc + r1) = r5; // stw @ 0x806B5124
    *(0x10 + r1) = r0; // stw @ 0x806B5128
    *(0x44 + r31) = r4; // stw @ 0x806B512C
    *(0x48 + r31) = r31; // stw @ 0x806B5130
    *(0x4c + r31) = r6; // stw @ 0x806B5134
    *(0x50 + r31) = r5; // stw @ 0x806B5138
    *(0x54 + r31) = r0; // stw @ 0x806B513C
    FUN_8066880C(); // bl 0x8066880C
    r3 = r31 + 0x1a0; // 0x806B5144
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806B5150
    r0 = *(0x24 + r1); // lwz @ 0x806B5154
    return;
}