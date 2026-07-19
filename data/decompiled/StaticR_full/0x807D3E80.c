/* Function at 0x807D3E80, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D3E80(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D3E90
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D3E98
    r30 = r3;
    if (==) goto 0x0x807d3ebc;
    /* li r4, 0 */ // 0x807D3EA4
    FUN_807BB054(r4); // bl 0x807BB054
    if (<=) goto 0x0x807d3ebc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D3EC0
    r30 = *(8 + r1); // lwz @ 0x807D3EC4
    r0 = *(0x14 + r1); // lwz @ 0x807D3EC8
    return;
}