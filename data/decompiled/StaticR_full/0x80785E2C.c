/* Function at 0x80785E2C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80785E2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80785E3C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80785E44
    r30 = r3;
    if (==) goto 0x0x80785e7c;
    /* addic. r0, r3, 0xb0 */ // 0x80785E50
    if (==) goto 0x0x80785e6c;
    /* lis r4, 0 */ // 0x80785E58
    r4 = r4 + 0; // 0x80785E5C
    *(0xb0 + r3) = r4; // stw @ 0x80785E60
    r3 = *(0xc4 + r3); // lwz @ 0x80785E64
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80785e7c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80785E80
    r30 = *(8 + r1); // lwz @ 0x80785E84
    r0 = *(0x14 + r1); // lwz @ 0x80785E88
    return;
}