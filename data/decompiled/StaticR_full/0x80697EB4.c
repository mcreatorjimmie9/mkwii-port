/* Function at 0x80697EB4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80697EB4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80697EBC
    *(0x14 + r1) = r0; // stw @ 0x80697EC0
    *(0xc + r1) = r31; // stw @ 0x80697EC4
    r31 = *(0 + r3); // lwz @ 0x80697EC8
    if (==) goto 0x0x80697f0c;
    r3 = *(0x98 + r31); // lwz @ 0x80697ED4
    /* li r4, 1 */ // 0x80697ED8
    FUN_806612BC(r4); // bl 0x806612BC
    r3 = *(0x90 + r31); // lwz @ 0x80697EE0
    /* li r4, 1 */ // 0x80697EE4
    FUN_80683CA0(r4, r4); // bl 0x80683CA0
    r3 = *(0x94 + r31); // lwz @ 0x80697EEC
    /* li r4, 1 */ // 0x80697EF0
    FUN_806E0758(r4, r4); // bl 0x806E0758
    r3 = r31 + 0x34; // 0x80697EF8
    /* li r4, -1 */ // 0x80697EFC
    FUN_8067EEE0(r4, r3, r4); // bl 0x8067EEE0
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80697F0C
    /* li r0, 0 */ // 0x80697F10
    *(0 + r3) = r0; // stw @ 0x80697F14
    r31 = *(0xc + r1); // lwz @ 0x80697F18
    r0 = *(0x14 + r1); // lwz @ 0x80697F1C
    return;
}