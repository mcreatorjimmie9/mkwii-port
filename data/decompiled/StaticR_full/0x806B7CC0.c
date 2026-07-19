/* Function at 0x806B7CC0, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806B7CC0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B7CCC
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806B7CD4
    if (==) goto 0x0x806b7cec;
    if (==) goto 0x0x806b7d04;
    /* b 0x806b7d58 */ // 0x806B7CE8
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806B7CF8
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806b7d58 */ // 0x806B7D00
    /* lis r3, 0 */ // 0x806B7D04
    r3 = *(0 + r3); // lwz @ 0x806B7D08
    r3 = *(0 + r3); // lwz @ 0x806B7D0C
    r0 = *(0 + r3); // lwz @ 0x806B7D10
    if (!=) goto 0x0x806b7d34;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x806B7D28
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806b7d58 */ // 0x806B7D30
    r3 = r4;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806B7D3C
    r3 = r31;
    /* li r4, 0x7a */ // 0x806B7D44
    /* li r5, 1 */ // 0x806B7D48
    r12 = *(0x1c + r12); // lwz @ 0x806B7D4C
    /* mtctr r12 */ // 0x806B7D50
    /* bctrl  */ // 0x806B7D54
    r0 = *(0x14 + r1); // lwz @ 0x806B7D58
    r31 = *(0xc + r1); // lwz @ 0x806B7D5C
    return;
}