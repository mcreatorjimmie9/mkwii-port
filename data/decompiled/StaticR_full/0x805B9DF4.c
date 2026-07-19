/* Function at 0x805B9DF4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9DF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x805B9DFC
    *(0x14 + r1) = r0; // stw @ 0x805B9E00
    *(0xc + r1) = r31; // stw @ 0x805B9E04
    r31 = r3;
    FUN_805BA164(r4); // bl 0x805BA164
    /* lis r4, 0 */ // 0x805B9E10
    r3 = r31;
    r4 = r4 + 0; // 0x805B9E18
    *(0 + r31) = r4; // stw @ 0x805B9E1C
    r12 = *(0 + r31); // lwz @ 0x805B9E20
    r12 = *(0xc + r12); // lwz @ 0x805B9E24
    /* mtctr r12 */ // 0x805B9E28
    /* bctrl  */ // 0x805B9E2C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805B9E34
    r0 = *(0x14 + r1); // lwz @ 0x805B9E38
    return;
}