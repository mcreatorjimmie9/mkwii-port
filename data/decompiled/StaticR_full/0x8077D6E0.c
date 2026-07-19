/* Function at 0x8077D6E0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077D6E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077D6EC
    r31 = r3;
    r0 = *(0x1bc + r3); // lbz @ 0x8077D6F4
    if (==) goto 0x0x8077d728;
    r3 = *(0x13c + r3); // lwz @ 0x8077D700
    r12 = *(0 + r3); // lwz @ 0x8077D704
    r12 = *(0xc + r12); // lwz @ 0x8077D708
    /* mtctr r12 */ // 0x8077D70C
    /* bctrl  */ // 0x8077D710
    /* lis r4, 0 */ // 0x8077D714
    r3 = *(0xd8 + r31); // lwz @ 0x8077D718
    /* lfs f1, 0(r4) */ // 0x8077D71C
    /* li r4, 0x275 */ // 0x8077D720
    FUN_808A0AC8(r4, r4); // bl 0x808A0AC8
    r0 = *(0x14 + r1); // lwz @ 0x8077D728
    r31 = *(0xc + r1); // lwz @ 0x8077D72C
    return;
}