/* Function at 0x80629884, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_80629884(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80629894
    r30 = r3;
    FUN_805F4708(); // bl 0x805F4708
    r12 = *(0 + r30); // lwz @ 0x806298A0
    r3 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x806298A8
    /* mtctr r12 */ // 0x806298AC
    /* bctrl  */ // 0x806298B0
    r3 = *(0x10 + r30); // lwz @ 0x806298B4
    FUN_805F68D8(r3); // bl 0x805F68D8
    r3 = *(0x10 + r30); // lwz @ 0x806298BC
    /* li r4, 0 */ // 0x806298C0
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r30); // lwz @ 0x806298C8
    FUN_805F6940(r4); // bl 0x805F6940
    /* lis r31, 0 */ // 0x806298D0
    /* li r4, 1 */ // 0x806298D4
    r3 = *(0 + r31); // lwz @ 0x806298D8
    r3 = *(0 + r3); // lwz @ 0x806298DC
    FUN_80685950(r4); // bl 0x80685950
    r3 = *(0x10 + r30); // lwz @ 0x806298E4
    FUN_805F68D8(r4); // bl 0x805F68D8
    r3 = *(0x10 + r30); // lwz @ 0x806298EC
    /* li r4, 0 */ // 0x806298F0
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r30); // lwz @ 0x806298F8
    FUN_805F6940(r4); // bl 0x805F6940
    r3 = *(0 + r31); // lwz @ 0x80629900
    /* li r4, 0 */ // 0x80629904
    r3 = *(0 + r3); // lwz @ 0x80629908
    FUN_80685950(r4); // bl 0x80685950
    r3 = *(0x10 + r30); // lwz @ 0x80629910
    /* li r4, 0 */ // 0x80629914
    FUN_805F59D8(r4, r4); // bl 0x805F59D8
    FUN_805F4734(r4); // bl 0x805F4734
    r0 = *(0x14 + r1); // lwz @ 0x80629920
    r31 = *(0xc + r1); // lwz @ 0x80629924
    r30 = *(8 + r1); // lwz @ 0x80629928
    return;
}