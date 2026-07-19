/* Function at 0x8064C960, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8064C960(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064C96C
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x8064C974
    if (==) goto 0x0x8064c994;
    if (==) goto 0x0x8064c9f0;
    if (==) goto 0x0x8064ca18;
    /* b 0x8064ca34 */ // 0x8064C990
    r0 = *(0xc98 + r3); // lbz @ 0x8064C994
    if (==) goto 0x0x8064c9c8;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x8064C9A8
    r3 = r31;
    /* li r4, 0x7f */ // 0x8064C9B0
    /* li r5, 0 */ // 0x8064C9B4
    r12 = *(0x1c + r12); // lwz @ 0x8064C9B8
    /* mtctr r12 */ // 0x8064C9BC
    /* bctrl  */ // 0x8064C9C0
    /* b 0x8064ca34 */ // 0x8064C9C4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x8064C9D0
    r3 = r31;
    /* li r4, 0x80 */ // 0x8064C9D8
    /* li r5, 0 */ // 0x8064C9DC
    r12 = *(0x1c + r12); // lwz @ 0x8064C9E0
    /* mtctr r12 */ // 0x8064C9E4
    /* bctrl  */ // 0x8064C9E8
    /* b 0x8064ca34 */ // 0x8064C9EC
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x8064C9F8
    r3 = r31;
    /* li r4, 0x82 */ // 0x8064CA00
    /* li r5, 0 */ // 0x8064CA04
    r12 = *(0x1c + r12); // lwz @ 0x8064CA08
    /* mtctr r12 */ // 0x8064CA0C
    /* bctrl  */ // 0x8064CA10
    /* b 0x8064ca34 */ // 0x8064CA14
    /* li r0, 0xa2 */ // 0x8064CA18
    *(0xc9c + r3) = r0; // stw @ 0x8064CA1C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x8064CA2C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x8064CA34
    r31 = *(0xc + r1); // lwz @ 0x8064CA38
    return;
}