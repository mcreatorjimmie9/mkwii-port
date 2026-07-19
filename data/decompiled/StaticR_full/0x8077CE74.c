/* Function at 0x8077CE74, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8077CE74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077CE80
    r31 = r3;
    r0 = *(0x1a0 + r3); // lwz @ 0x8077CE88
    if (!=) goto 0x0x8077ce9c;
    /* li r0, 1 */ // 0x8077CE94
    *(0x116 + r3) = r0; // stb @ 0x8077CE98
    r3 = r31;
    FUN_8077D3B0(r3); // bl 0x8077D3B0
    r3 = r31;
    FUN_80752D0C(r3, r3); // bl 0x80752D0C
    r3 = r31;
    FUN_807556F8(r3, r3, r3); // bl 0x807556F8
    r3 = r31;
    FUN_8077CEDC(r3, r3, r3); // bl 0x8077CEDC
    r3 = *(0x1a0 + r31); // lwz @ 0x8077CEBC
    r0 = r3 + 1; // 0x8077CEC0
    *(0x1a0 + r31) = r0; // stw @ 0x8077CEC4
    r31 = *(0xc + r1); // lwz @ 0x8077CEC8
    r0 = *(0x14 + r1); // lwz @ 0x8077CECC
    return;
}