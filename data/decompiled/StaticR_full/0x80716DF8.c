/* Function at 0x80716DF8, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80716DF8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80716E08
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80716E10
    r30 = r3;
    if (==) goto 0x0x80716e9c;
    /* lis r5, 0 */ // 0x80716E1C
    /* lis r4, 0 */ // 0x80716E20
    r5 = r5 + 0; // 0x80716E24
    *(0 + r3) = r5; // stw @ 0x80716E28
    r0 = r5 + 0x150; // 0x80716E2C
    *(0x104 + r3) = r0; // stw @ 0x80716E30
    r3 = *(0 + r4); // lwz @ 0x80716E34
    if (==) goto 0x0x80716e64;
    if (==) goto 0x0x80716e58;
    r12 = *(0 + r3); // lwz @ 0x80716E44
    /* li r4, 1 */ // 0x80716E48
    r12 = *(8 + r12); // lwz @ 0x80716E4C
    /* mtctr r12 */ // 0x80716E50
    /* bctrl  */ // 0x80716E54
    /* lis r3, 0 */ // 0x80716E58
    /* li r0, 0 */ // 0x80716E5C
    *(0 + r3) = r0; // stw @ 0x80716E60
    /* addic. r0, r30, 0x104 */ // 0x80716E64
    /* lis r3, 0 */ // 0x80716E68
    /* li r0, 0 */ // 0x80716E6C
    *(0 + r3) = r0; // stb @ 0x80716E70
    if (==) goto 0x0x80716e8c;
    /* lis r4, 0 */ // 0x80716E78
    r3 = *(0x118 + r30); // lwz @ 0x80716E7C
    r4 = r4 + 0; // 0x80716E80
    *(0x104 + r30) = r4; // stw @ 0x80716E84
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80716e9c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80716EA0
    r30 = *(8 + r1); // lwz @ 0x80716EA4
    r0 = *(0x14 + r1); // lwz @ 0x80716EA8
    return;
}