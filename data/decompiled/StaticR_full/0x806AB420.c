/* Function at 0x806AB420, size=392 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 14 function(s) */

int FUN_806AB420(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806AB428
    *(0xe4 + r1) = r0; // stw @ 0x806AB42C
    /* li r0, 0 */ // 0x806AB430
    *(0xdc + r1) = r31; // stw @ 0x806AB434
    r31 = r3;
    *(0x384 + r3) = r0; // stb @ 0x806AB43C
    r4 = *(0 + r4); // lwz @ 0x806AB440
    r5 = *(0 + r4); // lwz @ 0x806AB444
    r0 = *(0 + r5); // lwz @ 0x806AB448
    if (!=) goto 0x0x806ab470;
    r3 = r5;
    FUN_80686240(r3); // bl 0x80686240
    r3 = r31 + 0x190; // 0x806AB45C
    /* li r4, 0xfb2 */ // 0x806AB460
    /* li r5, 0 */ // 0x806AB464
    FUN_806A0A34(r3, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806ab594 */ // 0x806AB46C
    if (==) goto 0x0x806ab480;
    if (!=) goto 0x0x806ab4ac;
    r5 = *(0x98 + r4); // lwz @ 0x806AB480
    /* lis r4, 0 */ // 0x806AB484
    r0 = *(0x500 + r5); // lwz @ 0x806AB488
    *(0x188 + r3) = r0; // stw @ 0x806AB48C
    r0 = *(0x504 + r5); // lwz @ 0x806AB490
    *(0x18c + r3) = r0; // stw @ 0x806AB494
    r3 = *(0 + r4); // lwz @ 0x806AB498
    r3 = *(0x98 + r3); // lwz @ 0x806AB49C
    r3 = r3 + 0x500; // 0x806AB4A0
    FUN_80662210(r3); // bl 0x80662210
    /* b 0x806ab4c8 */ // 0x806AB4A8
    /* lis r3, 0 */ // 0x806AB4AC
    r3 = *(0 + r3); // lwz @ 0x806AB4B0
    FUN_806E65CC(r3, r3); // bl 0x806E65CC
    *(0xc + r1) = r4; // stw @ 0x806AB4B8
    *(8 + r1) = r3; // stw @ 0x806AB4BC
    *(0x188 + r31) = r3; // stw @ 0x806AB4C0
    *(0x18c + r31) = r4; // stw @ 0x806AB4C4
    r0 = *(0x188 + r31); // lwz @ 0x806AB4C8
    if (==) goto 0x0x806ab4f0;
    if (==) goto 0x0x806ab528;
    if (==) goto 0x0x806ab54c;
    if (==) goto 0x0x806ab570;
    /* b 0x806ab594 */ // 0x806AB4EC
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = *(0x18c + r31); // lwz @ 0x806AB4F8
    *(0x10 + r1) = r3; // stw @ 0x806AB4FC
    FUN_806AB634(r3); // bl 0x806AB634
    r4 = r3;
    r3 = r31 + 0x190; // 0x806AB508
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    /* lis r3, 0 */ // 0x806AB514
    r3 = *(0 + r3); // lwz @ 0x806AB518
    r3 = *(0 + r3); // lwz @ 0x806AB51C
    FUN_80686240(r5, r3); // bl 0x80686240
    /* b 0x806ab594 */ // 0x806AB524
    r3 = r31 + 0x190; // 0x806AB528
    /* li r4, 0xfb0 */ // 0x806AB52C
    /* li r5, 0 */ // 0x806AB530
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* lis r3, 0 */ // 0x806AB538
    r3 = *(0 + r3); // lwz @ 0x806AB53C
    r3 = *(0 + r3); // lwz @ 0x806AB540
    FUN_80686240(r5, r3); // bl 0x80686240
    /* b 0x806ab594 */ // 0x806AB548
    r3 = r31 + 0x190; // 0x806AB54C
    /* li r4, 0x818 */ // 0x806AB550
    /* li r5, 0 */ // 0x806AB554
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* lis r3, 0 */ // 0x806AB55C
    r3 = *(0 + r3); // lwz @ 0x806AB560
    r3 = *(0 + r3); // lwz @ 0x806AB564
    FUN_80686240(r5, r3); // bl 0x80686240
    /* b 0x806ab594 */ // 0x806AB56C
    r3 = r31 + 0x190; // 0x806AB570
    /* li r4, 0x804 */ // 0x806AB574
    /* li r5, 0 */ // 0x806AB578
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 1 */ // 0x806AB580
    *(0x384 + r31) = r0; // stb @ 0x806AB584
    r3 = r31 + 0x44; // 0x806AB588
    /* li r4, 0 */ // 0x806AB58C
    FUN_8066821C(r3, r4); // bl 0x8066821C
    r0 = *(0xe4 + r1); // lwz @ 0x806AB594
    r31 = *(0xdc + r1); // lwz @ 0x806AB598
    return;
}