/* Function at 0x80683AB4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80683AB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80683AC0
    r31 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x80683AD0
    r3 = r31;
    /* li r4, 4 */ // 0x80683AD8
    /* li r5, 0 */ // 0x80683ADC
    r12 = *(0x1c + r12); // lwz @ 0x80683AE0
    /* mtctr r12 */ // 0x80683AE4
    /* bctrl  */ // 0x80683AE8
    r0 = *(0x14 + r1); // lwz @ 0x80683AEC
    r31 = *(0xc + r1); // lwz @ 0x80683AF0
    return;
}