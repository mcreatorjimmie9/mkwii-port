/* Function at 0x80911F5C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80911F5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, 0 */ // 0x80911F64
    *(0x14 + r1) = r0; // stw @ 0x80911F68
    *(0xc + r1) = r31; // stw @ 0x80911F6C
    r31 = r3;
    r0 = *(0x17c + r3); // lwz @ 0x80911F74
    r4 = *(0x178 + r3); // lwz @ 0x80911F78
    /* slwi r0, r0, 4 */ // 0x80911F7C
    r4 = r4 + r0; // 0x80911F80
    r5 = *(4 + r4); // lwz @ 0x80911F84
    r4 = *(0 + r5); // lbz @ 0x80911F88
    r5 = *(1 + r5); // lbz @ 0x80911F8C
    FUN_8090FD04(); // bl 0x8090FD04
    r12 = *(0 + r31); // lwz @ 0x80911F94
    r3 = r31;
    /* li r4, 1 */ // 0x80911F9C
    r12 = *(0x68 + r12); // lwz @ 0x80911FA0
    /* mtctr r12 */ // 0x80911FA4
    /* bctrl  */ // 0x80911FA8
    /* li r0, 1 */ // 0x80911FAC
    *(0x185 + r31) = r0; // stb @ 0x80911FB0
    r31 = *(0xc + r1); // lwz @ 0x80911FB4
    r0 = *(0x14 + r1); // lwz @ 0x80911FB8
    return;
}