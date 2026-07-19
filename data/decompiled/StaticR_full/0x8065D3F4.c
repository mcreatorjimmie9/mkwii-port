/* Function at 0x8065D3F4, size=484 bytes */
/* Stack frame: 624 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 20 function(s) */

int FUN_8065D3F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -624(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8065D404
    *(0x268 + r1) = r30; // stw @ 0x8065D408
    r30 = r4;
    *(0x264 + r1) = r29; // stw @ 0x8065D410
    r29 = r5;
    r4 = r29;
    *(0x260 + r1) = r28; // stw @ 0x8065D41C
    r28 = r3;
    *(0x1108 + r3) = r5; // stw @ 0x8065D424
    r3 = *(0 + r31); // lwz @ 0x8065D428
    r3 = *(0 + r3); // lwz @ 0x8065D42C
    r3 = *(0x404 + r3); // lwz @ 0x8065D430
    FUN_8065984C(); // bl 0x8065984C
    if (==) goto 0x0x8065d5a4;
    r3 = r30;
    r4 = r29;
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x8065D44C
    r0 = r0 | r3; // 0x8065D450
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8065D454
    if (==) goto 0x0x8065d5a4;
    r4 = r30;
    r5 = r29;
    r3 = r28 + 0x110c; // 0x8065D464
    /* li r6, 1 */ // 0x8065D468
    FUN_8066E6F0(r4, r5, r3, r6); // bl 0x8066E6F0
    r3 = r30;
    r4 = r29;
    FUN_8066E0EC(r3, r6, r3, r4); // bl 0x8066E0EC
    *(0x11a4 + r28) = r3; // stw @ 0x8065D47C
    FUN_80654ECC(r3, r4, r3); // bl 0x80654ECC
    r3 = r28 + 0x110c; // 0x8065D488
    /* li r4, 1 */ // 0x8065D48C
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    /* lis r30, 0 */ // 0x8065D494
    *(0x1d8 + r1) = r3; // stw @ 0x8065D498
    r30 = r30 + 0; // 0x8065D49C
    r3 = r28 + 0xf94; // 0x8065D4A0
    r4 = r30 + 0x34d; // 0x8065D4A4
    /* li r5, 0x251d */ // 0x8065D4AC
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xf94; // 0x8065D4B4
    r4 = r30 + 0x356; // 0x8065D4B8
    /* li r5, 0x251d */ // 0x8065D4C0
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = *(0 + r31); // lwz @ 0x8065D4C8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x8065D4D0
    r3 = *(0x404 + r3); // lwz @ 0x8065D4D4
    FUN_80659814(r4); // bl 0x80659814
    r31 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x1c + r31); // lhz @ 0x8065D4E8
    r3 = r28 + 0xe20; // 0x8065D4EC
    *(0xcc + r1) = r0; // stw @ 0x8065D4F0
    r4 = r30 + 0x35d; // 0x8065D4F4
    /* li r5, 0x13f1 */ // 0x8065D4FC
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xe20; // 0x8065D504
    r4 = r30 + 0x363; // 0x8065D508
    /* li r5, 0x13f1 */ // 0x8065D510
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xe20; // 0x8065D518
    r4 = r30 + 0x36d; // 0x8065D51C
    /* li r5, 0x1460 */ // 0x8065D524
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xe20; // 0x8065D52C
    r4 = r30 + 0x371; // 0x8065D530
    /* li r5, 0x1460 */ // 0x8065D538
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    FUN_80654ECC(r4, r6, r5, r3); // bl 0x80654ECC
    r0 = *(0x1a + r31); // lhz @ 0x8065D548
    r3 = r28 + 0xf94; // 0x8065D54C
    *(8 + r1) = r0; // stw @ 0x8065D550
    r4 = r30 + 0x379; // 0x8065D554
    /* li r5, 0x13f1 */ // 0x8065D55C
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xf94; // 0x8065D564
    r4 = r30 + 0x37f; // 0x8065D568
    /* li r5, 0x13f1 */ // 0x8065D570
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xf94; // 0x8065D578
    r4 = r30 + 0x389; // 0x8065D57C
    /* li r5, 0x1460 */ // 0x8065D584
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r28 + 0xf94; // 0x8065D58C
    r4 = r30 + 0x38d; // 0x8065D590
    /* li r5, 0x1460 */ // 0x8065D598
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* b 0x8065d5b8 */ // 0x8065D5A0
    r3 = r28 + 0x110c; // 0x8065D5A4
    /* li r4, 1 */ // 0x8065D5A8
    FUN_8066E240(r5, r3, r4); // bl 0x8066E240
    /* li r0, 0 */ // 0x8065D5B0
    *(0x11a4 + r28) = r0; // stw @ 0x8065D5B4
    r0 = *(0x274 + r1); // lwz @ 0x8065D5B8
    r31 = *(0x26c + r1); // lwz @ 0x8065D5BC
    r30 = *(0x268 + r1); // lwz @ 0x8065D5C0
    r29 = *(0x264 + r1); // lwz @ 0x8065D5C4
    r28 = *(0x260 + r1); // lwz @ 0x8065D5C8
    return;
}