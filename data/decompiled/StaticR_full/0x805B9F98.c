/* Function at 0x805B9F98, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9F98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x805B9FA0
    *(0x14 + r1) = r0; // stw @ 0x805B9FA4
    *(0xc + r1) = r31; // stw @ 0x805B9FA8
    r31 = r3;
    FUN_805BA164(r4); // bl 0x805BA164
    /* lis r4, 0 */ // 0x805B9FB4
    r3 = r31;
    r4 = r4 + 0; // 0x805B9FBC
    *(0 + r31) = r4; // stw @ 0x805B9FC0
    r12 = *(0 + r31); // lwz @ 0x805B9FC4
    r12 = *(0xc + r12); // lwz @ 0x805B9FC8
    /* mtctr r12 */ // 0x805B9FCC
    /* bctrl  */ // 0x805B9FD0
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805B9FD8
    r0 = *(0x14 + r1); // lwz @ 0x805B9FDC
    return;
}