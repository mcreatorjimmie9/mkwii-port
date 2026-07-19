/* Function at 0x807A06B0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807A06B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807A06B8
    *(0x14 + r1) = r0; // stw @ 0x807A06BC
    *(0xc + r1) = r31; // stw @ 0x807A06C0
    r31 = *(0 + r5); // lwz @ 0x807A06C4
    if (==) goto 0x0x807a0714;
    if (==) goto 0x0x807a0708;
    /* lis r4, 0 */ // 0x807A06D4
    /* lis r3, 0 */ // 0x807A06D8
    r4 = r4 + 0; // 0x807A06DC
    *(0 + r31) = r4; // stw @ 0x807A06E0
    /* li r0, 0 */ // 0x807A06E4
    *(0 + r5) = r0; // stw @ 0x807A06E8
    r3 = *(0 + r3); // lwz @ 0x807A06EC
    FUN_807AABE0(r4); // bl 0x807AABE0
    /* lis r3, 0 */ // 0x807A06F4
    r3 = *(0 + r3); // lwz @ 0x807A06F8
    FUN_8078D17C(r3); // bl 0x8078D17C
    r3 = r31;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A0708
    /* li r0, 0 */ // 0x807A070C
    *(0 + r3) = r0; // stw @ 0x807A0710
    r0 = *(0x14 + r1); // lwz @ 0x807A0714
    r31 = *(0xc + r1); // lwz @ 0x807A0718
    return;
}