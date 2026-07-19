/* Function at 0x8083FDBC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8083FDBC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8083FDC4
    *(0xc + r1) = r31; // stw @ 0x8083FDCC
    *(8 + r1) = r30; // stw @ 0x8083FDD0
    r0 = *(0 + r3); // lwz @ 0x8083FDD4
    if (!=) goto 0x0x8083fe34;
    /* li r3, 0x48 */ // 0x8083FDE0
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x8083fe2c;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8083FDF8
    /* li r31, 0 */ // 0x8083FDFC
    r3 = r3 + 0; // 0x8083FE00
    *(0 + r30) = r3; // stw @ 0x8083FE04
}