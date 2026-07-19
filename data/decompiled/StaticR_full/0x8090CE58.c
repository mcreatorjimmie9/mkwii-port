/* Function at 0x8090CE58, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8090CE58(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8090CE68
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8090CE70
    r30 = r3;
    if (==) goto 0x0x8090cec8;
    /* lis r5, 0 */ // 0x8090CE7C
    /* addic. r0, r3, 0x104 */ // 0x8090CE80
    r4 = *(0 + r5); // lhz @ 0x8090CE84
    r0 = r4 + -1; // 0x8090CE88
    *(0 + r5) = r0; // sth @ 0x8090CE8C
    if (==) goto 0x0x8090ceb8;
    r0 = *(0x104 + r3); // lwz @ 0x8090CE94
    if (==) goto 0x0x8090ceb0;
    /* lis r4, 0 */ // 0x8090CEA0
    r3 = *(0x108 + r3); // lwz @ 0x8090CEA4
    r4 = r4 + 0; // 0x8090CEA8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8090CEB0
    *(0x104 + r30) = r0; // stw @ 0x8090CEB4
    if (<=) goto 0x0x8090cec8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8090CECC
    r30 = *(8 + r1); // lwz @ 0x8090CED0
    r0 = *(0x14 + r1); // lwz @ 0x8090CED4
    return;
}