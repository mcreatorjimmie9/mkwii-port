/* Function at 0x808BA53C, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808BA53C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808BA544
    /* li r0, 0 */ // 0x808BA54C
    *(0xc + r1) = r31; // stw @ 0x808BA550
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808BA558
    *(0x23d4 + r3) = r0; // stw @ 0x808BA55C
    r4 = *(0 + r5); // lwz @ 0x808BA560
    r4 = *(0 + r4); // lwz @ 0x808BA564
    r0 = *(0 + r4); // lwz @ 0x808BA568
    if (==) goto 0x0x808ba57c;
    if (!=) goto 0x0x808ba598;
    r4 = *(0x3d8 + r3); // lwz @ 0x808BA57C
    /* li r0, 0 */ // 0x808BA580
    *(0x3dd + r3) = r0; // stb @ 0x808BA584
    r4 = r4 + 1; // 0x808BA588
    *(0x3d8 + r3) = r4; // stw @ 0x808BA58C
    *(0x3dc + r3) = r0; // stb @ 0x808BA590
    /* b 0x808ba5b0 */ // 0x808BA594
    /* li r0, 1 */ // 0x808BA598
    *(0x3dd + r3) = r0; // stb @ 0x808BA59C
    *(0x3dc + r3) = r0; // stb @ 0x808BA5A0
    r3 = *(0 + r5); // lwz @ 0x808BA5A4
    r3 = *(0 + r3); // lwz @ 0x808BA5A8
    FUN_80685E54(); // bl 0x80685E54
    /* lis r3, 0 */ // 0x808BA5B0
    r3 = *(0 + r3); // lwz @ 0x808BA5B4
    r3 = *(0 + r3); // lwz @ 0x808BA5B8
    r0 = *(0 + r3); // lwz @ 0x808BA5BC
    if (==) goto 0x0x808ba5d4;
    if (==) goto 0x0x808ba5f0;
    /* b 0x808ba610 */ // 0x808BA5D0
    /* li r0, 0x6d */ // 0x808BA5D4
    *(0x3ec + r31) = r0; // stw @ 0x808BA5D8
    /* lis r3, 0 */ // 0x808BA5DC
    r3 = *(0 + r3); // lwz @ 0x808BA5E0
    /* li r0, 2 */ // 0x808BA5E4
    *(0x1760 + r3) = r0; // stw @ 0x808BA5E8
    /* b 0x808ba610 */ // 0x808BA5EC
    /* lis r4, 0 */ // 0x808BA5F0
    /* li r3, 0x1a */ // 0x808BA5F4
    r30 = *(0 + r4); // lwz @ 0x808BA5F8
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r30;
    /* li r5, 0 */ // 0x808BA608
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    r3 = r31;
    FUN_808B2D44(r4, r3, r5, r3); // bl 0x808B2D44
    r3 = r31;
    /* li r4, 0 */ // 0x808BA61C
    /* li r5, 6 */ // 0x808BA620
    FUN_806724E0(r3, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x808BA628
    r31 = *(0xc + r1); // lwz @ 0x808BA62C
    r30 = *(8 + r1); // lwz @ 0x808BA630
    return;
}