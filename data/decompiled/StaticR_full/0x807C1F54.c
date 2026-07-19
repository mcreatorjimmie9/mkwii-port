/* Function at 0x807C1F54, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C1F54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C1F64
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C1F6C
    r30 = r3;
    if (==) goto 0x0x807c2038;
    r0 = *(0x14 + r3); // lwz @ 0x807C1F78
    /* lis r4, 0 */ // 0x807C1F7C
    r4 = r4 + 0; // 0x807C1F80
    *(0 + r3) = r4; // stw @ 0x807C1F84
    if (==) goto 0x0x807c1fa8;
    r3 = r0;
    /* li r4, 1 */ // 0x807C1F94
    r12 = *(0 + r3); // lwz @ 0x807C1F98
    r12 = *(8 + r12); // lwz @ 0x807C1F9C
    /* mtctr r12 */ // 0x807C1FA0
    /* bctrl  */ // 0x807C1FA4
    r3 = *(8 + r30); // lwz @ 0x807C1FA8
    /* li r0, 0 */ // 0x807C1FAC
    *(0x14 + r30) = r0; // stw @ 0x807C1FB0
    if (==) goto 0x0x807c1fd0;
    r12 = *(0 + r3); // lwz @ 0x807C1FBC
    /* li r4, 1 */ // 0x807C1FC0
    r12 = *(8 + r12); // lwz @ 0x807C1FC4
    /* mtctr r12 */ // 0x807C1FC8
    /* bctrl  */ // 0x807C1FCC
    r3 = *(0xc + r30); // lwz @ 0x807C1FD0
    /* li r0, 0 */ // 0x807C1FD4
    *(8 + r30) = r0; // stw @ 0x807C1FD8
    if (==) goto 0x0x807c1ff8;
    r12 = *(0 + r3); // lwz @ 0x807C1FE4
    /* li r4, 1 */ // 0x807C1FE8
    r12 = *(8 + r12); // lwz @ 0x807C1FEC
    /* mtctr r12 */ // 0x807C1FF0
    /* bctrl  */ // 0x807C1FF4
    r3 = *(0x10 + r30); // lwz @ 0x807C1FF8
    /* li r0, 0 */ // 0x807C1FFC
    *(0xc + r30) = r0; // stw @ 0x807C2000
    if (==) goto 0x0x807c2020;
    r12 = *(0 + r3); // lwz @ 0x807C200C
    /* li r4, 1 */ // 0x807C2010
    r12 = *(8 + r12); // lwz @ 0x807C2014
    /* mtctr r12 */ // 0x807C2018
    /* bctrl  */ // 0x807C201C
    /* li r0, 0 */ // 0x807C2024
    *(0x10 + r30) = r0; // stw @ 0x807C2028
    if (<=) goto 0x0x807c2038;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807C203C
    r30 = *(8 + r1); // lwz @ 0x807C2040
    r0 = *(0x14 + r1); // lwz @ 0x807C2044
    return;
}