/* Function at 0x807A2F3C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807A2F3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807A2F44
    *(0x14 + r1) = r0; // stw @ 0x807A2F48
    /* li r0, 2 */ // 0x807A2F4C
    *(0xc + r1) = r31; // stw @ 0x807A2F50
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A2F58
    r3 = *(0 + r4); // lwz @ 0x807A2F5C
    FUN_807AACC4(); // bl 0x807AACC4
    /* lis r3, 0 */ // 0x807A2F64
    r4 = *(0x10 + r31); // lwz @ 0x807A2F68
    r3 = *(0 + r3); // lwz @ 0x807A2F6C
    FUN_80788808(r3); // bl 0x80788808
    r0 = *(0x14 + r1); // lwz @ 0x807A2F74
    r31 = *(0xc + r1); // lwz @ 0x807A2F78
    return;
}