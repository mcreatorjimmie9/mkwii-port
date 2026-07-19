/* Function at 0x806313B4, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806313B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806313C4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806313CC
    r30 = r3;
    if (==) goto 0x0x80631430;
    /* lis r5, 0 */ // 0x806313D8
    /* lis r4, 0 */ // 0x806313DC
    r5 = r5 + 0; // 0x806313E0
    *(0 + r3) = r5; // stw @ 0x806313E4
    r3 = *(0 + r4); // lwz @ 0x806313E8
    if (==) goto 0x0x80631414;
    /* li r0, 0 */ // 0x806313F4
    *(0 + r4) = r0; // stw @ 0x806313F8
    if (==) goto 0x0x80631414;
    r12 = *(0 + r3); // lwz @ 0x80631400
    /* li r4, 1 */ // 0x80631404
    r12 = *(8 + r12); // lwz @ 0x80631408
    /* mtctr r12 */ // 0x8063140C
    /* bctrl  */ // 0x80631410
    r3 = r30;
    /* li r4, 0 */ // 0x80631418
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80631430;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80631434
    r30 = *(8 + r1); // lwz @ 0x80631438
}