/* Function at 0x807330BC, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807330BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 8 */ // 0x807330CC
    *(0x18 + r1) = r30; // stw @ 0x807330D0
    *(0x14 + r1) = r29; // stw @ 0x807330D4
    r29 = r3;
    r4 = *(0x614 + r3); // lwz @ 0x807330DC
    r30 = r4 + 0x20; // 0x807330E0
    r3 = *(0 + r30); // lwz @ 0x807330E4
    if (==) goto 0x0x80733140;
    r3 = r3 + 0x74; // 0x807330F0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733108;
    /* li r3, 0 */ // 0x80733100
    /* b 0x8073310c */ // 0x80733104
    r3 = *(0xc + r3); // lwz @ 0x80733108
    /* li r0, 0 */ // 0x80733110
    if (==) goto 0x0x80733120;
    if (!=) goto 0x0x80733124;
    /* li r0, 1 */ // 0x80733120
    if (==) goto 0x0x80733140;
    r3 = *(0 + r30); // lwz @ 0x8073312C
    r12 = *(0 + r3); // lwz @ 0x80733130
    r12 = *(0x18 + r12); // lwz @ 0x80733134
    /* mtctr r12 */ // 0x80733138
    /* bctrl  */ // 0x8073313C
    r31 = r31 + 1; // 0x80733140
    r30 = r30 + 4; // 0x80733144
    if (<) goto 0x0x807330e4;
    r3 = *(0x614 + r29); // lwz @ 0x80733150
}