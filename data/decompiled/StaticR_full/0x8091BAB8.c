/* Function at 0x8091BAB8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8091BAB8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8091BAC0
    *(0x14 + r1) = r0; // stw @ 0x8091BAC4
    *(0xc + r1) = r31; // stw @ 0x8091BAC8
    r31 = *(0 + r3); // lwz @ 0x8091BACC
    if (==) goto 0x0x8091bb10;
    if (==) goto 0x0x8091bb04;
    r3 = *(0x80c + r31); // lwz @ 0x8091BADC
    if (==) goto 0x0x8091baec;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x808 + r31); // lwz @ 0x8091BAEC
    if (==) goto 0x0x8091bafc;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8091BB04
    /* li r0, 0 */ // 0x8091BB08
    *(0 + r3) = r0; // stw @ 0x8091BB0C
    r0 = *(0x14 + r1); // lwz @ 0x8091BB10
    r31 = *(0xc + r1); // lwz @ 0x8091BB14
    return;
}