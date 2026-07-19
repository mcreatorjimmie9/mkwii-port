/* Function at 0x808C5FA8, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808C5FA8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808C5FB4
    r31 = *(0x240 + r4); // lwz @ 0x808C5FB8
    if (!=) goto 0x0x808c5fd8;
    r3 = *(0x2bc + r3); // lwz @ 0x808C5FC4
    /* li r4, 0 */ // 0x808C5FC8
    /* li r5, 0 */ // 0x808C5FCC
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    /* b 0x808c5ff4 */ // 0x808C5FD4
    /* lis r4, 0 */ // 0x808C5FD8
    /* slwi r0, r31, 2 */ // 0x808C5FDC
    r4 = r4 + 0; // 0x808C5FE0
    r3 = *(0x2bc + r3); // lwz @ 0x808C5FE4
    /* lwzx r4, r4, r0 */ // 0x808C5FE8
    /* li r5, 0 */ // 0x808C5FEC
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    r0 = r31 + -1; // 0x808C5FF4
    if (<=) goto 0x0x808c6018;
    r0 = r31 + -4; // 0x808C6000
    if (<=) goto 0x0x808c6018;
    if (==) goto 0x0x808c6018;
    r0 = *(0x14 + r1); // lwz @ 0x808C6018
    r31 = *(0xc + r1); // lwz @ 0x808C601C
    return;
}