/* Function at 0x8077CD44, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_8077CD44(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8077CD4C
    *(0x14 + r1) = r0; // stw @ 0x8077CD50
    *(0xc + r1) = r31; // stw @ 0x8077CD54
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8077CD5C
    r0 = *(0xb74 + r4); // lwz @ 0x8077CD60
    if (!=) goto 0x0x8077cdb0;
    r0 = *(0x1a0 + r3); // lwz @ 0x8077CD6C
    if (!=) goto 0x0x8077cd80;
    /* li r0, 1 */ // 0x8077CD78
    *(0x116 + r3) = r0; // stb @ 0x8077CD7C
    r3 = r31;
    FUN_8077D3B0(r3); // bl 0x8077D3B0
    r3 = r31;
    FUN_80752D0C(r3, r3); // bl 0x80752D0C
    r3 = r31;
    FUN_807556F8(r3, r3, r3); // bl 0x807556F8
    r3 = r31;
    FUN_8077CEDC(r3, r3, r3); // bl 0x8077CEDC
    r3 = *(0x1a0 + r31); // lwz @ 0x8077CDA0
    r0 = r3 + 1; // 0x8077CDA4
    *(0x1a0 + r31) = r0; // stw @ 0x8077CDA8
    /* b 0x8077ce60 */ // 0x8077CDAC
    FUN_8077D3B0(); // bl 0x8077D3B0
    r3 = r31;
    FUN_80752D0C(r3); // bl 0x80752D0C
    r3 = *(0x13c + r31); // lwz @ 0x8077CDBC
    r3 = r3 + 0x74; // 0x8077CDC0
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x8077cdd8;
    /* li r3, 0 */ // 0x8077CDD0
    /* b 0x8077cddc */ // 0x8077CDD4
    r3 = *(0xc + r3); // lwz @ 0x8077CDD8
}