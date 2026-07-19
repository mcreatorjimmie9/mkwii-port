/* Function at 0x807A21D0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807A21D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807A21D8
    *(0x14 + r1) = r0; // stw @ 0x807A21DC
    /* li r0, 2 */ // 0x807A21E0
    *(0xc + r1) = r31; // stw @ 0x807A21E4
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A21EC
    r3 = *(0 + r4); // lwz @ 0x807A21F0
    FUN_807AACC4(); // bl 0x807AACC4
    /* lis r3, 0 */ // 0x807A21F8
    r4 = *(0x10 + r31); // lwz @ 0x807A21FC
    r3 = *(0 + r3); // lwz @ 0x807A2200
    FUN_80788808(r3); // bl 0x80788808
    /* lis r3, 0 */ // 0x807A2208
    /* lis r5, 0 */ // 0x807A220C
    /* lfs f1, 0(r5) */ // 0x807A2210
    /* li r4, 3 */ // 0x807A2214
    r3 = *(0 + r3); // lwz @ 0x807A2218
    /* li r5, 0xa */ // 0x807A221C
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x807A2224
    r31 = *(0xc + r1); // lwz @ 0x807A2228
    return;
}