/* Function at 0x8081FC40, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8081FC40(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8081FC48
    *(0x14 + r1) = r0; // stw @ 0x8081FC4C
    *(0xc + r1) = r31; // stw @ 0x8081FC50
    r31 = r3;
    r5 = *(0x50 + r3); // lwz @ 0x8081FC58
    r0 = r5 + -1; // 0x8081FC5C
    *(0x50 + r3) = r0; // stw @ 0x8081FC60
    /* slwi r0, r0, 2 */ // 0x8081FC64
    r5 = r3 + r0; // 0x8081FC68
    r3 = *(0 + r4); // lwz @ 0x8081FC6C
    r4 = *(0x20 + r5); // lwz @ 0x8081FC70
    r0 = *(4 + r4); // lwz @ 0x8081FC74
    /* mulli r0, r0, 0x24 */ // 0x8081FC78
    r3 = r3 + r0; // 0x8081FC7C
    r3 = r3 + 0x48; // 0x8081FC80
    FUN_80820FFC(r3); // bl 0x80820FFC
    r0 = *(0x50 + r31); // lwz @ 0x8081FC88
    if (!=) goto 0x0x8081fcc4;
    /* li r0, 0 */ // 0x8081FC94
    /* li r5, 0x10 */ // 0x8081FC98
    /* li r4, 0x14 */ // 0x8081FC9C
    /* li r3, 4 */ // 0x8081FCA0
    *(0x14 + r31) = r5; // stw @ 0x8081FCA4
    *(0x18 + r31) = r4; // stw @ 0x8081FCA8
    *(0x1c + r31) = r3; // stw @ 0x8081FCAC
    *(0x20 + r31) = r0; // stw @ 0x8081FCB0
    *(0x24 + r31) = r0; // stw @ 0x8081FCB4
    *(0x28 + r31) = r0; // stw @ 0x8081FCB8
    *(0x50 + r31) = r0; // stw @ 0x8081FCBC
    *(0x54 + r31) = r0; // stw @ 0x8081FCC0
    r0 = *(0x14 + r1); // lwz @ 0x8081FCC4
    r31 = *(0xc + r1); // lwz @ 0x8081FCC8
    return;
}