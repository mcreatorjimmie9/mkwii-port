/* Function at 0x805DE9E8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DE9E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805DE9F4
    /* lis r31, 0 */ // 0x805DE9F8
    r0 = *(0 + r31); // lwz @ 0x805DE9FC
    if (==) goto 0x0x805dea1c;
    /* lis r3, 0 */ // 0x805DEA08
    r3 = r3 + 0; // 0x805DEA0C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x805DEA14
    *(0 + r31) = r0; // stw @ 0x805DEA18
    r0 = *(0x14 + r1); // lwz @ 0x805DEA1C
    r31 = *(0xc + r1); // lwz @ 0x805DEA20
}