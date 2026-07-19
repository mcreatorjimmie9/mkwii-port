/* Function at 0x8083FE54, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8083FE54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8083FE5C
    *(0xc + r1) = r31; // stw @ 0x8083FE64
    *(8 + r1) = r30; // stw @ 0x8083FE68
    r31 = *(0 + r4); // lwz @ 0x8083FE6C
    if (==) goto 0x0x8083fef0;
    /* li r0, 0 */ // 0x8083FE78
    *(0 + r4) = r0; // stw @ 0x8083FE7C
    if (==) goto 0x0x8083fef0;
    if (==) goto 0x0x8083fee8;
    /* lis r3, 0 */ // 0x8083FE88
    r3 = r3 + 0; // 0x8083FE8C
    *(0 + r31) = r3; // stw @ 0x8083FE90
    r30 = *(0 + r4); // lwz @ 0x8083FE94
    if (==) goto 0x0x8083fedc;
    *(0 + r4) = r0; // stw @ 0x8083FEA0
    if (==) goto 0x0x8083fedc;
    if (==) goto 0x0x8083fed4;
    *(0 + r30) = r3; // stw @ 0x8083FEAC
    r3 = *(0 + r4); // lwz @ 0x8083FEB0
    if (==) goto 0x0x8083fec8;
    *(0 + r4) = r0; // stw @ 0x8083FEBC
    /* li r4, 1 */ // 0x8083FEC0
    FUN_8083FF74(r4); // bl 0x8083FF74
    r3 = r30;
    /* li r4, 0 */ // 0x8083FECC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8083FEE0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x8083FEF0
    r31 = *(0xc + r1); // lwz @ 0x8083FEF4
    r30 = *(8 + r1); // lwz @ 0x8083FEF8
    return;
}