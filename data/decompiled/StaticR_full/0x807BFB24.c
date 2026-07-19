/* Function at 0x807BFB24, size=384 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BFB24(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807BFB34
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BFB3C
    r30 = r3;
    if (==) goto 0x0x807bfc88;
    r0 = *(0x94 + r3); // lwz @ 0x807BFB48
    /* lis r4, 0 */ // 0x807BFB4C
    r4 = r4 + 0; // 0x807BFB50
    *(0x10 + r3) = r4; // stw @ 0x807BFB54
    if (==) goto 0x0x807bfb84;
    if (==) goto 0x0x807bfb7c;
    r3 = r0;
    /* li r4, 1 */ // 0x807BFB68
    r12 = *(0x34 + r3); // lwz @ 0x807BFB6C
    r12 = *(8 + r12); // lwz @ 0x807BFB70
    /* mtctr r12 */ // 0x807BFB74
    /* bctrl  */ // 0x807BFB78
    /* li r0, 0 */ // 0x807BFB7C
    *(0x94 + r30) = r0; // stw @ 0x807BFB80
    r3 = *(0x8c + r30); // lwz @ 0x807BFB84
    if (==) goto 0x0x807bfbb0;
    if (==) goto 0x0x807bfba8;
    r12 = *(0 + r3); // lwz @ 0x807BFB94
    /* li r4, 1 */ // 0x807BFB98
    r12 = *(8 + r12); // lwz @ 0x807BFB9C
    /* mtctr r12 */ // 0x807BFBA0
    /* bctrl  */ // 0x807BFBA4
    /* li r0, 0 */ // 0x807BFBA8
    *(0x8c + r30) = r0; // stw @ 0x807BFBAC
    r3 = *(0x84 + r30); // lwz @ 0x807BFBB0
    if (==) goto 0x0x807bfbdc;
    if (==) goto 0x0x807bfbd4;
    r12 = *(0x34 + r3); // lwz @ 0x807BFBC0
    /* li r4, 1 */ // 0x807BFBC4
    r12 = *(8 + r12); // lwz @ 0x807BFBC8
    /* mtctr r12 */ // 0x807BFBCC
    /* bctrl  */ // 0x807BFBD0
    /* li r0, 0 */ // 0x807BFBD4
    *(0x84 + r30) = r0; // stw @ 0x807BFBD8
    r3 = *(0x88 + r30); // lwz @ 0x807BFBDC
    if (==) goto 0x0x807bfbfc;
    r12 = *(0 + r3); // lwz @ 0x807BFBE8
    /* li r4, 1 */ // 0x807BFBEC
    r12 = *(8 + r12); // lwz @ 0x807BFBF0
    /* mtctr r12 */ // 0x807BFBF4
    /* bctrl  */ // 0x807BFBF8
    r3 = *(0x90 + r30); // lwz @ 0x807BFBFC
    /* li r0, 0 */ // 0x807BFC00
    *(0x88 + r30) = r0; // stw @ 0x807BFC04
    if (==) goto 0x0x807bfc24;
    r12 = *(0 + r3); // lwz @ 0x807BFC10
    /* li r4, 1 */ // 0x807BFC14
    r12 = *(8 + r12); // lwz @ 0x807BFC18
    /* mtctr r12 */ // 0x807BFC1C
    /* bctrl  */ // 0x807BFC20
    /* li r0, 0 */ // 0x807BFC28
    *(0x90 + r30) = r0; // stw @ 0x807BFC2C
    if (==) goto 0x0x807bfc78;
    /* lis r3, 0 */ // 0x807BFC34
    /* lis r4, 0 */ // 0x807BFC38
    r3 = r3 + 0; // 0x807BFC3C
    *(0 + r30) = r3; // stw @ 0x807BFC40
    r3 = *(0 + r4); // lwz @ 0x807BFC44
    if (==) goto 0x0x807bfc6c;
    *(0 + r4) = r0; // stw @ 0x807BFC50
    if (==) goto 0x0x807bfc6c;
    r12 = *(0x10 + r3); // lwz @ 0x807BFC58
    /* li r4, 1 */ // 0x807BFC5C
    r12 = *(8 + r12); // lwz @ 0x807BFC60
    /* mtctr r12 */ // 0x807BFC64
    /* bctrl  */ // 0x807BFC68
    r3 = r30;
    /* li r4, 0 */ // 0x807BFC70
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807bfc88;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807BFC8C
    r30 = *(8 + r1); // lwz @ 0x807BFC90
    r0 = *(0x14 + r1); // lwz @ 0x807BFC94
    return;
}