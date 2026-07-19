/* Function at 0x80628F10, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80628F10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80628F1C
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x80628F24
    FUN_805F68D8(); // bl 0x805F68D8
    r3 = *(0x10 + r31); // lwz @ 0x80628F2C
    /* li r4, 0 */ // 0x80628F30
    FUN_805F5AC0(r4); // bl 0x805F5AC0
    r3 = *(0x10 + r31); // lwz @ 0x80628F38
    FUN_805F6940(r4); // bl 0x805F6940
    /* lis r3, 0 */ // 0x80628F40
    /* li r4, 0 */ // 0x80628F44
    r3 = *(0 + r3); // lwz @ 0x80628F48
    r3 = *(0 + r3); // lwz @ 0x80628F4C
    FUN_80685950(r3, r4); // bl 0x80685950
    r3 = *(0x10 + r31); // lwz @ 0x80628F54
    /* li r4, 0 */ // 0x80628F58
    FUN_805F59D8(r4); // bl 0x805F59D8
    r0 = *(0x14 + r1); // lwz @ 0x80628F60
    r31 = *(0xc + r1); // lwz @ 0x80628F64
    return;
}