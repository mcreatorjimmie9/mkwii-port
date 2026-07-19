/* Function at 0x805F6F2C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F6F2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F6F3C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F6F44
    r30 = r3;
    if (==) goto 0x0x805f6f6c;
    if (==) goto 0x0x805f6f5c;
    /* li r4, 0 */ // 0x805F6F54
    FUN_805F40EC(r4); // bl 0x805F40EC
    if (<=) goto 0x0x805f6f6c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F6F70
    r30 = *(8 + r1); // lwz @ 0x805F6F74
    r0 = *(0x14 + r1); // lwz @ 0x805F6F78
    return;
}