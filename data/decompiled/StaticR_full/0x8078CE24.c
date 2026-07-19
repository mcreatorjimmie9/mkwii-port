/* Function at 0x8078CE24, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 9 function(s) */

int FUN_8078CE24(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x8078CE2C
    *(0x14 + r1) = r29; // stw @ 0x8078CE3C
    *(0x10 + r1) = r28; // stw @ 0x8078CE40
    r29 = *(0 + r4); // lwz @ 0x8078CE44
    if (==) goto 0x0x8078cf20;
    /* li r0, 0 */ // 0x8078CE50
    *(0 + r4) = r0; // stw @ 0x8078CE54
    if (==) goto 0x0x8078cf20;
    /* addic. r31, r29, 0xf0 */ // 0x8078CE5C
    if (==) goto 0x0x8078cef0;
    /* lis r3, 0 */ // 0x8078CE64
    r3 = r3 + 0; // 0x8078CE68
    *(0 + r31) = r3; // stw @ 0x8078CE6C
    r28 = *(0 + r4); // lwz @ 0x8078CE70
    if (==) goto 0x0x8078cee4;
    *(0 + r4) = r0; // stw @ 0x8078CE7C
    if (==) goto 0x0x8078cee4;
    /* addic. r30, r28, 0xf0 */ // 0x8078CE84
    if (==) goto 0x0x8078ceb4;
    *(0 + r30) = r3; // stw @ 0x8078CE8C
    r3 = *(0 + r4); // lwz @ 0x8078CE90
    if (==) goto 0x0x8078cea8;
    *(0 + r4) = r0; // stw @ 0x8078CE9C
    /* li r4, 1 */ // 0x8078CEA0
    FUN_8078D050(r4); // bl 0x8078D050
    r3 = r30;
    /* li r4, 0 */ // 0x8078CEAC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078cedc;
    /* lis r4, 0 */ // 0x8078CEBC
    r3 = r28;
    r4 = r4 + 0; // 0x8078CEC4
    *(0 + r28) = r4; // stw @ 0x8078CEC8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r28 + 4; // 0x8078CED0
    /* li r4, -1 */ // 0x8078CED4
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8078CEE8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078cf18;
    /* lis r4, 0 */ // 0x8078CEF8
    r3 = r29;
    r4 = r4 + 0; // 0x8078CF00
    *(0 + r29) = r4; // stw @ 0x8078CF04
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r29 + 4; // 0x8078CF0C
    /* li r4, -1 */ // 0x8078CF10
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8078CF20
    r31 = *(0x1c + r1); // lwz @ 0x8078CF24
}