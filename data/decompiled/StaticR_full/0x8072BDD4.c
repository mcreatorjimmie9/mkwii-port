/* Function at 0x8072BDD4, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8072BDD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8072BDE4
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x8072BDEC
    if (!=) goto 0x0x8072beec;
    /* lis r4, 0 */ // 0x8072BDF8
    r4 = *(0 + r4); // lwz @ 0x8072BDFC
    r0 = *(0x10 + r4); // lbz @ 0x8072BE00
    if (!=) goto 0x0x8072beec;
    r0 = *(0x129 + r3); // lbz @ 0x8072BE0C
    if (!=) goto 0x0x8072be1c;
    /* b 0x8072beec */ // 0x8072BE18
    r0 = *(0xb9 + r3); // lbz @ 0x8072BE1C
    if (!=) goto 0x0x8072beec;
    r31 = *(0x284 + r3); // lwz @ 0x8072BE28
    if (==) goto 0x0x8072be84;
    r3 = r31 + 0x74; // 0x8072BE34
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072be4c;
    /* li r3, 0 */ // 0x8072BE44
    /* b 0x8072be50 */ // 0x8072BE48
    r3 = *(0xc + r3); // lwz @ 0x8072BE4C
    /* li r0, 0 */ // 0x8072BE54
    if (==) goto 0x0x8072be64;
    if (!=) goto 0x0x8072be68;
    /* li r0, 1 */ // 0x8072BE64
    if (==) goto 0x0x8072be84;
    r12 = *(0 + r31); // lwz @ 0x8072BE70
    r3 = r31;
    r12 = *(0x18 + r12); // lwz @ 0x8072BE78
    /* mtctr r12 */ // 0x8072BE7C
    /* bctrl  */ // 0x8072BE80
    r31 = *(0x284 + r30); // lwz @ 0x8072BE84
    if (==) goto 0x0x8072bec8;
    r12 = *(0 + r31); // lwz @ 0x8072BE90
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8072BE98
    /* mtctr r12 */ // 0x8072BE9C
    /* bctrl  */ // 0x8072BEA0
    r0 = *(0xb0 + r30); // lbz @ 0x8072BEA4
    if (==) goto 0x0x8072bec8;
    r12 = *(0 + r31); // lwz @ 0x8072BEB0
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8072BEB8
}