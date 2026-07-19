/* Function at 0x8090BFEC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8090BFEC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r6, 1 */ // 0x8090BFF4
    *(0x24 + r1) = r0; // stw @ 0x8090BFF8
    /* li r0, 0 */ // 0x8090BFFC
    *(0x1c + r1) = r31; // stw @ 0x8090C008
    /* lis r31, 0 */ // 0x8090C00C
    r31 = r31 + 0; // 0x8090C010
    *(0x18 + r1) = r30; // stw @ 0x8090C014
    r30 = r3;
    *(8 + r1) = r0; // stb @ 0x8090C01C
    r5 = *(0x10 + r31); // lwz @ 0x8090C020
    r0 = *(0x14 + r31); // lwz @ 0x8090C024
    *(0x10 + r1) = r5; // stw @ 0x8090C028
    *(0xc + r1) = r0; // stw @ 0x8090C030
    FUN_808A1444(r5); // bl 0x808A1444
    r3 = *(8 + r30); // lwz @ 0x8090C038
    /* li r4, 0 */ // 0x8090C03C
    /* lfs f1, 0(r31) */ // 0x8090C040
    r3 = *(0x28 + r3); // lwz @ 0x8090C044
    /* lfs f2, 0x40(r31) */ // 0x8090C048
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x8090C050
    r31 = *(0x1c + r1); // lwz @ 0x8090C054
    r30 = *(0x18 + r1); // lwz @ 0x8090C058
    return;
}