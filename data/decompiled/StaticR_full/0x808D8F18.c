/* Function at 0x808D8F18, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D8F18(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808D8F28
    r5 = r31 + 0; // 0x808D8F2C
    *(0x18 + r1) = r30; // stw @ 0x808D8F30
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808D8F38
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808D8F44
    r3 = r31 + 0; // 0x808D8F48
    r4 = r4 + 0; // 0x808D8F4C
    *(0 + r29) = r4; // stw @ 0x808D8F50
    /* lis r5, 0 */ // 0x808D8F54
    r4 = r3 + 0xe; // 0x808D8F58
    r3 = *(0 + r5); // lwz @ 0x808D8F5C
    r3 = *(4 + r3); // lwz @ 0x808D8F60
    FUN_808AC704(r5, r4); // bl 0x808AC704
    *(0xb0 + r29) = r3; // sth @ 0x808D8F68
    /* lis r3, 0 */ // 0x808D8F6C
    r3 = *(0 + r3); // lwz @ 0x808D8F70
    r0 = *(0xb6c + r3); // lwz @ 0x808D8F74
    if (==) goto 0x0x808d8f94;
    if (==) goto 0x0x808d8fa4;
    if (==) goto 0x0x808d8fb4;
    /* b 0x808d8fc0 */ // 0x808D8F90
    r3 = *(0 + r30); // lwz @ 0x808D8F94
    r0 = *(0x2a + r3); // lha @ 0x808D8F98
    *(0xb4 + r29) = r0; // stw @ 0x808D8F9C
    /* b 0x808d8fc0 */ // 0x808D8FA0
    r3 = *(0 + r30); // lwz @ 0x808D8FA4
    r0 = *(0x2e + r3); // lha @ 0x808D8FA8
    *(0xb4 + r29) = r0; // stw @ 0x808D8FAC
    /* b 0x808d8fc0 */ // 0x808D8FB0
    r3 = *(0 + r30); // lwz @ 0x808D8FB4
    r0 = *(0x30 + r3); // lha @ 0x808D8FB8
    *(0xb4 + r29) = r0; // stw @ 0x808D8FBC
    r31 = *(0x1c + r1); // lwz @ 0x808D8FC0
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x808D8FC8
    r29 = *(0x14 + r1); // lwz @ 0x808D8FCC
    r0 = *(0x24 + r1); // lwz @ 0x808D8FD0
    return;
}