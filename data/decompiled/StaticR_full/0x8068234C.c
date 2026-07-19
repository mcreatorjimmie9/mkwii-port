/* Function at 0x8068234C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8068234C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80682358
    r31 = r3;
    r3 = r3 + 0x1c34; // 0x80682360
    FUN_80654024(r3); // bl 0x80654024
    r3 = r31 + 0x298; // 0x80682368
    /* li r4, 0 */ // 0x8068236C
    FUN_80649EEC(r3, r3, r4); // bl 0x80649EEC
    r3 = r31 + 0x210c; // 0x80682374
    /* li r4, 0x1126 */ // 0x80682378
    /* li r5, 0 */ // 0x8068237C
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    r3 = r31 + 0x19e0; // 0x80682384
    /* li r4, 0 */ // 0x80682388
    FUN_80649FD0(r4, r5, r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x80682390
    r31 = *(0xc + r1); // lwz @ 0x80682394
    return;
}