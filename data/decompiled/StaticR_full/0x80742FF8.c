/* Function at 0x80742FF8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80742FF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80743004
    r31 = r3;
    r0 = *(0x13b + r3); // lbz @ 0x8074300C
    if (!=) goto 0x0x80743060;
    r0 = *(0x13e + r3); // lbz @ 0x80743018
    if (==) goto 0x0x80743048;
    /* lis r4, 0 */ // 0x80743024
    r4 = *(0 + r4); // lwz @ 0x80743028
    r0 = *(0x25 + r4); // lbz @ 0x8074302C
    if (!=) goto 0x0x80743048;
    r0 = *(0x724 + r3); // lwz @ 0x80743038
    if (==) goto 0x0x80743048;
    FUN_8073C734(); // bl 0x8073C734
    r3 = r31;
    FUN_8072F034(r3); // bl 0x8072F034
    r3 = r31;
    FUN_8072F2A8(r3, r3); // bl 0x8072F2A8
    r3 = r31;
    FUN_8072F530(r3, r3, r3); // bl 0x8072F530
    r0 = *(0x14 + r1); // lwz @ 0x80743060
    r31 = *(0xc + r1); // lwz @ 0x80743064
    return;
}