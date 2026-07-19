/* Function at 0x807D6D98, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 9 function(s) */

int FUN_807D6D98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807D6DA0
    *(0x14 + r1) = r0; // stw @ 0x807D6DA4
    /* li r0, 0 */ // 0x807D6DA8
    /* lfs f0, 0(r4) */ // 0x807D6DAC
    *(0xc + r1) = r31; // stw @ 0x807D6DB0
    r31 = r3;
    /* stfs f0, 0x218(r3) */ // 0x807D6DB8
    r4 = *(0x208 + r3); // lwz @ 0x807D6DBC
    /* stfs f0, 0x214(r3) */ // 0x807D6DC0
    /* stfs f0, 0x210(r3) */ // 0x807D6DC4
    *(0x204 + r3) = r0; // stw @ 0x807D6DC8
    *(0x1fc + r3) = r0; // stw @ 0x807D6DCC
    *(0x20c + r3) = r0; // stb @ 0x807D6DD0
    *(4 + r4) = r0; // stw @ 0x807D6DD4
    FUN_807D7044(); // bl 0x807D7044
    r3 = *(0x1f0 + r31); // lwz @ 0x807D6DDC
    r3 = *(0 + r3); // lwz @ 0x807D6DE0
    FUN_8061DF08(); // bl 0x8061DF08
    if (==) goto 0x0x807d6e40;
    /* lis r3, 0 */ // 0x807D6DF0
    r3 = *(0 + r3); // lwz @ 0x807D6DF4
    r0 = *(0xb74 + r3); // lwz @ 0x807D6DF8
    if (!=) goto 0x0x807d6e14;
    r3 = r31;
    r4 = r31 + 0x1c4; // 0x807D6E08
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d6e68 */ // 0x807D6E10
    FUN_807C011C(r3, r4); // bl 0x807C011C
    if (==) goto 0x0x807d6e30;
    r3 = r31;
    r4 = r31 + 8; // 0x807D6E24
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d6e68 */ // 0x807D6E2C
    r3 = r31;
    r4 = r31 + 0x38; // 0x807D6E34
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807d6e68 */ // 0x807D6E3C
    FUN_807C011C(r3, r4); // bl 0x807C011C
    if (==) goto 0x0x807d6e5c;
    r3 = r31;
    r4 = r31 + 8; // 0x807D6E50
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d6e68 */ // 0x807D6E58
    r3 = r31;
    r4 = r31 + 0x38; // 0x807D6E60
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D6E68
    r31 = *(0xc + r1); // lwz @ 0x807D6E6C
    return;
}