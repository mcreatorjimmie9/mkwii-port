/* Function at 0x807E6FF4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E6FF4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 3 */ // 0x807E6FFC
    *(0x14 + r1) = r0; // stw @ 0x807E7000
    /* li r0, 4 */ // 0x807E7004
    *(0xc + r1) = r31; // stw @ 0x807E7008
    r31 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x807E7010
    r5 = *(8 + r3); // lwz @ 0x807E7014
    r3 = *(0x28 + r5); // lwz @ 0x807E7018
    FUN_805E7060(); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807E7020
    r12 = *(8 + r12); // lwz @ 0x807E7024
    /* mtctr r12 */ // 0x807E7028
    /* bctrl  */ // 0x807E702C
    r5 = *(8 + r31); // lwz @ 0x807E7030
    /* lis r3, 0 */ // 0x807E7034
    /* lfs f2, 0(r3) */ // 0x807E7038
    /* li r4, 0 */ // 0x807E703C
    r3 = *(0x28 + r5); // lwz @ 0x807E7040
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x807E7048
    r31 = *(0xc + r1); // lwz @ 0x807E704C
    return;
}