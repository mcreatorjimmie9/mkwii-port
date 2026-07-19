/* Function at 0x8066C768, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8066C768(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8066C774
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8066C780
    r3 = r31 + 0x44; // 0x8066C784
    r4 = r4 + 0; // 0x8066C788
    *(0 + r31) = r4; // stw @ 0x8066C78C
    FUN_8066880C(r4, r3, r4); // bl 0x8066880C
    /* li r0, 0 */ // 0x8066C794
    *(0x188 + r31) = r0; // stw @ 0x8066C798
    /* lis r3, 0 */ // 0x8066C79C
    /* lis r5, 0 */ // 0x8066C7A0
    r7 = *(0 + r3); // lwzu @ 0x8066C7A4
    /* lis r4, 0 */ // 0x8066C7A8
    r5 = r5 + 0; // 0x8066C7AC
    *(8 + r1) = r7; // stw @ 0x8066C7B0
    r6 = *(4 + r3); // lwz @ 0x8066C7B4
    r4 = r4 + 0; // 0x8066C7B8
    r0 = *(8 + r3); // lwz @ 0x8066C7BC
    r3 = r31 + 0x1a8; // 0x8066C7C0
    *(0xc + r1) = r6; // stw @ 0x8066C7C4
    *(0x10 + r1) = r0; // stw @ 0x8066C7C8
    *(0x18c + r31) = r5; // stw @ 0x8066C7CC
    *(0x190 + r31) = r31; // stw @ 0x8066C7D0
    *(0x194 + r31) = r7; // stw @ 0x8066C7D4
    *(0x198 + r31) = r6; // stw @ 0x8066C7D8
    *(0x19c + r31) = r0; // stw @ 0x8066C7DC
    *(0 + r31) = r4; // stw @ 0x8066C7E0
    FUN_8066CFDC(); // bl 0x8066CFDC
    r3 = r31 + 0x31c; // 0x8066C7E8
    FUN_806A12F4(r3); // bl 0x806A12F4
    r3 = r31 + 0x490; // 0x8066C7F0
    FUN_8066D278(r3, r3); // bl 0x8066D278
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x8066C7FC
    r0 = *(0x24 + r1); // lwz @ 0x8066C800
    return;
}