/* Function at 0x80751158, size=188 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80751158(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* addic. r0, r1, 8 */ // 0x80751164
    *(0x3c + r1) = r31; // stw @ 0x80751168
    r31 = r3;
    if (==) goto 0x0x80751180;
    r3 = *(0 + r4); // lwz @ 0x80751174
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    FUN_80751214(r4); // bl 0x80751214
    if (!=) goto 0x0x80751200;
    r3 = *(0xc + r31); // lwz @ 0x8075118C
    FUN_80751A80(r4); // bl 0x80751A80
    r31 = *(0xc + r31); // lwz @ 0x80751198
    r0 = *(0x100 + r31); // lbz @ 0x8075119C
    if (==) goto 0x0x807511ec;
    r3 = *(0xec + r31); // lwz @ 0x807511A8
    r12 = *(0 + r3); // lwz @ 0x807511AC
    r12 = *(0xc + r12); // lwz @ 0x807511B0
    /* mtctr r12 */ // 0x807511B4
    /* bctrl  */ // 0x807511B8
    r3 = *(0xec + r31); // lwz @ 0x807511BC
    r12 = *(0 + r3); // lwz @ 0x807511C4
    r12 = *(0x78 + r12); // lwz @ 0x807511C8
    /* mtctr r12 */ // 0x807511CC
    /* bctrl  */ // 0x807511D0
    r3 = *(0xec + r31); // lwz @ 0x807511D4
    r12 = *(0 + r3); // lwz @ 0x807511D8
    r12 = *(0x80 + r12); // lwz @ 0x807511DC
    /* mtctr r12 */ // 0x807511E0
    /* bctrl  */ // 0x807511E4
    /* b 0x80751200 */ // 0x807511E8
    r3 = *(0xec + r31); // lwz @ 0x807511EC
    r12 = *(0 + r3); // lwz @ 0x807511F0
    r12 = *(0x10 + r12); // lwz @ 0x807511F4
    /* mtctr r12 */ // 0x807511F8
    /* bctrl  */ // 0x807511FC
    r0 = *(0x44 + r1); // lwz @ 0x80751200
    r31 = *(0x3c + r1); // lwz @ 0x80751204
    return;
}