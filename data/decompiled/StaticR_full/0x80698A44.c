/* Function at 0x80698A44, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80698A44(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80698A50
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x80698A58
    if (==) goto 0x0x80698a6c;
    /* li r0, 0 */ // 0x80698A64
    *(0x20 + r3) = r0; // stb @ 0x80698A68
    r3 = r3 + 0x34; // 0x80698A6C
    FUN_8067EF84(r3); // bl 0x8067EF84
    r3 = *(0 + r31); // lwz @ 0x80698A74
    FUN_8068558C(r3); // bl 0x8068558C
    r3 = r31;
    FUN_80698714(r3, r3); // bl 0x80698714
    r0 = *(0x14 + r1); // lwz @ 0x80698A84
    r31 = *(0xc + r1); // lwz @ 0x80698A88
    return;
}