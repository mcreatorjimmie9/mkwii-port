/* Function at 0x806B73E0, size=560 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 24 function(s) */

int FUN_806B73E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806B73E8
    /* li r5, 0 */ // 0x806B73EC
    *(0xe4 + r1) = r0; // stw @ 0x806B73F0
    *(0xdc + r1) = r31; // stw @ 0x806B73F4
    *(0xd8 + r1) = r30; // stw @ 0x806B73F8
    r30 = r3;
    r12 = *(0x94 + r3); // lwz @ 0x806B7400
    r12 = *(0x10 + r12); // lwz @ 0x806B7404
    /* mtctr r12 */ // 0x806B7408
    r3 = r3 + 0x94; // 0x806B740C
    /* bctrl  */ // 0x806B7410
    r3 = r30;
    r4 = r30 + 0x94; // 0x806B7418
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x94; // 0x806B7420
    r5 = r30 + 0x80; // 0x806B7424
    /* li r4, 1 */ // 0x806B7428
    /* li r6, 0 */ // 0x806B742C
    /* li r7, 0 */ // 0x806B7430
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30 + 0x94; // 0x806B7438
    /* li r4, 2 */ // 0x806B743C
    FUN_8066A380(r6, r7, r3, r4); // bl 0x8066A380
    r3 = r30;
    /* li r4, 5 */ // 0x806B7448
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2b8; // 0x806B7454
    /* li r4, 0 */ // 0x806B7458
    /* li r6, 0 */ // 0x806B745C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2b8; // 0x806B7464
    /* li r4, 1 */ // 0x806B7468
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x2b8; // 0x806B7470
    /* li r4, 0xa2f */ // 0x806B7474
    /* li r5, 0 */ // 0x806B7478
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x42c; // 0x806B7484
    /* li r4, 1 */ // 0x806B7488
    /* li r6, 0 */ // 0x806B748C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x806B7494
    r3 = r30 + 0x42c; // 0x806B7498
    r4 = r4 + 0; // 0x806B749C
    r5 = r4 + 0xf; // 0x806B74A0
    r6 = r4 + 0x27; // 0x806B74A4
    FUN_8066CF50(r4, r3, r4, r5, r6); // bl 0x8066CF50
    /* lis r3, 0 */ // 0x806B74AC
    r3 = *(0 + r3); // lwz @ 0x806B74B4
    /* li r4, 0 */ // 0x806B74BC
    FUN_805A0390(r3, r5, r6, r4); // bl 0x805A0390
    if (!=) goto 0x0x806b74d8;
    /* li r0, 0 */ // 0x806B74CC
    *(0xa + r1) = r0; // sth @ 0x806B74D0
    *(8 + r1) = r0; // sth @ 0x806B74D4
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0xa + r1); // lhz @ 0x806B74E0
    r3 = r30 + 0x42c; // 0x806B74E4
    *(0xc + r1) = r0; // stw @ 0x806B74E8
    /* li r4, 0xa28 */ // 0x806B74F0
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x5a0; // 0x806B74FC
    /* li r4, 2 */ // 0x806B7500
    /* li r6, 0 */ // 0x806B7504
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806B750C
    r3 = r30 + 0x5a0; // 0x806B7510
    r31 = r31 + 0; // 0x806B7514
    /* li r7, 1 */ // 0x806B7518
    r4 = r31 + 0x39; // 0x806B751C
    /* li r8, 0 */ // 0x806B7520
    r5 = r31 + 0x40; // 0x806B7524
    r6 = r31 + 0x53; // 0x806B7528
    /* li r9, 0 */ // 0x806B752C
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    r3 = r30 + 0x5a0; // 0x806B7534
    /* li r4, 0xa29 */ // 0x806B7538
    /* li r5, 0 */ // 0x806B753C
    FUN_806A0A34(r9, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x5a0; // 0x806B7544
    r4 = r30 + 0x44; // 0x806B7548
    /* li r5, 0 */ // 0x806B754C
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7f4; // 0x806B7558
    /* li r4, 3 */ // 0x806B755C
    /* li r6, 0 */ // 0x806B7560
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7f4; // 0x806B7568
    r4 = r31 + 0x5d; // 0x806B756C
    r5 = r31 + 0x64; // 0x806B7570
    r6 = r31 + 0x77; // 0x806B7574
    /* li r7, 1 */ // 0x806B7578
    /* li r8, 0 */ // 0x806B757C
    /* li r9, 0 */ // 0x806B7580
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x7f4; // 0x806B7588
    /* li r4, 0xa2a */ // 0x806B758C
    /* li r5, 0 */ // 0x806B7590
    FUN_806A0A34(r9, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x7f4; // 0x806B7598
    r4 = r30 + 0x58; // 0x806B759C
    /* li r5, 0 */ // 0x806B75A0
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0xa48; // 0x806B75AC
    /* li r4, 4 */ // 0x806B75B0
    /* li r6, 0 */ // 0x806B75B4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0xa48; // 0x806B75BC
    r4 = r31 + 0x81; // 0x806B75C0
    r5 = r31 + 0x88; // 0x806B75C4
    r6 = r31 + 0x8d; // 0x806B75C8
    /* li r7, 1 */ // 0x806B75CC
    /* li r8, 0 */ // 0x806B75D0
    /* li r9, 1 */ // 0x806B75D4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0xa48; // 0x806B75DC
    r4 = r30 + 0x6c; // 0x806B75E0
    /* li r5, 0 */ // 0x806B75E4
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x7f4; // 0x806B75EC
    /* li r4, 0 */ // 0x806B75F0
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0xe4 + r1); // lwz @ 0x806B75F8
    r31 = *(0xdc + r1); // lwz @ 0x806B75FC
    r30 = *(0xd8 + r1); // lwz @ 0x806B7600
    return;
}