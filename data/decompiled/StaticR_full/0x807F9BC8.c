/* Function at 0x807F9BC8, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F9BC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F9BD4
    r31 = r3;
    r0 = *(0xc4 + r3); // lwz @ 0x807F9BDC
    if (!=) goto 0x0x807f9c78;
    r3 = *(0x20 + r3); // lwz @ 0x807F9BE8
    r12 = *(0 + r3); // lwz @ 0x807F9BEC
    r12 = *(0x14 + r12); // lwz @ 0x807F9BF0
    /* mtctr r12 */ // 0x807F9BF4
    /* bctrl  */ // 0x807F9BF8
    if (!=) goto 0x0x807f9c28;
    /* li r0, 1 */ // 0x807F9C04
    *(0xc4 + r31) = r0; // stw @ 0x807F9C08
    r3 = *(0x20 + r31); // lwz @ 0x807F9C0C
    r0 = *(0x46 + r3); // lha @ 0x807F9C10
    r3 = *(8 + r3); // lwz @ 0x807F9C14
    /* slwi r0, r0, 4 */ // 0x807F9C18
    r3 = r3 + r0; // 0x807F9C1C
    r0 = *(0xc + r3); // lhz @ 0x807F9C20
    *(0xc8 + r31) = r0; // stw @ 0x807F9C24
    r5 = *(0x20 + r31); // lwz @ 0x807F9C28
    /* lis r4, 0 */ // 0x807F9C2C
    /* lfs f1, 0xd0(r31) */ // 0x807F9C30
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x807F9C38
    r0 = *(0x2c + r31); // lhz @ 0x807F9C3C
    /* lfs f2, 0x18(r5) */ // 0x807F9C40
    /* fsubs f0, f1, f0 */ // 0x807F9C44
    r0 = r0 | 1; // 0x807F9C48
    /* lfs f3, 0x34(r31) */ // 0x807F9C4C
    /* stfs f2, 0x30(r31) */ // 0x807F9C50
    /* fadds f2, f0, f3 */ // 0x807F9C54
    *(0x2c + r31) = r0; // sth @ 0x807F9C58
    /* lfs f1, 0x20(r5) */ // 0x807F9C5C
    /* stfs f1, 0x38(r31) */ // 0x807F9C60
    /* stfs f0, 0xd0(r31) */ // 0x807F9C64
    *(0x2c + r31) = r0; // sth @ 0x807F9C68
    /* stfs f2, 0x34(r31) */ // 0x807F9C6C
    FUN_807F9E88(); // bl 0x807F9E88
    /* b 0x807f9c90 */ // 0x807F9C74
    r0 = *(0xc8 + r3); // lwz @ 0x807F9C78
    /* addic. r0, r0, -1 */ // 0x807F9C7C
    *(0xc8 + r3) = r0; // stw @ 0x807F9C80
    if (!=) goto 0x0x807f9c90;
    /* li r0, 0 */ // 0x807F9C88
    *(0xc4 + r3) = r0; // stw @ 0x807F9C8C
    r0 = *(0x14 + r1); // lwz @ 0x807F9C90
    r31 = *(0xc + r1); // lwz @ 0x807F9C94
    return;
}