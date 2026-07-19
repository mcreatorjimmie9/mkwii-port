/* Function at 0x807F4CC4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F4CC4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F4CD0
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807F4CD8
    if (==) goto 0x0x807f4d18;
    /* li r0, 2 */ // 0x807F4CE4
    *(0xb0 + r3) = r0; // stw @ 0x807F4CE8
    r4 = *(8 + r3); // lwz @ 0x807F4CEC
    /* lis r3, 0 */ // 0x807F4CF0
    /* lis r5, 0 */ // 0x807F4CF4
    /* lfs f1, 0(r3) */ // 0x807F4CF8
    r3 = *(0x28 + r4); // lwz @ 0x807F4CFC
    /* li r4, 1 */ // 0x807F4D00
    /* lfs f2, 0(r5) */ // 0x807F4D04
    /* li r5, 1 */ // 0x807F4D08
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r0, 0xb4 */ // 0x807F4D10
    *(0xbc + r31) = r0; // stw @ 0x807F4D14
    r0 = *(0x14 + r1); // lwz @ 0x807F4D18
    r31 = *(0xc + r1); // lwz @ 0x807F4D1C
    return;
}