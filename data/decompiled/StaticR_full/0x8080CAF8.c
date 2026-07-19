/* Function at 0x8080CAF8, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080CAF8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8080CB00
    *(0x24 + r1) = r0; // stw @ 0x8080CB04
    *(0x1c + r1) = r31; // stw @ 0x8080CB08
    r31 = r3;
    r4 = r31 + 0x30; // 0x8080CB10
    /* lfs f0, 0(r5) */ // 0x8080CB14
    r5 = r31 + 0xb4; // 0x8080CB18
    /* lfs f1, 0xb8(r3) */ // 0x8080CB1C
    /* fsubs f0, f1, f0 */ // 0x8080CB20
    /* stfs f0, 0xb8(r3) */ // 0x8080CB24
    FUN_805A4464(r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x8080CB30
    r3 = r31;
    /* lfs f2, 0x10(r1) */ // 0x8080CB38
    /* lfs f1, 0xc(r1) */ // 0x8080CB3C
    r0 = r0 | 1; // 0x8080CB40
    /* lfs f0, 8(r1) */ // 0x8080CB44
    /* stfs f0, 0x30(r31) */ // 0x8080CB48
    *(0x2c + r31) = r0; // sth @ 0x8080CB4C
    /* stfs f1, 0x34(r31) */ // 0x8080CB50
    /* stfs f2, 0x38(r31) */ // 0x8080CB54
    FUN_8080CCAC(); // bl 0x8080CCAC
    r0 = *(0xc8 + r31); // lwz @ 0x8080CB5C
    /* addic. r0, r0, -1 */ // 0x8080CB60
    *(0xc8 + r31) = r0; // stw @ 0x8080CB64
    if (!=) goto 0x0x8080cba0;
    /* li r0, 3 */ // 0x8080CB6C
    *(0xb0 + r31) = r0; // stw @ 0x8080CB70
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x8080CB78
    r12 = *(0x90 + r12); // lwz @ 0x8080CB7C
    /* mtctr r12 */ // 0x8080CB80
    /* bctrl  */ // 0x8080CB84
    r12 = *(0 + r31); // lwz @ 0x8080CB88
    r3 = r31;
    /* li r4, 0 */ // 0x8080CB90
    r12 = *(0x68 + r12); // lwz @ 0x8080CB94
    /* mtctr r12 */ // 0x8080CB98
    /* bctrl  */ // 0x8080CB9C
    r0 = *(0x24 + r1); // lwz @ 0x8080CBA0
    r31 = *(0x1c + r1); // lwz @ 0x8080CBA4
    return;
}