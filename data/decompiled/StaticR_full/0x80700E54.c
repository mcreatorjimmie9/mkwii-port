/* Function at 0x80700E54, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80700E54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 1 */ // 0x80700E5C
    /* li r31, 0 */ // 0x80700E68
    *(0x18 + r1) = r30; // stw @ 0x80700E6C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80700E74
    r29 = r3;
    *(0 + r4) = r31; // stb @ 0x80700E7C
    r4 = r3 + 0x43c0; // 0x80700E80
    FUN_806F8AC4(r4); // bl 0x806F8AC4
    if (!=) goto 0x0x80700ea0;
    /* li r0, 1 */ // 0x80700E90
    *(0x14 + r29) = r0; // stw @ 0x80700E94
    /* li r3, 1 */ // 0x80700E98
    /* b 0x80700f78 */ // 0x80700E9C
    *(0x43c4 + r29) = r31; // stw @ 0x80700EA0
    /* lis r3, 0 */ // 0x80700EA4
    *(0x43c8 + r29) = r30; // stw @ 0x80700EA8
    r3 = *(0 + r3); // lwz @ 0x80700EAC
    r0 = *(0x84 + r3); // lwz @ 0x80700EB0
    if (==) goto 0x0x80700ef0;
    if (==) goto 0x0x80700ef8;
    if (==) goto 0x0x80700f00;
    if (==) goto 0x0x80700f08;
    if (==) goto 0x0x80700f10;
    if (==) goto 0x0x80700f18;
    if (==) goto 0x0x80700f20;
    /* b 0x80700f28 */ // 0x80700EEC
    /* li r5, 1 */ // 0x80700EF0
    /* b 0x80700f2c */ // 0x80700EF4
    /* li r5, 2 */ // 0x80700EF8
    /* b 0x80700f2c */ // 0x80700EFC
    /* li r5, 3 */ // 0x80700F00
    /* b 0x80700f2c */ // 0x80700F04
    /* li r5, 4 */ // 0x80700F08
    /* b 0x80700f2c */ // 0x80700F0C
    /* li r5, 5 */ // 0x80700F10
    /* b 0x80700f2c */ // 0x80700F14
    /* li r5, 6 */ // 0x80700F18
    /* b 0x80700f2c */ // 0x80700F1C
    /* li r5, 7 */ // 0x80700F20
    /* b 0x80700f2c */ // 0x80700F24
    /* li r5, 1 */ // 0x80700F28
    /* lis r3, 0 */ // 0x80700F2C
    /* lis r31, 0 */ // 0x80700F30
    r4 = *(0 + r3); // lwz @ 0x80700F34
    /* li r6, 1 */ // 0x80700F38
    r3 = *(0 + r31); // lwz @ 0x80700F3C
    r4 = r4 + 0x5c; // 0x80700F40
    FUN_80703D04(r6, r4); // bl 0x80703D04
    r4 = *(0x43c0 + r29); // lwz @ 0x80700F48
    r3 = r29;
    r6 = r29 + 0x42e0; // 0x80700F50
    /* li r5, 0 */ // 0x80700F54
    FUN_80700F94(r3, r6, r5); // bl 0x80700F94
    if (==) goto 0x0x80700f6c;
    /* li r3, 1 */ // 0x80700F64
    /* b 0x80700f78 */ // 0x80700F68
    r3 = *(0 + r31); // lwz @ 0x80700F6C
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r3, 0 */ // 0x80700F74
    r0 = *(0x24 + r1); // lwz @ 0x80700F78
    r31 = *(0x1c + r1); // lwz @ 0x80700F7C
    r30 = *(0x18 + r1); // lwz @ 0x80700F80
    r29 = *(0x14 + r1); // lwz @ 0x80700F84
    return;
}