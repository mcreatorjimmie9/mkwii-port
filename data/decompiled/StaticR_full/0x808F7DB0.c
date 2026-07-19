/* Function at 0x808F7DB0, size=480 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808F7DB0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808F7DC4
    /* li r30, -1 */ // 0x808F7DC8
    *(0x14 + r1) = r29; // stw @ 0x808F7DCC
    r29 = r4;
    *(0x18 + r3) = r30; // stw @ 0x808F7DD4
    r3 = *(0x2440 + r3); // lwz @ 0x808F7DD8
    r12 = *(8 + r3); // lwz @ 0x808F7DDC
    r12 = *(8 + r12); // lwz @ 0x808F7DE0
    /* mtctr r12 */ // 0x808F7DE4
    /* bctrl  */ // 0x808F7DE8
    r0 = *(0x14 + r31); // lwz @ 0x808F7DEC
    if (==) goto 0x0x808f7e04;
    /* li r0, 0 */ // 0x808F7DF8
    *(0x24 + r31) = r0; // stb @ 0x808F7DFC
    /* b 0x808f7f74 */ // 0x808F7E00
    *(0x18 + r31) = r30; // stw @ 0x808F7E08
    if (==) goto 0x0x808f7e3c;
    if (==) goto 0x0x808f7e50;
    if (==) goto 0x0x808f7eb4;
    if (==) goto 0x0x808f7f0c;
    if (==) goto 0x0x808f7f64;
    /* li r0, 0 */ // 0x808F7E30
    *(0x24 + r31) = r0; // stb @ 0x808F7E34
    /* b 0x808f7f74 */ // 0x808F7E38
    /* li r3, 0x393 */ // 0x808F7E3C
    /* li r0, 0 */ // 0x808F7E40
    *(0x18 + r31) = r3; // stw @ 0x808F7E44
    *(0x10 + r31) = r0; // stw @ 0x808F7E48
    /* b 0x808f7f74 */ // 0x808F7E4C
    /* lis r3, 0 */ // 0x808F7E50
    /* li r4, 0xf */ // 0x808F7E54
    r3 = *(0 + r3); // lwz @ 0x808F7E58
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (!=) goto 0x0x808f7ea0;
    r0 = *(0x10 + r31); // lwz @ 0x808F7E68
    if (==) goto 0x0x808f7ea0;
    r0 = *(0x28 + r31); // lwz @ 0x808F7E74
    if (>) goto 0x0x808f7ea0;
    r3 = *(0x1c + r31); // lwz @ 0x808F7E80
    /* li r4, 0x395 */ // 0x808F7E84
    /* li r0, 1 */ // 0x808F7E88
    *(0x18 + r31) = r4; // stw @ 0x808F7E8C
    r3 = r3 + 0x3c; // 0x808F7E90
    *(0x1c + r31) = r3; // stw @ 0x808F7E94
    *(0x10 + r31) = r0; // stw @ 0x808F7E98
    /* b 0x808f7f74 */ // 0x808F7E9C
    /* li r3, 0x394 */ // 0x808F7EA0
    /* li r0, 0 */ // 0x808F7EA4
    *(0x18 + r31) = r3; // stw @ 0x808F7EA8
    *(0x10 + r31) = r0; // stw @ 0x808F7EAC
    /* b 0x808f7f74 */ // 0x808F7EB0
    /* lis r3, 0 */ // 0x808F7EB4
    /* li r4, 5 */ // 0x808F7EB8
    r3 = *(0 + r3); // lwz @ 0x808F7EBC
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (!=) goto 0x0x808f7ef8;
    r0 = *(0x10 + r31); // lwz @ 0x808F7ECC
    if (==) goto 0x0x808f7ef8;
    r0 = *(0x28 + r31); // lwz @ 0x808F7ED8
    if (>) goto 0x0x808f7ef8;
    /* li r3, 0x399 */ // 0x808F7EE4
    /* li r0, 1 */ // 0x808F7EE8
    *(0x18 + r31) = r3; // stw @ 0x808F7EEC
    *(0x10 + r31) = r0; // stw @ 0x808F7EF0
    /* b 0x808f7f74 */ // 0x808F7EF4
    /* li r3, 0x398 */ // 0x808F7EF8
    /* li r0, 0 */ // 0x808F7EFC
    *(0x18 + r31) = r3; // stw @ 0x808F7F00
    *(0x10 + r31) = r0; // stw @ 0x808F7F04
    /* b 0x808f7f74 */ // 0x808F7F08
    /* lis r3, 0 */ // 0x808F7F0C
    /* li r4, 5 */ // 0x808F7F10
    r3 = *(0 + r3); // lwz @ 0x808F7F14
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (!=) goto 0x0x808f7f50;
    r0 = *(0x10 + r31); // lwz @ 0x808F7F24
    if (==) goto 0x0x808f7f50;
    r0 = *(0x28 + r31); // lwz @ 0x808F7F30
    if (>) goto 0x0x808f7f50;
    /* li r3, 0x397 */ // 0x808F7F3C
    /* li r0, 1 */ // 0x808F7F40
    *(0x18 + r31) = r3; // stw @ 0x808F7F44
    *(0x10 + r31) = r0; // stw @ 0x808F7F48
    /* b 0x808f7f74 */ // 0x808F7F4C
    /* li r3, 0x396 */ // 0x808F7F50
    /* li r0, 0 */ // 0x808F7F54
    *(0x18 + r31) = r3; // stw @ 0x808F7F58
    *(0x10 + r31) = r0; // stw @ 0x808F7F5C
    /* b 0x808f7f74 */ // 0x808F7F60
    /* li r3, 0x39a */ // 0x808F7F64
    /* li r0, 0 */ // 0x808F7F68
    *(0x18 + r31) = r3; // stw @ 0x808F7F6C
    *(0x10 + r31) = r0; // stw @ 0x808F7F70
    r0 = *(0x24 + r1); // lwz @ 0x808F7F74
    r31 = *(0x1c + r1); // lwz @ 0x808F7F78
    r30 = *(0x18 + r1); // lwz @ 0x808F7F7C
    r29 = *(0x14 + r1); // lwz @ 0x808F7F80
    return;
}