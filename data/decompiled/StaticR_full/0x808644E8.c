/* Function at 0x808644E8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808644E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x808644F0
    *(0x14 + r1) = r0; // stw @ 0x808644F4
    *(0xc + r1) = r31; // stw @ 0x808644F8
    r0 = *(0 + r3); // lwz @ 0x808644FC
    if (!=) goto 0x0x808645fc;
    /* li r3, 0x540 */ // 0x80864508
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808645f4;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80864520
    r4 = r31 + 0x10; // 0x80864524
    r3 = r3 + 0; // 0x80864528
}