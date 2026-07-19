/* Function at 0x8089BA90, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BA90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BA9C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089BAA4
    r12 = *(0x58 + r12); // lwz @ 0x8089BAA8
    /* mtctr r12 */ // 0x8089BAAC
    /* bctrl  */ // 0x8089BAB0
    r12 = *(0 + r31); // lwz @ 0x8089BAB4
    r3 = r31;
    r12 = *(0x44 + r12); // lwz @ 0x8089BABC
    /* mtctr r12 */ // 0x8089BAC0
    /* bctrl  */ // 0x8089BAC4
    r12 = *(0 + r31); // lwz @ 0x8089BAC8
    r3 = r31;
    r12 = *(0x5c + r12); // lwz @ 0x8089BAD0
    /* mtctr r12 */ // 0x8089BAD4
    /* bctrl  */ // 0x8089BAD8
    r12 = *(0 + r31); // lwz @ 0x8089BADC
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x8089BAE4
    /* mtctr r12 */ // 0x8089BAE8
    /* bctrl  */ // 0x8089BAEC
    r12 = *(0 + r31); // lwz @ 0x8089BAF0
    r3 = r31;
    r12 = *(0xb8 + r12); // lwz @ 0x8089BAF8
    /* mtctr r12 */ // 0x8089BAFC
    /* bctrl  */ // 0x8089BB00
    r12 = *(0 + r31); // lwz @ 0x8089BB04
    r3 = r31;
    r12 = *(0xa0 + r12); // lwz @ 0x8089BB0C
    /* mtctr r12 */ // 0x8089BB10
    /* bctrl  */ // 0x8089BB14
    r12 = *(0 + r31); // lwz @ 0x8089BB18
    r3 = r31;
    r12 = *(0xbc + r12); // lwz @ 0x8089BB20
    /* mtctr r12 */ // 0x8089BB24
    /* bctrl  */ // 0x8089BB28
    /* lis r3, 0 */ // 0x8089BB2C
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x8089BB34
    FUN_8089C9BC(r3, r4); // bl 0x8089C9BC
    r0 = *(0x14 + r1); // lwz @ 0x8089BB3C
    r31 = *(0xc + r1); // lwz @ 0x8089BB40
    return;
}