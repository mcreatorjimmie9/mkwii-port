/* Function at 0x806ACC70, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806ACC70(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x806ACC78
    *(0x14 + r1) = r0; // stw @ 0x806ACC7C
    /* li r0, -1 */ // 0x806ACC80
    *(0xc + r1) = r31; // stw @ 0x806ACC84
    r31 = r4;
    /* li r4, 0x87 */ // 0x806ACC8C
    *(0xf30 + r3) = r0; // stw @ 0x806ACC90
    r12 = *(0 + r3); // lwz @ 0x806ACC94
    r12 = *(0x24 + r12); // lwz @ 0x806ACC98
    /* mtctr r12 */ // 0x806ACC9C
    /* bctrl  */ // 0x806ACCA0
    /* lis r3, 0 */ // 0x806ACCA4
    r3 = *(0 + r3); // lwz @ 0x806ACCA8
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806accc4;
    r3 = r31;
    /* li r4, 0 */ // 0x806ACCBC
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x14 + r1); // lwz @ 0x806ACCC4
    r31 = *(0xc + r1); // lwz @ 0x806ACCC8
    return;
}