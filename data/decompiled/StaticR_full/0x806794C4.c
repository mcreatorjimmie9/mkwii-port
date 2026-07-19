/* Function at 0x806794C4, size=396 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_806794C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x806794D0
    r28 = r3;
    r0 = *(0x1cf0 + r3); // lwz @ 0x806794D8
    if (!=) goto 0x0x8067963c;
    /* lis r4, 0 */ // 0x806794E4
    r5 = *(0x18c + r3); // lwz @ 0x806794E8
    r4 = *(0 + r4); // lwz @ 0x806794EC
    r0 = *(0x291c + r4); // lwz @ 0x806794F0
    /* mulli r0, r0, 0x58 */ // 0x806794F4
    r4 = r4 + r0; // 0x806794F8
    r0 = *(0x44 + r4); // lwz @ 0x806794FC
    if (<=) goto 0x0x8067950c;
    r5 = r0;
    *(0x1c10 + r3) = r5; // stw @ 0x8067950C
    /* lis r3, 0 */ // 0x80679510
    r3 = *(0 + r3); // lwz @ 0x80679514
    FUN_806F4C44(r5, r3); // bl 0x806F4C44
    if (==) goto 0x0x8067963c;
    /* lis r3, 0 */ // 0x80679524
    r3 = *(0 + r3); // lwz @ 0x80679528
    r0 = *(0x291c + r3); // lwz @ 0x8067952C
    /* mulli r0, r0, 0x58 */ // 0x80679530
    r3 = r3 + r0; // 0x80679534
    r0 = *(0x8b + r3); // lbz @ 0x80679538
    if (==) goto 0x0x80679550;
    /* li r0, 1 */ // 0x80679544
    *(0x1cf0 + r28) = r0; // stw @ 0x80679548
    /* b 0x8067956c */ // 0x8067954C
    /* lis r3, 0 */ // 0x80679550
    r3 = *(0 + r3); // lwz @ 0x80679554
    FUN_806EF8F8(r3); // bl 0x806EF8F8
    if (==) goto 0x0x8067956c;
    /* li r0, 2 */ // 0x80679564
    *(0x1cf0 + r28) = r0; // stw @ 0x80679568
    r0 = *(0x1cf0 + r28); // lwz @ 0x8067956C
    if (==) goto 0x0x8067963c;
    r30 = *(0x18c + r28); // lwz @ 0x80679578
    /* li r29, 0 */ // 0x8067957C
    /* lis r26, 0 */ // 0x80679580
    /* lis r24, 0 */ // 0x80679584
    /* mulli r0, r30, 0x1b8 */ // 0x80679588
    r31 = r28 + r0; // 0x8067958C
    r4 = *(0 + r24); // lwz @ 0x80679590
    /* clrlwi r0, r29, 0x18 */ // 0x80679594
    r3 = *(0x291c + r4); // lwz @ 0x80679598
    /* mulli r3, r3, 0x58 */ // 0x8067959C
    r3 = r4 + r3; // 0x806795A0
    r4 = *(0x59 + r3); // lbz @ 0x806795A4
    if (==) goto 0x0x80679630;
    if (!=) goto 0x0x806795bc;
    r25 = *(0x58 + r3); // lbz @ 0x806795B4
    /* b 0x806795c8 */ // 0x806795B8
    r0 = r29 rlwinm 2; // rlwinm
    r3 = r0 + r3; // 0x806795C0
    r25 = *(0x5b + r3); // lbz @ 0x806795C4
    /* clrlwi r0, r29, 0x18 */ // 0x806795C8
    r27 = r28 + 0x1c20; // 0x806795CC
    /* mulli r23, r0, 0xc0 */ // 0x806795D0
    /* li r22, 0 */ // 0x806795D4
    /* b 0x80679624 */ // 0x806795D8
    r4 = r30;
    r3 = r28 + 0x1c20; // 0x806795E0
    /* clrlwi r5, r29, 0x18 */ // 0x806795E4
    /* clrlwi r6, r22, 0x18 */ // 0x806795E8
    FUN_8066E074(r4, r3); // bl 0x8066E074
    r0 = *(0 + r26); // lwz @ 0x806795F0
    r22 = r22 + 1; // 0x806795F4
    r4 = r23 + r0; // 0x806795F8
    r0 = *(0x17c + r4); // lhz @ 0x806795FC
    r3 = *(0x17e + r4); // lhz @ 0x80679600
    r4 = *(0x178 + r4); // lwz @ 0x80679604
    *(0x4ac + r31) = r27; // stw @ 0x80679608
    *(0x4b0 + r31) = r30; // stw @ 0x8067960C
    r30 = r30 + 1; // 0x80679610
    *(0x4b4 + r31) = r0; // sth @ 0x80679614
    *(0x4b6 + r31) = r3; // sth @ 0x80679618
    *(0x4b8 + r31) = r4; // stw @ 0x8067961C
    r31 = r31 + 0x1b8; // 0x80679620
    /* clrlwi r0, r22, 0x18 */ // 0x80679624
    if (<) goto 0x0x806795dc;
    r29 = r29 + 1; // 0x80679630
    if (<) goto 0x0x80679590;
    r0 = *(0x34 + r1); // lwz @ 0x80679640
    return;
}