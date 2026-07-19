/* Function at 0x80671CF0, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80671CF0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80671CF8
    /* stfd f31, 0x18(r1) */ // 0x80671D00
    /* fmr f31, f1 */ // 0x80671D04
    *(0x14 + r1) = r31; // stw @ 0x80671D08
    r31 = r5;
    *(0x10 + r1) = r30; // stw @ 0x80671D10
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x80671D18
    FUN_80698C44(); // bl 0x80698C44
    if (==) goto 0x0x80671d2c;
    *(0x10 + r30) = r31; // stw @ 0x80671D28
    /* fctiwz f0, f31 */ // 0x80671D2C
    /* li r0, 1 */ // 0x80671D30
    /* stfs f31, 0x18(r30) */ // 0x80671D34
    /* lis r3, 0 */ // 0x80671D38
    /* li r5, 0xff */ // 0x80671D3C
    *(0xc + r30) = r0; // stb @ 0x80671D40
    /* stfd f0, 8(r1) */ // 0x80671D44
    r3 = *(0 + r3); // lwz @ 0x80671D48
    r4 = *(0xc + r1); // lwz @ 0x80671D4C
    FUN_80698D34(r5); // bl 0x80698D34
    r0 = *(0x24 + r1); // lwz @ 0x80671D54
    /* lfd f31, 0x18(r1) */ // 0x80671D58
    r31 = *(0x14 + r1); // lwz @ 0x80671D5C
    r30 = *(0x10 + r1); // lwz @ 0x80671D60
    return;
}