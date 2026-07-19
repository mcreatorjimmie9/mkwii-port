/* Function at 0x807B02D4, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807B02D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807B02E4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B02EC
    r30 = r3;
    if (==) goto 0x0x807b0380;
    r3 = *(0 + r3); // lwz @ 0x807B02F8
    if (==) goto 0x0x807b0318;
    r12 = *(0 + r3); // lwz @ 0x807B0304
    /* li r4, 1 */ // 0x807B0308
    r12 = *(8 + r12); // lwz @ 0x807B030C
    /* mtctr r12 */ // 0x807B0310
    /* bctrl  */ // 0x807B0314
    r3 = *(4 + r30); // lwz @ 0x807B0318
    /* li r0, 0 */ // 0x807B031C
    *(0 + r30) = r0; // stw @ 0x807B0320
    if (==) goto 0x0x807b0340;
    r12 = *(0 + r3); // lwz @ 0x807B032C
    /* li r4, 1 */ // 0x807B0330
    r12 = *(8 + r12); // lwz @ 0x807B0334
    /* mtctr r12 */ // 0x807B0338
    /* bctrl  */ // 0x807B033C
    r3 = *(8 + r30); // lwz @ 0x807B0340
    /* li r0, 0 */ // 0x807B0344
    *(4 + r30) = r0; // stw @ 0x807B0348
    if (==) goto 0x0x807b0368;
    r12 = *(0 + r3); // lwz @ 0x807B0354
    /* li r4, 1 */ // 0x807B0358
    r12 = *(8 + r12); // lwz @ 0x807B035C
    /* mtctr r12 */ // 0x807B0360
    /* bctrl  */ // 0x807B0364
    /* li r0, 0 */ // 0x807B036C
    *(8 + r30) = r0; // stw @ 0x807B0370
    if (<=) goto 0x0x807b0380;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807B0384
    r30 = *(8 + r1); // lwz @ 0x807B0388
    r0 = *(0x14 + r1); // lwz @ 0x807B038C
    return;
}