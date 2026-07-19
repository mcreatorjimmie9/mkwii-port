/* Function at 0x806703D4, size=556 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_806703D4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806703E0
    r31 = r3;
    r0 = *(0xfc + r3); // lbz @ 0x806703E8
    if (!=) goto 0x0x806705ec;
    FUN_805B9878(); // bl 0x805B9878
    r4 = *(0xf4 + r31); // lwz @ 0x806703F8
    if (<) goto 0x0x806704b0;
    r0 = *(0xac + r31); // lwz @ 0x80670404
    if (==) goto 0x0x8067041c;
    if (==) goto 0x0x80670444;
    /* b 0x8067049c */ // 0x80670418
    r3 = *(0xf0 + r31); // lwz @ 0x8067041C
    if (==) goto 0x0x80670438;
    r12 = *(0 + r3); // lwz @ 0x80670428
    r12 = *(8 + r12); // lwz @ 0x8067042C
    /* mtctr r12 */ // 0x80670430
    /* bctrl  */ // 0x80670434
    r3 = r31;
    FUN_805B9B18(r3); // bl 0x805B9B18
    /* b 0x8067049c */ // 0x80670440
    r0 = *(0xec + r31); // lbz @ 0x80670444
    r3 = r4 + 1; // 0x80670448
    *(0xf4 + r31) = r3; // stw @ 0x8067044C
    if (!=) goto 0x0x8067046c;
    r0 = *(0xe8 + r31); // lwz @ 0x80670458
    if (<) goto 0x0x8067046c;
    /* li r0, 0 */ // 0x80670464
    *(0xf4 + r31) = r0; // stw @ 0x80670468
    r3 = r31;
    FUN_805B9C50(r3); // bl 0x805B9C50
    r3 = *(0xf4 + r31); // lwz @ 0x80670474
    r0 = *(0xe8 + r31); // lwz @ 0x80670478
    if (>=) goto 0x0x8067049c;
    /* slwi r0, r3, 2 */ // 0x80670484
    r3 = r31;
    r4 = r31 + r0; // 0x8067048C
    /* li r5, 0 */ // 0x80670490
    r4 = *(0xc8 + r4); // lwz @ 0x80670494
    FUN_805B9A2C(r3, r5); // bl 0x805B9A2C
    r3 = r31;
    r4 = r31 + 0xb4; // 0x806704A0
    FUN_805B9C78(r5, r3, r4); // bl 0x805B9C78
    *(0xc4 + r31) = r3; // stb @ 0x806704A8
    /* b 0x80670528 */ // 0x806704AC
    r3 = *(0xe8 + r31); // lwz @ 0x806704B0
    /* li r0, 0 */ // 0x806704B4
    *(0xc4 + r31) = r0; // stb @ 0x806704B8
    if (<=) goto 0x0x80670528;
    r0 = *(0xac + r31); // lwz @ 0x806704C4
    if (!=) goto 0x0x8067050c;
    if (!=) goto 0x0x806704f4;
    r0 = *(0xec + r31); // lbz @ 0x806704D8
    if (==) goto 0x0x806704ec;
    /* li r5, 0 */ // 0x806704E4
    /* b 0x806704f8 */ // 0x806704E8
    /* li r5, 1 */ // 0x806704EC
    /* b 0x806704f8 */ // 0x806704F0
    /* li r5, 0 */ // 0x806704F4
    /* li r0, 0 */ // 0x806704F8
    *(0xf4 + r31) = r0; // stw @ 0x806704FC
    r3 = r31;
    r4 = *(0xc8 + r31); // lwz @ 0x80670504
    FUN_805B9A2C(r5, r3); // bl 0x805B9A2C
    r0 = *(0xf4 + r31); // lwz @ 0x8067050C
    if (<) goto 0x0x80670528;
    r3 = r31;
    r4 = r31 + 0xb4; // 0x8067051C
    FUN_805B9C78(r3, r4); // bl 0x805B9C78
    *(0xc4 + r31) = r3; // stb @ 0x80670524
    r0 = *(0xc4 + r31); // lbz @ 0x80670528
    if (==) goto 0x0x806705e4;
    r5 = *(0xc2 + r31); // lhz @ 0x80670534
    /* li r6, 5 */ // 0x80670538
    /* li r3, 0 */ // 0x8067053C
    /* li r4, 0 */ // 0x80670540
    r0 = r5 + -8; // 0x80670544
    /* li r5, 0 */ // 0x80670548
    /* clrlwi r8, r0, 0x10 */ // 0x8067054C
    /* slwi r7, r0, 0x1e */ // 0x80670550
    r0 = r0 rlwinm 0x1e; // rlwinm
    /* srwi r8, r8, 0x1f */ // 0x80670558
    /* subf r7, r8, r7 */ // 0x8067055C
    /* rotlwi r7, r7, 2 */ // 0x80670560
    r7 = r7 + r8; // 0x80670564
    /* slwi r12, r7, 3 */ // 0x80670568
    /* mtctr r6 */ // 0x8067056C
    r6 = r5 rlwinm 4; // rlwinm
    r7 = *(0xc0 + r31); // lhz @ 0x80670574
    r6 = r6 + 8; // 0x80670578
    /* clrlwi r8, r6, 0x10 */ // 0x8067057C
    if (>=) goto 0x0x806705dc;
    r7 = r7 rlwinm 0x1d; // rlwinm
    /* slwi r6, r8, 0x1d */ // 0x8067058C
    r10 = r7 * r0; // 0x80670590
    /* srwi r9, r8, 0x1f */ // 0x80670594
    r11 = *(0xb4 + r31); // lwz @ 0x80670598
    r8 = r8 rlwinm 2; // rlwinm
    /* subf r7, r9, r6 */ // 0x806705A0
    /* clrlwi r6, r3, 0x18 */ // 0x806705A4
    /* slwi r10, r10, 5 */ // 0x806705A8
    /* rotlwi r7, r7, 3 */ // 0x806705AC
    r10 = r12 + r10; // 0x806705B0
    r9 = r7 + r9; // 0x806705B4
    r7 = r11 + r10; // 0x806705B8
    r7 = r9 + r7; // 0x806705BC
    /* lbzx r7, r8, r7 */ // 0x806705C0
    if (<=) goto 0x0x806705d4;
    /* clrlwi r4, r5, 0x18 */ // 0x806705CC
    r3 = r7;
    r5 = r5 + 1; // 0x806705D4
    if (counter-- != 0) goto 0x0x80670570;
    *(0xf8 + r31) = r4; // stw @ 0x806705DC
    /* b 0x806705ec */ // 0x806705E0
    /* li r0, -1 */ // 0x806705E4
    *(0xf8 + r31) = r0; // stw @ 0x806705E8
    r0 = *(0x14 + r1); // lwz @ 0x806705EC
    r31 = *(0xc + r1); // lwz @ 0x806705F0
    return;
}