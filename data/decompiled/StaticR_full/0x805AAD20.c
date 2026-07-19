/* Function at 0x805AAD20, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_805AAD20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805AAD30
    r30 = r3;
    r0 = *(0x2544 + r3); // lwz @ 0x805AAD38
    if (>=) goto 0x0x805aae0c;
    FUN_805F4D50(); // bl 0x805F4D50
    /* lis r3, 0 */ // 0x805AAD48
    r3 = *(0 + r3); // lwz @ 0x805AAD4C
    FUN_805D0844(r3); // bl 0x805D0844
    r12 = *(0 + r30); // lwz @ 0x805AAD54
    r3 = r30;
    r12 = *(0x34 + r12); // lwz @ 0x805AAD5C
    /* mtctr r12 */ // 0x805AAD60
    /* bctrl  */ // 0x805AAD64
    /* lis r3, 0 */ // 0x805AAD68
    r31 = *(0 + r3); // lwz @ 0x805AAD6C
    if (==) goto 0x0x805aad94;
    r12 = *(0 + r31); // lwz @ 0x805AAD78
    r3 = r31;
    r12 = *(8 + r12); // lwz @ 0x805AAD80
    /* mtctr r12 */ // 0x805AAD84
    /* bctrl  */ // 0x805AAD88
    r3 = r31;
    FUN_807A06B0(r3, r3); // bl 0x807A06B0
    r3 = *(0xc70 + r30); // lwz @ 0x805AAD94
    if (==) goto 0x0x805aadb8;
    r12 = *(0 + r3); // lwz @ 0x805AADA0
    r12 = *(0x1c + r12); // lwz @ 0x805AADA4
    /* mtctr r12 */ // 0x805AADA8
    /* bctrl  */ // 0x805AADAC
    /* li r0, 0 */ // 0x805AADB0
    *(0xc70 + r30) = r0; // stw @ 0x805AADB4
    FUN_8061F518(); // bl 0x8061F518
    /* lis r3, 0 */ // 0x805AADBC
    r3 = *(0 + r3); // lwz @ 0x805AADC0
    FUN_8070B508(r3); // bl 0x8070B508
    /* lis r3, 0 */ // 0x805AADC8
    r3 = *(0 + r3); // lwz @ 0x805AADCC
    FUN_805B3350(r3, r3); // bl 0x805B3350
    /* lis r3, 0 */ // 0x805AADD4
    r3 = *(0 + r3); // lwz @ 0x805AADD8
    FUN_805ADF8C(r3, r3); // bl 0x805ADF8C
    r3 = *(0x252c + r30); // lwz @ 0x805AADE0
    if (==) goto 0x0x805aae0c;
    if (==) goto 0x0x805aae04;
    r12 = *(0x10 + r3); // lwz @ 0x805AADF0
    /* li r4, 1 */ // 0x805AADF4
    r12 = *(8 + r12); // lwz @ 0x805AADF8
    /* mtctr r12 */ // 0x805AADFC
    /* bctrl  */ // 0x805AAE00
    /* li r0, 0 */ // 0x805AAE04
    *(0x252c + r30) = r0; // stw @ 0x805AAE08
    r0 = *(0x14 + r1); // lwz @ 0x805AAE0C
    r31 = *(0xc + r1); // lwz @ 0x805AAE10
    r30 = *(8 + r1); // lwz @ 0x805AAE14
    return;
}