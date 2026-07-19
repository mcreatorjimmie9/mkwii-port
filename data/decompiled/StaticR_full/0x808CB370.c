/* Function at 0x808CB370, size=368 bytes */
/* Stack frame: 608 bytes */
/* Saved registers: r14 */
/* Calls: 4 function(s) */

int FUN_808CB370(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -608(r1) */
    /* saved r14 */
    /* li r4, 1 */ // 0x808CB378
    /* li r5, 0 */ // 0x808CB37C
    *(0x264 + r1) = r0; // stw @ 0x808CB380
    /* stmw r14, 0x218(r1) */ // 0x808CB384
    /* lis r31, 0 */ // 0x808CB388
    r28 = r3;
    /* li r29, 0 */ // 0x808CB390
    r31 = r31 + 0; // 0x808CB394
    r12 = *(0x11c + r3); // lwz @ 0x808CB398
    r12 = *(0x10 + r12); // lwz @ 0x808CB39C
    /* mtctr r12 */ // 0x808CB3A0
    r3 = r3 + 0x11c; // 0x808CB3A4
    /* bctrl  */ // 0x808CB3A8
    r12 = *(0 + r28); // lwz @ 0x808CB3AC
    r3 = r28;
    r12 = *(0x74 + r12); // lwz @ 0x808CB3B4
    /* mtctr r12 */ // 0x808CB3B8
    /* bctrl  */ // 0x808CB3BC
    if (==) goto 0x0x808cb3e0;
    r3 = r28 + 0x11c; // 0x808CB3C8
    r5 = r28 + 0x108; // 0x808CB3CC
    /* li r4, 2 */ // 0x808CB3D0
    /* li r6, 0 */ // 0x808CB3D4
    /* li r7, 0 */ // 0x808CB3D8
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r28;
    r4 = r28 + 0x11c; // 0x808CB3E4
    FUN_80671C34(r6, r7, r3, r4); // bl 0x80671C34
    r12 = *(0 + r28); // lwz @ 0x808CB3EC
    r3 = r28;
    r12 = *(0x6c + r12); // lwz @ 0x808CB3F4
    /* mtctr r12 */ // 0x808CB3F8
    /* bctrl  */ // 0x808CB3FC
    *(0x54 + r28) = r3; // stw @ 0x808CB400
    r3 = r28;
    /* li r14, 0 */ // 0x808CB408
    r12 = *(0 + r28); // lwz @ 0x808CB40C
    r12 = *(0x74 + r12); // lwz @ 0x808CB410
    /* mtctr r12 */ // 0x808CB414
    /* bctrl  */ // 0x808CB418
    if (==) goto 0x0x808cb488;
    /* lis r3, 0 */ // 0x808CB424
    /* li r0, 1 */ // 0x808CB428
    r3 = *(0 + r3); // lwz @ 0x808CB42C
    /* li r4, 1 */ // 0x808CB430
    /* li r5, 1 */ // 0x808CB434
    r3 = *(0 + r3); // lwz @ 0x808CB438
    r3 = *(0 + r3); // lwz @ 0x808CB43C
    if (==) goto 0x0x808cb454;
    if (==) goto 0x0x808cb454;
    /* li r5, 0 */ // 0x808CB450
    if (!=) goto 0x0x808cb468;
    if (==) goto 0x0x808cb468;
    /* li r4, 0 */ // 0x808CB464
    if (!=) goto 0x0x808cb47c;
    if (==) goto 0x0x808cb47c;
    /* li r0, 0 */ // 0x808CB478
    if (==) goto 0x0x808cb488;
    /* li r14, 1 */ // 0x808CB484
    r12 = *(0 + r28); // lwz @ 0x808CB488
    r3 = r28;
    r12 = *(0x68 + r12); // lwz @ 0x808CB490
    /* mtctr r12 */ // 0x808CB494
    /* bctrl  */ // 0x808CB498
    r4 = *(4 + r28); // lwz @ 0x808CB49C
    /* neg r0, r3 */ // 0x808CB4A0
    r5 = r0 | r3; // 0x808CB4A4
    r0 = *(0x54 + r28); // lwz @ 0x808CB4A8
    r4 = r4 + -0x27; // 0x808CB4AC
    r3 = r28;
    /* cntlzw r4, r4 */ // 0x808CB4B4
    /* srwi r6, r5, 0x1f */ // 0x808CB4B8
    /* srwi r5, r4, 5 */ // 0x808CB4BC
    r4 = r6 + r14; // 0x808CB4C0
    r0 = r5 + r0; // 0x808CB4C4
    r4 = r4 + r0; // 0x808CB4C8
    FUN_80671C1C(); // bl 0x80671C1C
    r14 = *(0x54 + r28); // lwz @ 0x808CB4D0
    /* mulli r3, r14, 0x254 */ // 0x808CB4D4
    r3 = r3 + 0x10; // 0x808CB4D8
    FUN_805E3430(r3); // bl 0x805E3430
}