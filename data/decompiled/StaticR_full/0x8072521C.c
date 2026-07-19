/* Function at 0x8072521C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8072521C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80725228
    r31 = r3;
    r0 = *(7 + r3); // lbz @ 0x80725230
    if (==) goto 0x0x80725268;
    /* li r4, 0 */ // 0x8072523C
    if (==) goto 0x0x80725254;
    r0 = *(8 + r3); // lbz @ 0x80725244
    if (!=) goto 0x0x80725254;
    /* li r4, 1 */ // 0x80725250
    if (==) goto 0x0x80725268;
    r3 = r31;
    /* li r4, 0 */ // 0x80725260
    FUN_8072550C(r4, r3, r4); // bl 0x8072550C
    r3 = *(7 + r31); // lbz @ 0x80725268
    *(8 + r31) = r3; // stb @ 0x8072526C
    r31 = *(0xc + r1); // lwz @ 0x80725270
    r0 = *(0x14 + r1); // lwz @ 0x80725274
    return;
}