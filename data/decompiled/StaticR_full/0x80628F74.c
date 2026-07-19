/* Function at 0x80628F74, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80628F74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80628F80
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x80628F88
    FUN_805F68D8(); // bl 0x805F68D8
    r3 = *(0x10 + r31); // lwz @ 0x80628F90
    /* li r4, 0 */ // 0x80628F94
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r31); // lwz @ 0x80628F9C
    FUN_805F6940(r4); // bl 0x805F6940
    /* lis r3, 0 */ // 0x80628FA4
    /* li r4, 1 */ // 0x80628FA8
    r3 = *(0 + r3); // lwz @ 0x80628FAC
    r3 = *(0 + r3); // lwz @ 0x80628FB0
    FUN_80685950(r3, r4); // bl 0x80685950
    r0 = *(0x14 + r1); // lwz @ 0x80628FB8
    r31 = *(0xc + r1); // lwz @ 0x80628FBC
    return;
}