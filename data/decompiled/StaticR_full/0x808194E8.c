/* Function at 0x808194E8, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808194E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808194F8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80819500
    r30 = r3;
    if (==) goto 0x0x80819560;
    FUN_80847EC4(); // bl 0x80847EC4
    r3 = *(0 + r30); // lwz @ 0x80819510
    if (==) goto 0x0x80819530;
    r12 = *(0 + r3); // lwz @ 0x8081951C
    /* li r4, 1 */ // 0x80819520
    r12 = *(8 + r12); // lwz @ 0x80819524
    /* mtctr r12 */ // 0x80819528
    /* bctrl  */ // 0x8081952C
    r3 = *(4 + r30); // lwz @ 0x80819530
    if (==) goto 0x0x80819550;
    r12 = *(0 + r3); // lwz @ 0x8081953C
    /* li r4, 1 */ // 0x80819540
    r12 = *(8 + r12); // lwz @ 0x80819544
    /* mtctr r12 */ // 0x80819548
    /* bctrl  */ // 0x8081954C
    if (<=) goto 0x0x80819560;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80819564
    r30 = *(8 + r1); // lwz @ 0x80819568
    r0 = *(0x14 + r1); // lwz @ 0x8081956C
    return;
}