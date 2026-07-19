/* Function at 0x807FC9B8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FC9B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FC9C4
    r31 = r3;
    FUN_8080F2E8(); // bl 0x8080F2E8
    r3 = *(0x20 + r31); // lwz @ 0x807FC9D0
    /* lis r4, 0 */ // 0x807FC9D4
    /* lfs f1, 0(r4) */ // 0x807FC9D8
    /* li r4, 0 */ // 0x807FC9DC
    r12 = *(0 + r3); // lwz @ 0x807FC9E0
    r12 = *(0x10 + r12); // lwz @ 0x807FC9E4
    /* mtctr r12 */ // 0x807FC9E8
    /* bctrl  */ // 0x807FC9EC
    r3 = *(0x20 + r31); // lwz @ 0x807FC9F0
    /* li r0, 1 */ // 0x807FC9F4
    *(0x17 + r3) = r0; // stb @ 0x807FC9F8
    r31 = *(0xc + r1); // lwz @ 0x807FC9FC
    r0 = *(0x14 + r1); // lwz @ 0x807FCA00
    return;
}