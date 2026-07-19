/* Function at 0x807EFB5C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EFB5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807EFB64
    *(0x14 + r1) = r0; // stw @ 0x807EFB68
    *(0xc + r1) = r31; // stw @ 0x807EFB6C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x807EFB74
    r12 = *(0x68 + r12); // lwz @ 0x807EFB78
    /* mtctr r12 */ // 0x807EFB7C
    /* bctrl  */ // 0x807EFB80
    /* li r0, 0 */ // 0x807EFB84
    *(0xb0 + r31) = r0; // stw @ 0x807EFB88
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x807EFB90
    r12 = *(0x90 + r12); // lwz @ 0x807EFB94
    /* mtctr r12 */ // 0x807EFB98
    /* bctrl  */ // 0x807EFB9C
    /* li r0, 1 */ // 0x807EFBA0
    *(0xbc + r31) = r0; // stb @ 0x807EFBA4
    r3 = r31;
    /* li r4, 0 */ // 0x807EFBAC
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x807EFBB4
    r31 = *(0xc + r1); // lwz @ 0x807EFBB8
    return;
}