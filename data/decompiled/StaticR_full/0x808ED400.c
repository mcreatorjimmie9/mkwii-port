/* Function at 0x808ED400, size=624 bytes */
/* Stack frame: 816 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 27 function(s) */

int FUN_808ED400(int r3, int r4, int r5)
{
    /* Stack frame: -816(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x808ED410
    *(0x32c + r1) = r31; // stw @ 0x808ED414
    *(0x328 + r1) = r30; // stw @ 0x808ED418
    r30 = r4;
    *(0x324 + r1) = r29; // stw @ 0x808ED420
    r29 = r3;
    *(0xbcc + r3) = r0; // stb @ 0x808ED428
    if (==) goto 0x0x808ed5d4;
    if (>=) goto 0x0x808ed45c;
    if (>=) goto 0x0x808ed450;
    if (>=) goto 0x0x808ed4cc;
    if (>=) goto 0x0x808ed474;
    /* b 0x808ed630 */ // 0x808ED44C
    if (>=) goto 0x0x808ed57c;
    /* b 0x808ed524 */ // 0x808ED458
    if (==) goto 0x0x808ed61c;
    if (>=) goto 0x0x808ed630;
    if (>=) goto 0x0x808ed608;
    /* b 0x808ed630 */ // 0x808ED470
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r30 + 0xd53; // 0x808ED47C
    *(0x278 + r1) = r0; // stw @ 0x808ED480
    /* li r3, 2 */ // 0x808ED484
    FUN_808AF7D8(r3, r3); // bl 0x808AF7D8
    *(0x27c + r1) = r3; // stw @ 0x808ED48C
    r3 = r29 + 0x6c4; // 0x808ED490
    /* li r4, 0x1f40 */ // 0x808ED498
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r3, 2 */ // 0x808ED4A0
    FUN_808CFFA8(r3, r5, r4, r3); // bl 0x808CFFA8
    /* lis r4, 0 */ // 0x808ED4A8
    r5 = r3;
    r4 = r4 + 0; // 0x808ED4B0
    r3 = r29 + 0xb4c; // 0x808ED4B4
    r4 = r4 + 0x13f; // 0x808ED4B8
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED4C0
    *(0xbcc + r29) = r0; // stb @ 0x808ED4C4
    /* b 0x808ed654 */ // 0x808ED4C8
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r30 + 0xd4f; // 0x808ED4D4
    *(0x1b4 + r1) = r0; // stw @ 0x808ED4D8
    /* li r3, 3 */ // 0x808ED4DC
    FUN_808AF7D8(r3, r3); // bl 0x808AF7D8
    *(0x1b8 + r1) = r3; // stw @ 0x808ED4E4
    r3 = r29 + 0x6c4; // 0x808ED4E8
    /* li r4, 0x1f40 */ // 0x808ED4F0
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r3, 3 */ // 0x808ED4F8
    FUN_808CFFA8(r3, r5, r4, r3); // bl 0x808CFFA8
    /* lis r4, 0 */ // 0x808ED500
    r5 = r3;
    r4 = r4 + 0; // 0x808ED508
    r3 = r29 + 0xb4c; // 0x808ED50C
    r4 = r4 + 0x14e; // 0x808ED510
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED518
    *(0xbcc + r29) = r0; // stb @ 0x808ED51C
    /* b 0x808ed654 */ // 0x808ED520
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r30 + 0xd4b; // 0x808ED52C
    *(0xf0 + r1) = r0; // stw @ 0x808ED530
    /* li r3, 6 */ // 0x808ED534
    FUN_808AF7D8(r3, r3); // bl 0x808AF7D8
    *(0xf4 + r1) = r3; // stw @ 0x808ED53C
    r3 = r29 + 0x6c4; // 0x808ED540
    /* li r4, 0x1f40 */ // 0x808ED548
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r3, 6 */ // 0x808ED550
    FUN_808CFFA8(r3, r5, r4, r3); // bl 0x808CFFA8
    /* lis r4, 0 */ // 0x808ED558
    r5 = r3;
    r4 = r4 + 0; // 0x808ED560
    r3 = r29 + 0xb4c; // 0x808ED564
    r4 = r4 + 0x15d; // 0x808ED568
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED570
    *(0xbcc + r29) = r0; // stb @ 0x808ED574
    /* b 0x808ed654 */ // 0x808ED578
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r30 + 0xd47; // 0x808ED584
    *(0x2c + r1) = r0; // stw @ 0x808ED588
    /* li r3, 7 */ // 0x808ED58C
    FUN_808AF7D8(r3, r3); // bl 0x808AF7D8
    *(0x30 + r1) = r3; // stw @ 0x808ED594
    r3 = r29 + 0x6c4; // 0x808ED598
    /* li r4, 0x1f40 */ // 0x808ED5A0
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r3, 7 */ // 0x808ED5A8
    FUN_808CFFA8(r3, r5, r4, r3); // bl 0x808CFFA8
    /* lis r4, 0 */ // 0x808ED5B0
    r5 = r3;
    r4 = r4 + 0; // 0x808ED5B8
    r3 = r29 + 0xb4c; // 0x808ED5BC
    r4 = r4 + 0x16c; // 0x808ED5C0
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED5C8
    *(0xbcc + r29) = r0; // stb @ 0x808ED5CC
    /* b 0x808ed654 */ // 0x808ED5D0
    /* li r4, 0x1f41 */ // 0x808ED5D4
    /* li r5, 0 */ // 0x808ED5D8
    r3 = r3 + 0x6c4; // 0x808ED5DC
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    /* lis r5, 0 */ // 0x808ED5E4
    r3 = r29 + 0xb4c; // 0x808ED5E8
    r5 = r5 + 0; // 0x808ED5EC
    r4 = r5 + 0x17b; // 0x808ED5F0
    r5 = r5 + 0x18a; // 0x808ED5F4
    FUN_806A0D70(r5, r3, r5, r4, r5); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED5FC
    *(0xbcc + r29) = r0; // stb @ 0x808ED600
    /* b 0x808ed654 */ // 0x808ED604
    /* li r4, 0x1f4a */ // 0x808ED608
    /* li r5, 0 */ // 0x808ED60C
    r3 = r3 + 0x6c4; // 0x808ED610
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    /* b 0x808ed654 */ // 0x808ED618
    /* li r4, 0x1f4b */ // 0x808ED61C
    /* li r5, 0 */ // 0x808ED620
    r3 = r3 + 0x6c4; // 0x808ED624
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    /* b 0x808ed654 */ // 0x808ED62C
    r3 = r30;
    FUN_808F2CF8(r5, r3, r3); // bl 0x808F2CF8
    r31 = r3;
    r3 = r30;
    FUN_808F2DB4(r3, r3); // bl 0x808F2DB4
    r5 = r3;
    r3 = r29;
    r4 = r31;
    FUN_808ED9F0(r3, r5, r3, r4); // bl 0x808ED9F0
    r0 = *(0x334 + r1); // lwz @ 0x808ED654
    r31 = *(0x32c + r1); // lwz @ 0x808ED658
    r30 = *(0x328 + r1); // lwz @ 0x808ED65C
    r29 = *(0x324 + r1); // lwz @ 0x808ED660
    return;
}