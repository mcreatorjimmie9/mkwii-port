/* Function at 0x8083D1BC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8083D1BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8083D1CC
    r30 = r3;
    r31 = *(0x18 + r3); // lbz @ 0x8083D1D4
    r3 = r31;
    FUN_8083D260(r3); // bl 0x8083D260
    /* lis r4, 0 */ // 0x8083D1E0
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8083D1E8
    /* li r4, 0x15 */ // 0x8083D1EC
    /* li r5, 1 */ // 0x8083D1F0
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    /* lis r3, 0 */ // 0x8083D1F8
    r3 = *(0 + r3); // lwz @ 0x8083D1FC
    FUN_80840FFC(r4, r5, r3); // bl 0x80840FFC
    r3 = r30 + 0x88; // 0x8083D204
    /* li r4, 1 */ // 0x8083D208
    FUN_80841FBC(r3, r3, r4); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8083D210
    r0 = *(0 + r3); // lbz @ 0x8083D214
    if (==) goto 0x0x8083d22c;
    r4 = r31;
    /* li r3, 6 */ // 0x8083D224
    FUN_808272B4(r4, r3); // bl 0x808272B4
    r0 = *(0x14 + r1); // lwz @ 0x8083D22C
    r31 = *(0xc + r1); // lwz @ 0x8083D230
    r30 = *(8 + r1); // lwz @ 0x8083D234
    return;
}