/* Function at 0x807B199C, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_807B199C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x807B19A8
    /* stmw r27, 0xc(r1) */ // 0x807B19AC
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x807b1abc;
    /* lis r5, 0 */ // 0x807B19BC
    /* li r4, 1 */ // 0x807B19C0
    r5 = r5 + 0; // 0x807B19C4
    *(0 + r3) = r5; // stw @ 0x807B19C8
    r0 = r5 + 0x14; // 0x807B19CC
    *(0x94 + r3) = r0; // stw @ 0x807B19D0
    r3 = *(0x208 + r3); // lwz @ 0x807B19D4
    FUN_807AE6F0(r5); // bl 0x807AE6F0
    r3 = *(0x210 + r27); // lwz @ 0x807B19DC
    /* li r0, 0 */ // 0x807B19E0
    *(0x208 + r27) = r0; // stw @ 0x807B19E4
    if (==) goto 0x0x807b1a04;
    r12 = *(0 + r3); // lwz @ 0x807B19F0
    /* li r4, 1 */ // 0x807B19F4
    r12 = *(8 + r12); // lwz @ 0x807B19F8
    /* mtctr r12 */ // 0x807B19FC
    /* bctrl  */ // 0x807B1A00
    /* li r31, 0 */ // 0x807B1A04
    *(0x210 + r27) = r31; // stw @ 0x807B1A08
    /* li r30, 0 */ // 0x807B1A0C
    /* li r29, 0 */ // 0x807B1A10
    r3 = r27 + r29; // 0x807B1A14
    r3 = *(0x1f4 + r3); // lwz @ 0x807B1A18
    if (==) goto 0x0x807b1a38;
    r12 = *(0 + r3); // lwz @ 0x807B1A24
    /* li r4, 1 */ // 0x807B1A28
    r12 = *(8 + r12); // lwz @ 0x807B1A2C
    /* mtctr r12 */ // 0x807B1A30
    /* bctrl  */ // 0x807B1A34
    r30 = r30 + 1; // 0x807B1A38
    r3 = r27 + r29; // 0x807B1A3C
    *(0x1f4 + r3) = r31; // stw @ 0x807B1A44
    r29 = r29 + 4; // 0x807B1A48
    if (<) goto 0x0x807b1a14;
    if (==) goto 0x0x807b1aac;
    /* lis r3, 0 */ // 0x807B1A58
    /* li r30, 0 */ // 0x807B1A5C
    r3 = r3 + 0; // 0x807B1A60
    *(0 + r27) = r3; // stw @ 0x807B1A64
    /* li r29, 0 */ // 0x807B1A68
    /* li r31, 0 */ // 0x807B1A6C
    r3 = r27 + r29; // 0x807B1A70
    r3 = *(4 + r3); // lwz @ 0x807B1A74
    if (==) goto 0x0x807b1a94;
    r12 = *(0 + r3); // lwz @ 0x807B1A80
    /* li r4, 1 */ // 0x807B1A84
    r12 = *(8 + r12); // lwz @ 0x807B1A88
    /* mtctr r12 */ // 0x807B1A8C
    /* bctrl  */ // 0x807B1A90
    r30 = r30 + 1; // 0x807B1A94
    r3 = r27 + r29; // 0x807B1A98
    *(4 + r3) = r31; // stw @ 0x807B1AA0
    r29 = r29 + 4; // 0x807B1AA4
    if (<) goto 0x0x807b1a70;
    if (<=) goto 0x0x807b1abc;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x807B1AC4
    return;
}