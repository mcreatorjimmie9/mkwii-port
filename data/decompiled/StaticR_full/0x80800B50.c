/* Function at 0x80800B50, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80800B50(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80800B5C
    r31 = r3;
    r0 = *(0x14d + r3); // lbz @ 0x80800B64
    if (==) goto 0x0x80800bc8;
    r0 = *(0x14c + r3); // lbz @ 0x80800B70
    if (==) goto 0x0x80800ba0;
    r3 = *(0xfc + r3); // lwz @ 0x80800B7C
    /* li r6, 0 */ // 0x80800B80
    r4 = *(0x100 + r31); // lwz @ 0x80800B84
    r5 = *(0xd8 + r31); // lwz @ 0x80800B88
    r7 = *(0x150 + r31); // lwz @ 0x80800B8C
    FUN_8085FDC8(r6); // bl 0x8085FDC8
    /* li r0, 0 */ // 0x80800B94
    *(0x14c + r31) = r0; // stb @ 0x80800B98
    /* b 0x80800bc0 */ // 0x80800B9C
    r3 = *(0xfc + r3); // lwz @ 0x80800BA0
    /* li r6, 0 */ // 0x80800BA4
    r4 = *(0x100 + r31); // lwz @ 0x80800BA8
    r5 = *(0xd8 + r31); // lwz @ 0x80800BAC
    r7 = *(0x154 + r31); // lwz @ 0x80800BB0
    FUN_8085FDC8(r6); // bl 0x8085FDC8
    /* li r0, 1 */ // 0x80800BB8
    *(0x14c + r31) = r0; // stb @ 0x80800BBC
    /* li r0, 0 */ // 0x80800BC0
    *(0x14d + r31) = r0; // stb @ 0x80800BC4
    r0 = *(0x14 + r1); // lwz @ 0x80800BC8
    r31 = *(0xc + r1); // lwz @ 0x80800BCC
    return;
}