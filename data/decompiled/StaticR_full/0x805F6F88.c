/* Function at 0x805F6F88, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F6F88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F6F98
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F6FA0
    r30 = r3;
    if (==) goto 0x0x805f6fd0;
    if (==) goto 0x0x805f6fc0;
    if (==) goto 0x0x805f6fc0;
    if (==) goto 0x0x805f6fc0;
    /* li r4, 0 */ // 0x805F6FB8
    FUN_805F40EC(r4); // bl 0x805F40EC
    if (<=) goto 0x0x805f6fd0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F6FD4
    r30 = *(8 + r1); // lwz @ 0x805F6FD8
    r0 = *(0x14 + r1); // lwz @ 0x805F6FDC
    return;
}