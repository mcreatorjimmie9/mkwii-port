/* Function at 0x807076A0, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807076A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807076AC
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x807076B4
    if (==) goto 0x0x807076cc;
    if (==) goto 0x0x807076e4;
    /* b 0x80707708 */ // 0x807076C8
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x807076D8
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x80707708 */ // 0x807076E0
    r3 = r4;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x807076EC
    r3 = r31;
    /* li r4, 0x7a */ // 0x807076F4
    /* li r5, 1 */ // 0x807076F8
    r12 = *(0x1c + r12); // lwz @ 0x807076FC
    /* mtctr r12 */ // 0x80707700
    /* bctrl  */ // 0x80707704
    r0 = *(0x14 + r1); // lwz @ 0x80707708
    r31 = *(0xc + r1); // lwz @ 0x8070770C
    return;
}