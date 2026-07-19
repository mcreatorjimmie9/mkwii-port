/* Function at 0x805B1F90, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B1F90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x805B1F9C
    *(0x1c + r1) = r31; // stw @ 0x805B1FA0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805B1FA8
    r30 = r3;
    *(0 + r3) = r0; // stw @ 0x805B1FB0
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x805B1FB8
    r12 = *(0x10 + r12); // lwz @ 0x805B1FBC
    /* mtctr r12 */ // 0x805B1FC0
    /* bctrl  */ // 0x805B1FC4
    if (<=) goto 0x0x805b1fdc;
    if (==) goto 0x0x805b205c;
    /* b 0x805b20a8 */ // 0x805B1FD8
    r12 = *(0 + r31); // lwz @ 0x805B1FDC
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x805B1FE4
    /* mtctr r12 */ // 0x805B1FE8
    /* bctrl  */ // 0x805B1FEC
    if (<) goto 0x0x805b20a8;
    r12 = *(0 + r31); // lwz @ 0x805B1FF8
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B2000
    /* mtctr r12 */ // 0x805B2004
    /* bctrl  */ // 0x805B2008
    *(0 + r30) = r3; // stw @ 0x805B200C
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x805B2014
    r12 = *(0x34 + r12); // lwz @ 0x805B2018
    /* mtctr r12 */ // 0x805B201C
    /* bctrl  */ // 0x805B2020
    /* clrlwi r31, r3, 0x18 */ // 0x805B2024
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x805b20a8;
    r3 = r30 + 4; // 0x805B203C
    /* li r4, 0 */ // 0x805B2040
    /* li r5, 6 */ // 0x805B2044
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r31;
    r4 = r30 + 4; // 0x805B2050
    FUN_805E3430(r4, r5, r3, r4); // bl 0x805E3430
    /* b 0x805b20a8 */ // 0x805B2058
    r12 = *(0 + r31); // lwz @ 0x805B205C
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x805B2064
    /* mtctr r12 */ // 0x805B2068
    /* bctrl  */ // 0x805B206C
    if (<) goto 0x0x805b20a8;
    r12 = *(0 + r31); // lwz @ 0x805B2078
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B2080
    /* mtctr r12 */ // 0x805B2084
    /* bctrl  */ // 0x805B2088
    *(0 + r30) = r3; // stw @ 0x805B208C
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x805B2094
}