/* Function at 0x806C93A8, size=520 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 22 function(s) */

int FUN_806C93A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806C93B0
    /* li r5, 0 */ // 0x806C93B4
    *(0x14 + r1) = r0; // stw @ 0x806C93B8
    *(0xc + r1) = r31; // stw @ 0x806C93BC
    *(8 + r1) = r30; // stw @ 0x806C93C0
    r30 = r3;
    r12 = *(0x94 + r3); // lwz @ 0x806C93C8
    r12 = *(0x10 + r12); // lwz @ 0x806C93CC
    /* mtctr r12 */ // 0x806C93D0
    r3 = r3 + 0x94; // 0x806C93D4
    /* bctrl  */ // 0x806C93D8
    r3 = r30;
    r4 = r30 + 0x94; // 0x806C93E0
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x94; // 0x806C93E8
    /* li r4, 2 */ // 0x806C93EC
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x94; // 0x806C93F4
    r5 = r30 + 0x6c; // 0x806C93F8
    /* li r4, 1 */ // 0x806C93FC
    /* li r6, 0 */ // 0x806C9400
    /* li r7, 0 */ // 0x806C9404
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 5 */ // 0x806C9410
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2b8; // 0x806C941C
    /* li r4, 0 */ // 0x806C9420
    /* li r6, 0 */ // 0x806C9424
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2b8; // 0x806C942C
    /* li r4, 0 */ // 0x806C9430
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x2b8; // 0x806C9438
    /* li r4, 0x837 */ // 0x806C943C
    /* li r5, 0 */ // 0x806C9440
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x42c; // 0x806C944C
    /* li r4, 1 */ // 0x806C9450
    /* li r6, 0 */ // 0x806C9454
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806C945C
    r3 = r30 + 0x42c; // 0x806C9460
    r31 = r31 + 0; // 0x806C9464
    r4 = r31 + 0x270; // 0x806C9468
    r5 = r31 + 0x27f; // 0x806C946C
    r6 = r31 + 0x291; // 0x806C9470
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x42c; // 0x806C9478
    /* li r4, 0x868 */ // 0x806C947C
    /* li r5, 0 */ // 0x806C9480
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x5a0; // 0x806C948C
    /* li r4, 2 */ // 0x806C9490
    /* li r6, 0 */ // 0x806C9494
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x5a0; // 0x806C949C
    r4 = r31 + 0x2a3; // 0x806C94A0
    r5 = r31 + 0x2b2; // 0x806C94A4
    r6 = r31 + 0x2be; // 0x806C94A8
    /* li r7, 1 */ // 0x806C94AC
    /* li r8, 0 */ // 0x806C94B0
    /* li r9, 0 */ // 0x806C94B4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806C94BC
    *(0x7e0 + r30) = r0; // stw @ 0x806C94C0
    r3 = r30 + 0x5a0; // 0x806C94C4
    r4 = r30 + 0x44; // 0x806C94C8
    /* li r5, 0 */ // 0x806C94CC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x5a0; // 0x806C94D4
    /* li r4, 0x7d2 */ // 0x806C94D8
    /* li r5, 0 */ // 0x806C94DC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x7f4; // 0x806C94E8
    /* li r4, 3 */ // 0x806C94EC
    /* li r6, 0 */ // 0x806C94F0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7f4; // 0x806C94F8
    r4 = r31 + 0x2c6; // 0x806C94FC
    r5 = r31 + 0x2d5; // 0x806C9500
    r6 = r31 + 0x2e1; // 0x806C9504
    /* li r7, 1 */ // 0x806C9508
    /* li r8, 0 */ // 0x806C950C
    /* li r9, 0 */ // 0x806C9510
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806C9518
    *(0xa34 + r30) = r0; // stw @ 0x806C951C
    r3 = r30 + 0x7f4; // 0x806C9520
    r4 = r30 + 0x58; // 0x806C9524
    /* li r5, 0 */ // 0x806C9528
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x7f4; // 0x806C9530
    /* li r4, 0x7d3 */ // 0x806C9534
    /* li r5, 0 */ // 0x806C9538
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0xa48; // 0x806C9544
    /* li r4, 4 */ // 0x806C9548
    /* li r6, 0 */ // 0x806C954C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0xa48; // 0x806C9554
    r4 = r31 + 0x2e9; // 0x806C9558
    r5 = r31 + 0x2f0; // 0x806C955C
    r6 = r31 + 0x2f5; // 0x806C9560
    /* li r7, 1 */ // 0x806C9564
    /* li r8, 0 */ // 0x806C9568
    /* li r9, 1 */ // 0x806C956C
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 4 */ // 0x806C9574
    *(0xc88 + r30) = r0; // stw @ 0x806C9578
    r3 = r30 + 0xa48; // 0x806C957C
    r4 = r30 + 0x58; // 0x806C9580
    /* li r5, 0 */ // 0x806C9584
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x7f4; // 0x806C958C
    /* li r4, 0 */ // 0x806C9590
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806C9598
    r31 = *(0xc + r1); // lwz @ 0x806C959C
    r30 = *(8 + r1); // lwz @ 0x806C95A0
    return;
}