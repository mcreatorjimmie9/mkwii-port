/* Function at 0x808BE38C, size=384 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_808BE38C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x808BE398
    /* lis r30, 0 */ // 0x808BE39C
    /* lis r31, 0 */ // 0x808BE3A0
    r27 = r3;
    r28 = r4;
    r30 = r30 + 0; // 0x808BE3AC
    r31 = r31 + 0; // 0x808BE3B0
    /* li r29, 0 */ // 0x808BE3B4
    /* b 0x808be4d8 */ // 0x808BE3B8
    /* li r25, 0 */ // 0x808BE3BC
    /* b 0x808be4c8 */ // 0x808BE3C0
    r4 = *(0x6ec + r27); // lwz @ 0x808BE3C4
    r3 = r27 + 0x24; // 0x808BE3C8
    r0 = r4 + -2; // 0x808BE3CC
    /* cntlzw r0, r0 */ // 0x808BE3D0
    /* srwi r4, r0, 5 */ // 0x808BE3D4
    r4 = r4 + 1; // 0x808BE3D8
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r25;
    r3 = r3 + 0x68; // 0x808BE3E4
    FUN_8064E1CC(r4, r4, r3); // bl 0x8064E1CC
    r4 = r29;
    r3 = r3 + 0x68; // 0x808BE3F0
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r26 = r3;
    if (!=) goto 0x0x808be40c;
    /* li r26, 0 */ // 0x808BE404
    /* b 0x808be454 */ // 0x808BE408
    if (==) goto 0x0x808be450;
    r12 = *(0 + r3); // lwz @ 0x808BE410
    r12 = *(0x28 + r12); // lwz @ 0x808BE414
    /* mtctr r12 */ // 0x808BE418
    /* bctrl  */ // 0x808BE41C
    /* b 0x808be438 */ // 0x808BE420
    if (!=) goto 0x0x808be434;
    /* li r0, 1 */ // 0x808BE42C
    /* b 0x808be444 */ // 0x808BE430
    r3 = *(0 + r3); // lwz @ 0x808BE434
    if (!=) goto 0x0x808be424;
    /* li r0, 0 */ // 0x808BE440
    if (==) goto 0x0x808be450;
    /* b 0x808be454 */ // 0x808BE44C
    /* li r26, 0 */ // 0x808BE450
    if (!=) goto 0x0x808be464;
    /* li r26, 0 */ // 0x808BE45C
    /* b 0x808be4b0 */ // 0x808BE460
    if (==) goto 0x0x808be4ac;
    r12 = *(0 + r26); // lwz @ 0x808BE468
    r3 = r26;
    r12 = *(0x28 + r12); // lwz @ 0x808BE470
    /* mtctr r12 */ // 0x808BE474
    /* bctrl  */ // 0x808BE478
    /* b 0x808be494 */ // 0x808BE47C
    if (!=) goto 0x0x808be490;
    /* li r0, 1 */ // 0x808BE488
    /* b 0x808be4a0 */ // 0x808BE48C
    r3 = *(0 + r3); // lwz @ 0x808BE490
    if (!=) goto 0x0x808be480;
    /* li r0, 0 */ // 0x808BE49C
    if (==) goto 0x0x808be4ac;
    /* b 0x808be4b0 */ // 0x808BE4A8
    /* li r26, 0 */ // 0x808BE4AC
    r0 = *(0x240 + r26); // lwz @ 0x808BE4B0
    if (!=) goto 0x0x808be4c4;
    r3 = r26;
    /* b 0x808be4f8 */ // 0x808BE4C0
    r25 = r25 + 1; // 0x808BE4C4
    r0 = *(0xa08 + r27); // lwz @ 0x808BE4C8
    if (<) goto 0x0x808be3c4;
    r29 = r29 + 1; // 0x808BE4D4
    r0 = *(0x6ec + r27); // lwz @ 0x808BE4D8
    /* xoris r3, r0, 0x8000 */ // 0x808BE4DC
    /* subf r0, r0, r29 */ // 0x808BE4E0
    /* addc r0, r0, r3 */ // 0x808BE4E4
    /* subfe r0, r0, r0 */ // 0x808BE4E8
    /* addic. r0, r0, 2 */ // 0x808BE4EC
    if (!=) goto 0x0x808be3bc;
    /* li r3, 0 */ // 0x808BE4F4
    r0 = *(0x34 + r1); // lwz @ 0x808BE4FC
    return;
}