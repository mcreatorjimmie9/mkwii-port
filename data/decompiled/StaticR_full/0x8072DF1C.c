/* Function at 0x8072DF1C, size=376 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8072DF1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8072DF24
    *(0xc + r1) = r31; // stw @ 0x8072DF2C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8072DF34
    /* li r30, 1 */ // 0x8072DF38
    r0 = *(0x96 + r3); // lbz @ 0x8072DF3C
    /* cntlzw r0, r0 */ // 0x8072DF40
    /* rlwinm. r6, r0, 0x1b, 5, 0x1f */ // 0x8072DF44
    if (==) goto 0x0x8072df5c;
    r0 = *(0x7a + r3); // lbz @ 0x8072DF4C
    if (==) goto 0x0x8072df5c;
    /* li r4, 1 */ // 0x8072DF58
    if (!=) goto 0x0x8072df90;
    /* li r5, 0 */ // 0x8072DF68
    if (==) goto 0x0x8072df84;
    r4 = *(0x64 + r3); // lwz @ 0x8072DF70
    r0 = *(0x60 + r3); // lwz @ 0x8072DF74
    if (<) goto 0x0x8072df84;
    /* li r5, 1 */ // 0x8072DF80
    if (!=) goto 0x0x8072df90;
    /* li r30, 0 */ // 0x8072DF8C
    r0 = *(0x14b + r3); // lbz @ 0x8072DF90
    if (==) goto 0x0x8072dfdc;
    /* li r30, 0 */ // 0x8072DFA0
    if (==) goto 0x0x8072dfb4;
    r0 = *(0x7a + r3); // lbz @ 0x8072DFA8
    if (!=) goto 0x0x8072dfd8;
    if (==) goto 0x0x8072dfdc;
    r4 = *(0x64 + r3); // lwz @ 0x8072DFBC
    r0 = *(0x60 + r3); // lwz @ 0x8072DFC0
    if (<) goto 0x0x8072dfdc;
    r0 = *(0x10c + r3); // lbz @ 0x8072DFCC
    if (==) goto 0x0x8072dfdc;
    /* li r30, 1 */ // 0x8072DFD8
    r3 = *(0x118 + r3); // lwz @ 0x8072DFDC
    FUN_8061E620(); // bl 0x8061E620
    if (==) goto 0x0x8072dff4;
    if (==) goto 0x0x8072e068;
    r30 = *(0x224 + r31); // lwz @ 0x8072DFF4
    if (==) goto 0x0x8072e114;
    r12 = *(0 + r30); // lwz @ 0x8072E000
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8072E008
    /* mtctr r12 */ // 0x8072E00C
    /* bctrl  */ // 0x8072E010
    r12 = *(0 + r30); // lwz @ 0x8072E014
    r3 = r30;
    r4 = r31 + 0x6d0; // 0x8072E01C
    r12 = *(0x74 + r12); // lwz @ 0x8072E020
    /* mtctr r12 */ // 0x8072E024
    /* bctrl  */ // 0x8072E028
    r0 = *(0xb0 + r31); // lbz @ 0x8072E02C
    if (==) goto 0x0x8072e050;
    r12 = *(0 + r30); // lwz @ 0x8072E038
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072E040
    r12 = *(0x70 + r12); // lwz @ 0x8072E044
    /* mtctr r12 */ // 0x8072E048
    /* bctrl  */ // 0x8072E04C
    r12 = *(0 + r30); // lwz @ 0x8072E050
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072E058
    /* mtctr r12 */ // 0x8072E05C
    /* bctrl  */ // 0x8072E060
    /* b 0x8072e114 */ // 0x8072E064
    r30 = *(0x224 + r31); // lwz @ 0x8072E068
    if (==) goto 0x0x8072e114;
    r3 = r30 + 0x74; // 0x8072E074
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072e08c;
    /* li r3, 0 */ // 0x8072E084
    /* b 0x8072e090 */ // 0x8072E088
    r3 = *(0xc + r3); // lwz @ 0x8072E08C
}