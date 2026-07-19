/* Function at 0x808D5444, size=404 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_808D5444(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x808D5458
    r30 = r3;
    r4 = r30;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    if (!=) goto 0x0x808d5498;
    /* lis r6, 0 */ // 0x808D5474
    r6 = r6 + 0; // 0x808D547C
    /* li r7, 0 */ // 0x808D5480
    r4 = r6 + 0x81; // 0x808D5484
    r5 = r6 + 0x84; // 0x808D5488
    r6 = r6 + 0x9b; // 0x808D548C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D5494
    /* lis r3, 0 */ // 0x808D5498
    r3 = *(0 + r3); // lwz @ 0x808D549C
    r3 = *(0 + r3); // lwz @ 0x808D54A0
    r0 = *(0 + r3); // lwz @ 0x808D54A4
    if (==) goto 0x0x808d54cc;
    if (==) goto 0x0x808d54f0;
    if (==) goto 0x0x808d5514;
    if (==) goto 0x0x808d5538;
    /* b 0x808d555c */ // 0x808D54C8
    /* lis r6, 0 */ // 0x808D54CC
    r6 = r6 + 0; // 0x808D54D4
    /* li r7, 0 */ // 0x808D54D8
    r4 = r6 + 0xb2; // 0x808D54DC
    r5 = r6 + 0xba; // 0x808D54E0
    r6 = r6 + 0xd2; // 0x808D54E4
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D54EC
    /* lis r6, 0 */ // 0x808D54F0
    r6 = r6 + 0; // 0x808D54F8
    /* li r7, 0 */ // 0x808D54FC
    r4 = r6 + 0xed; // 0x808D5500
    r5 = r6 + 0xf5; // 0x808D5504
    r6 = r6 + 0x10d; // 0x808D5508
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D5510
    /* lis r6, 0 */ // 0x808D5514
    r6 = r6 + 0; // 0x808D551C
    /* li r7, 0 */ // 0x808D5520
    r4 = r6 + 0x128; // 0x808D5524
    r5 = r6 + 0x130; // 0x808D5528
    r6 = r6 + 0x145; // 0x808D552C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D5534
    /* lis r6, 0 */ // 0x808D5538
    r6 = r6 + 0; // 0x808D5540
    /* li r7, 0 */ // 0x808D5544
    r4 = r6 + 0x160; // 0x808D5548
    r5 = r6 + 0x168; // 0x808D554C
    r6 = r6 + 0x181; // 0x808D5550
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D5558
    r3 = *(0x64 + r30); // lwz @ 0x808D555C
    r3 = *(0xc + r3); // lwz @ 0x808D5560
    r0 = *(4 + r3); // lwz @ 0x808D5564
    if (!=) goto 0x0x808d5594;
    /* lis r6, 0 */ // 0x808D5570
    r6 = r6 + 0; // 0x808D5578
    /* li r7, 0 */ // 0x808D557C
    r4 = r6 + 0x19c; // 0x808D5580
    r5 = r6 + 0x19f; // 0x808D5584
    r6 = r6 + 0x1b0; // 0x808D5588
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d55b4 */ // 0x808D5590
    /* lis r6, 0 */ // 0x808D5594
    r6 = r6 + 0; // 0x808D559C
    /* li r7, 0 */ // 0x808D55A0
    r4 = r6 + 0x1cb; // 0x808D55A4
    r5 = r6 + 0x1ce; // 0x808D55A8
    r6 = r6 + 0x1df; // 0x808D55AC
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808D55B8
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x808D55C0
    r31 = *(0x3c + r1); // lwz @ 0x808D55C4
    r30 = *(0x38 + r1); // lwz @ 0x808D55C8
    return;
}