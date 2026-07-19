/* Function at 0x80809C04, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80809C04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80809C18
    *(0x14 + r1) = r29; // stw @ 0x80809C1C
    r0 = *(0xcc + r3); // lbz @ 0x80809C20
    if (==) goto 0x0x80809de8;
    r12 = *(0xb0 + r3); // lwzu @ 0x80809C2C
    /* li r4, 3 */ // 0x80809C30
    /* li r5, 0 */ // 0x80809C34
    r12 = *(0xc + r12); // lwz @ 0x80809C38
    /* mtctr r12 */ // 0x80809C3C
    /* bctrl  */ // 0x80809C40
    /* li r3, 0xbc */ // 0x80809C44
    FUN_805E3430(r5, r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x80809c70;
    r4 = *(0xa0 + r31); // lwz @ 0x80809C58
    /* li r5, 0 */ // 0x80809C5C
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80809C64
    r3 = r3 + 0; // 0x80809C68
    *(0 + r30) = r3; // stw @ 0x80809C6C
    r0 = *(0xb4 + r31); // lwz @ 0x80809C70
    if (>) goto 0x0x80809c90;
    r12 = *(0xb0 + r31); // lwz @ 0x80809C7C
    r3 = r31 + 0xb0; // 0x80809C80
    r12 = *(0x18 + r12); // lwz @ 0x80809C84
    /* mtctr r12 */ // 0x80809C88
    /* bctrl  */ // 0x80809C8C
    r3 = *(0xb8 + r31); // lwz @ 0x80809C90
    *(0 + r3) = r30; // stw @ 0x80809C94
    r0 = *(0xb4 + r31); // lwz @ 0x80809C98
    if (>) goto 0x0x80809cb8;
    r12 = *(0xb0 + r31); // lwz @ 0x80809CA4
    r3 = r31 + 0xb0; // 0x80809CA8
    r12 = *(0x18 + r12); // lwz @ 0x80809CAC
    /* mtctr r12 */ // 0x80809CB0
    /* bctrl  */ // 0x80809CB4
    r3 = *(0xb8 + r31); // lwz @ 0x80809CB8
    r3 = *(0 + r3); // lwz @ 0x80809CBC
    r12 = *(0 + r3); // lwz @ 0x80809CC0
    r12 = *(0x20 + r12); // lwz @ 0x80809CC4
    /* mtctr r12 */ // 0x80809CC8
    /* bctrl  */ // 0x80809CCC
    /* li r3, 0xbc */ // 0x80809CD0
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x80809cfc;
    r4 = *(0xa0 + r31); // lwz @ 0x80809CE4
    /* li r5, 0 */ // 0x80809CE8
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80809CF0
    r3 = r3 + 0; // 0x80809CF4
    *(0 + r30) = r3; // stw @ 0x80809CF8
    r0 = *(0xb4 + r31); // lwz @ 0x80809CFC
    if (>) goto 0x0x80809d1c;
    r12 = *(0xb0 + r31); // lwz @ 0x80809D08
    r3 = r31 + 0xb0; // 0x80809D0C
    r12 = *(0x18 + r12); // lwz @ 0x80809D10
    /* mtctr r12 */ // 0x80809D14
    /* bctrl  */ // 0x80809D18
    r3 = *(0xb8 + r31); // lwz @ 0x80809D1C
    *(4 + r3) = r30; // stw @ 0x80809D20
    r0 = *(0xb4 + r31); // lwz @ 0x80809D24
    if (>) goto 0x0x80809d44;
    r12 = *(0xb0 + r31); // lwz @ 0x80809D30
    r3 = r31 + 0xb0; // 0x80809D34
    r12 = *(0x18 + r12); // lwz @ 0x80809D38
    /* mtctr r12 */ // 0x80809D3C
    /* bctrl  */ // 0x80809D40
    r3 = *(0xb8 + r31); // lwz @ 0x80809D44
    r3 = *(4 + r3); // lwz @ 0x80809D48
    r12 = *(0 + r3); // lwz @ 0x80809D4C
    r12 = *(0x20 + r12); // lwz @ 0x80809D50
    /* mtctr r12 */ // 0x80809D54
    /* bctrl  */ // 0x80809D58
    /* li r3, 0xbc */ // 0x80809D5C
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x80809d88;
    r4 = *(0xa0 + r31); // lwz @ 0x80809D70
}