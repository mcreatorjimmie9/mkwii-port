/* Function at 0x80857008, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80857008(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80857014
    r31 = r3;
    FUN_8061F138(); // bl 0x8061F138
    r0 = *(0xa8 + r31); // lbz @ 0x80857020
    if (!=) goto 0x0x8085708c;
    r0 = *(0xb4 + r31); // lbz @ 0x8085702C
    if (!=) goto 0x0x8085708c;
    r3 = *(0xfa + r31); // lhz @ 0x80857038
    /* li r0, 0 */ // 0x8085703C
    if (<) goto 0x0x80857050;
    if (<=) goto 0x0x80857068;
    if (<) goto 0x0x8085706c;
    if (>) goto 0x0x8085706c;
    if (==) goto 0x0x8085706c;
    /* li r0, 1 */ // 0x80857068
    if (!=) goto 0x0x8085708c;
    /* lis r4, 0 */ // 0x80857074
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8085707C
    /* li r4, 0x14 */ // 0x80857080
    /* li r5, 1 */ // 0x80857084
    FUN_80851658(r4, r3, r4, r5); // bl 0x80851658
    r0 = *(0x14 + r1); // lwz @ 0x8085708C
    r31 = *(0xc + r1); // lwz @ 0x80857090
    return;
}