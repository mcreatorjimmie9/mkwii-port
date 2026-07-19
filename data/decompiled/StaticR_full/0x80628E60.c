/* Function at 0x80628E60, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80628E60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80628E70
    r30 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x80628E78
    FUN_805F68D8(); // bl 0x805F68D8
    r3 = *(0x10 + r30); // lwz @ 0x80628E80
    /* li r4, 0 */ // 0x80628E84
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r30); // lwz @ 0x80628E8C
    FUN_805F6940(r4); // bl 0x805F6940
    /* lis r31, 0 */ // 0x80628E94
    /* li r4, 1 */ // 0x80628E98
    r3 = *(0 + r31); // lwz @ 0x80628E9C
    r3 = *(0 + r3); // lwz @ 0x80628EA0
    FUN_80685950(r4); // bl 0x80685950
    r12 = *(0 + r30); // lwz @ 0x80628EA8
    r3 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x80628EB0
    /* mtctr r12 */ // 0x80628EB4
    /* bctrl  */ // 0x80628EB8
    r3 = *(0x10 + r30); // lwz @ 0x80628EBC
    FUN_805F68D8(r3); // bl 0x805F68D8
    r3 = *(0x10 + r30); // lwz @ 0x80628EC4
    /* li r4, 0 */ // 0x80628EC8
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r30); // lwz @ 0x80628ED0
    FUN_805F6940(r4); // bl 0x805F6940
    r3 = *(0 + r31); // lwz @ 0x80628ED8
    /* li r4, 0 */ // 0x80628EDC
    r3 = *(0 + r3); // lwz @ 0x80628EE0
    FUN_80685950(r4); // bl 0x80685950
    r3 = *(0x10 + r30); // lwz @ 0x80628EE8
    /* li r4, 0 */ // 0x80628EEC
    FUN_805F59D8(r4, r4); // bl 0x805F59D8
    FUN_805F4734(r4); // bl 0x805F4734
    r0 = *(0x14 + r1); // lwz @ 0x80628EF8
    r31 = *(0xc + r1); // lwz @ 0x80628EFC
    r30 = *(8 + r1); // lwz @ 0x80628F00
    return;
}