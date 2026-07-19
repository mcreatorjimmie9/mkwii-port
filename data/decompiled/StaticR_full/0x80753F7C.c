/* Function at 0x80753F7C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80753F7C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80753F84
    *(0x24 + r1) = r0; // stw @ 0x80753F88
    *(0x1c + r1) = r31; // stw @ 0x80753F8C
    r31 = r3;
    r5 = *(0x20 + r31); // lwz @ 0x80753F94
    r3 = *(0xe4 + r3); // lwz @ 0x80753F98
    r5 = r5 + 0x18; // 0x80753F9C
    FUN_80774234(r5); // bl 0x80774234
    /* lis r5, 0 */ // 0x80753FA4
    r3 = *(0xe4 + r31); // lwz @ 0x80753FA8
    r5 = r5 + 0; // 0x80753FAC
    /* li r4, 0 */ // 0x80753FB0
    FUN_80774368(r5, r5, r4); // bl 0x80774368
    r3 = *(0xe4 + r31); // lwz @ 0x80753FB8
    /* li r4, 0 */ // 0x80753FBC
    FUN_807746D4(r5, r4, r4); // bl 0x807746D4
    /* lis r4, 0 */ // 0x80753FC4
    r4 = r4 + 0; // 0x80753FCC
    FUN_805A443C(r4, r4, r3, r4); // bl 0x805A443C
    r3 = *(0xe4 + r31); // lwz @ 0x80753FD4
    /* li r4, 0 */ // 0x80753FDC
    FUN_807743F0(r4, r5, r4); // bl 0x807743F0
    r3 = *(0xe4 + r31); // lwz @ 0x80753FE4
    /* li r4, 0 */ // 0x80753FE8
    /* li r5, 1 */ // 0x80753FEC
    FUN_807745CC(r4, r4, r5); // bl 0x807745CC
    r0 = *(0x24 + r1); // lwz @ 0x80753FF4
    r31 = *(0x1c + r1); // lwz @ 0x80753FF8
    return;
}