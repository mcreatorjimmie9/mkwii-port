/* Function at 0x80631D44, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80631D44(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80631D58
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80631D60
    r29 = r3;
    if (==) goto 0x0x80631ddc;
    /* lis r4, 0 */ // 0x80631D6C
    r4 = r4 + 0; // 0x80631D70
    *(0 + r3) = r4; // stw @ 0x80631D74
    FUN_80647F98(r4, r4); // bl 0x80647F98
    /* addic. r31, r29, 4 */ // 0x80631D7C
    if (==) goto 0x0x80631dcc;
    /* lis r3, 0 */ // 0x80631D84
    /* lis r4, 0 */ // 0x80631D88
    r3 = r3 + 0; // 0x80631D8C
    *(0 + r31) = r3; // stw @ 0x80631D90
    r3 = *(0 + r4); // lwz @ 0x80631D94
    if (==) goto 0x0x80631dc0;
    /* li r0, 0 */ // 0x80631DA0
    *(0 + r4) = r0; // stw @ 0x80631DA4
    if (==) goto 0x0x80631dc0;
    r12 = *(0 + r3); // lwz @ 0x80631DAC
    /* li r4, 1 */ // 0x80631DB0
    r12 = *(8 + r12); // lwz @ 0x80631DB4
    /* mtctr r12 */ // 0x80631DB8
    /* bctrl  */ // 0x80631DBC
    r3 = r31;
    /* li r4, 0 */ // 0x80631DC4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80631ddc;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80631DDC
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80631DE4
    r29 = *(0x14 + r1); // lwz @ 0x80631DE8
    r0 = *(0x24 + r1); // lwz @ 0x80631DEC
    return;
}