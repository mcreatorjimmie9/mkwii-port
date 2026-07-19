/* Function at 0x80777010, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80777010(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077701C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80777024
    r12 = *(0xec + r12); // lwz @ 0x80777028
    /* mtctr r12 */ // 0x8077702C
    /* bctrl  */ // 0x80777030
    r3 = *(8 + r31); // lwz @ 0x80777034
    /* li r4, 2 */ // 0x80777038
    r3 = *(0x28 + r3); // lwz @ 0x8077703C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80777044
    /* lis r4, 0 */ // 0x80777048
    /* lfs f1, 0(r4) */ // 0x8077704C
    r12 = *(0x1c + r12); // lwz @ 0x80777050
    /* mtctr r12 */ // 0x80777054
    /* bctrl  */ // 0x80777058
    r12 = *(0 + r31); // lwz @ 0x8077705C
    r3 = r31;
    /* li r4, 0 */ // 0x80777064
    r12 = *(0x68 + r12); // lwz @ 0x80777068
    /* mtctr r12 */ // 0x8077706C
    /* bctrl  */ // 0x80777070
    r0 = *(0x14 + r1); // lwz @ 0x80777074
    r31 = *(0xc + r1); // lwz @ 0x80777078
    return;
}