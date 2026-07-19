/* Function at 0x8070A8C4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8070A8C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8070A8CC
    /* li r5, 0 */ // 0x8070A8D0
    *(0x14 + r1) = r0; // stw @ 0x8070A8D4
    *(0xc + r1) = r31; // stw @ 0x8070A8D8
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8070A8E0
    r12 = *(0x10 + r12); // lwz @ 0x8070A8E4
    /* mtctr r12 */ // 0x8070A8E8
    r3 = r3 + 0x44; // 0x8070A8EC
    /* bctrl  */ // 0x8070A8F0
    r3 = r31;
    r4 = r31 + 0x44; // 0x8070A8F8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x8070A904
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* lis r3, 1 */ // 0x8070A90C
    /* li r4, 0x20 */ // 0x8070A910
    r3 = r3 + -0x4400; // 0x8070A914
    FUN_805E3430(r4, r3, r4, r3); // bl 0x805E3430
}