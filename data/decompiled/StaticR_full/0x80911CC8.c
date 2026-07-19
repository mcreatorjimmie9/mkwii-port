/* Function at 0x80911CC8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80911CC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80911CD0
    *(0x14 + r1) = r0; // stw @ 0x80911CD4
    *(0xc + r1) = r31; // stw @ 0x80911CD8
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x80911CE0
    /* li r4, 1 */ // 0x80911CE4
    /* stfs f0, 0xb4(r3) */ // 0x80911CE8
    r12 = *(0 + r3); // lwz @ 0x80911CEC
    r12 = *(0x68 + r12); // lwz @ 0x80911CF0
    /* mtctr r12 */ // 0x80911CF4
    /* bctrl  */ // 0x80911CF8
    /* li r0, 1 */ // 0x80911CFC
    *(0x185 + r31) = r0; // stb @ 0x80911D00
    r31 = *(0xc + r1); // lwz @ 0x80911D04
    r0 = *(0x14 + r1); // lwz @ 0x80911D08
    return;
}