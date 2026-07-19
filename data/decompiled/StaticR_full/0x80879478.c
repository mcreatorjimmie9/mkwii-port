/* Function at 0x80879478, size=296 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_80879478(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x20 + r1) = r28; // stw @ 0x80879490
    r28 = r3;
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r31, 0 */ // 0x8087949C
    r0 = r3 rlwinm 2; // rlwinm
    r5 = *(0 + r31); // lwz @ 0x808794A4
    r3 = r28 + 0x98; // 0x808794A8
    /* li r4, 0 */ // 0x808794AC
    r5 = *(0xc + r5); // lwz @ 0x808794B0
    /* lwzx r5, r5, r0 */ // 0x808794B4
    r0 = *(0x26 + r5); // lbz @ 0x808794B8
    *(0x198 + r28) = r0; // stb @ 0x808794BC
    FUN_8069F4A0(r4); // bl 0x8069F4A0
    r4 = *(0 + r31); // lwz @ 0x808794C4
    /* lis r30, 0x4330 */ // 0x808794C8
    /* lis r29, 0 */ // 0x808794CC
    *(8 + r1) = r30; // stw @ 0x808794D0
    r5 = *(0xc + r4); // lwz @ 0x808794D4
    /* li r4, 0 */ // 0x808794D8
    /* lfd f1, 0(r29) */ // 0x808794DC
    r5 = *(0 + r5); // lwz @ 0x808794E0
    r0 = *(0x26 + r5); // lbz @ 0x808794E4
    *(0xc + r1) = r0; // stw @ 0x808794E8
    /* lfd f0, 8(r1) */ // 0x808794EC
    /* fsubs f1, f0, f1 */ // 0x808794F0
    FUN_8069F7A0(); // bl 0x8069F7A0
    r3 = *(0 + r31); // lwz @ 0x808794F8
    FUN_805C2BFC(); // bl 0x805C2BFC
    r31 = r3;
    r3 = r28 + 0x98; // 0x80879504
    /* li r4, 1 */ // 0x80879508
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* clrlwi r0, r31, 0x18 */ // 0x80879510
    *(0x14 + r1) = r0; // stw @ 0x80879514
    /* lfd f1, 0(r29) */ // 0x80879518
    /* li r4, 0 */ // 0x8087951C
    *(0x10 + r1) = r30; // stw @ 0x80879520
    /* lfd f0, 0x10(r1) */ // 0x80879524
    /* fsubs f1, f0, f1 */ // 0x80879528
    FUN_8069F7A0(r4); // bl 0x8069F7A0
    /* lis r31, 0 */ // 0x80879530
    r3 = r28;
    r31 = r31 + 0; // 0x80879538
    /* li r5, 1 */ // 0x8087953C
    r4 = r31 + 0xc; // 0x80879540
    FUN_80876714(r3, r5, r4); // bl 0x80876714
    r3 = r28;
    r4 = r31 + 0x16; // 0x8087954C
    /* li r5, 1 */ // 0x80879550
    FUN_80876714(r4, r3, r4, r5); // bl 0x80876714
    r3 = r28;
    r4 = r31 + 0x1c; // 0x8087955C
    /* li r5, 1 */ // 0x80879560
    FUN_80876714(r5, r3, r4, r5); // bl 0x80876714
    r3 = r28;
    r4 = r31 + 0x27; // 0x8087956C
    /* li r5, 1 */ // 0x80879570
    FUN_80876714(r5, r3, r4, r5); // bl 0x80876714
    r3 = r28;
    FUN_806A0740(r3, r4, r5, r3); // bl 0x806A0740
    r0 = *(0x34 + r1); // lwz @ 0x80879580
    r31 = *(0x2c + r1); // lwz @ 0x80879584
    r30 = *(0x28 + r1); // lwz @ 0x80879588
    r29 = *(0x24 + r1); // lwz @ 0x8087958C
    r28 = *(0x20 + r1); // lwz @ 0x80879590
    return;
}