/* Function at 0x806CAD80, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806CAD80(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806CAD88
    *(0x14 + r1) = r29; // stw @ 0x806CAD98
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806CADA0
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806CADA8
    r3 = *(0 + r3); // lwz @ 0x806CADAC
    r30 = *(0x204 + r3); // lwz @ 0x806CADB0
    if (!=) goto 0x0x806cadc4;
    /* li r30, 0 */ // 0x806CADBC
    /* b 0x806cae18 */ // 0x806CADC0
    /* lis r31, 0 */ // 0x806CADC4
    r31 = r31 + 0; // 0x806CADC8
    if (==) goto 0x0x806cae14;
    r12 = *(0 + r30); // lwz @ 0x806CADD0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CADD8
    /* mtctr r12 */ // 0x806CADDC
    /* bctrl  */ // 0x806CADE0
    /* b 0x806cadfc */ // 0x806CADE4
    if (!=) goto 0x0x806cadf8;
    /* li r0, 1 */ // 0x806CADF0
    /* b 0x806cae08 */ // 0x806CADF4
    r3 = *(0 + r3); // lwz @ 0x806CADF8
    if (!=) goto 0x0x806cade8;
    /* li r0, 0 */ // 0x806CAE04
    if (==) goto 0x0x806cae14;
    /* b 0x806cae18 */ // 0x806CAE10
    /* li r30, 0 */ // 0x806CAE14
    r4 = *(0x174 + r28); // lbz @ 0x806CAE18
    r3 = r30;
    r5 = r29;
    FUN_806CCB14(r3, r5); // bl 0x806CCB14
    r0 = *(0x24 + r1); // lwz @ 0x806CAE28
    r31 = *(0x1c + r1); // lwz @ 0x806CAE2C
    r30 = *(0x18 + r1); // lwz @ 0x806CAE30
    r29 = *(0x14 + r1); // lwz @ 0x806CAE34
    r28 = *(0x10 + r1); // lwz @ 0x806CAE38
    return;
}