/* Function at 0x808F90F0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808F90F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F90FC
    r31 = r3;
    /* lis r3, 0 */ // 0x808F9104
    r3 = *(0 + r3); // lwz @ 0x808F9108
    r4 = *(0x27 + r31); // lbz @ 0x808F910C
    FUN_808F6C30(r3); // bl 0x808F6C30
    if (!=) goto 0x0x808f9124;
    /* li r3, -1 */ // 0x808F911C
    /* b 0x808f9138 */ // 0x808F9120
    r4 = *(0x26 + r31); // lbz @ 0x808F9124
    r3 = r31;
    FUN_805E364C(r3, r3); // bl 0x805E364C
    r0 = *(0x18 + r31); // lwz @ 0x808F9130
    r3 = r0 + r3; // 0x808F9134
    r0 = *(0x14 + r1); // lwz @ 0x808F9138
    r31 = *(0xc + r1); // lwz @ 0x808F913C
    return;
}