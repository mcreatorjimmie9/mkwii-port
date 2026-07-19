/* Function at 0x805C3430, size=484 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805C3430(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805C3438
    /* lis r7, 0 */ // 0x805C343C
    *(0x24 + r1) = r0; // stw @ 0x805C3440
    /* lis r8, 0 */ // 0x805C3444
    /* lfs f2, 0(r6) */ // 0x805C3448
    /* lis r6, 0 */ // 0x805C344C
    *(0x1c + r1) = r31; // stw @ 0x805C3450
    r8 = r8 + 0; // 0x805C3454
    /* lfs f1, 0(r7) */ // 0x805C3458
    r0 = r4 + 1; // 0x805C345C
    *(0x18 + r1) = r30; // stw @ 0x805C3460
    /* li r7, 0 */ // 0x805C3464
    /* lfs f0, 0(r6) */ // 0x805C3468
    /* lis r6, 0 */ // 0x805C346C
    *(0x14 + r1) = r29; // stw @ 0x805C3470
    r30 = r3;
    r31 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805C347C
    *(0 + r3) = r8; // stw @ 0x805C3480
    *(8 + r3) = r4; // stb @ 0x805C3484
    *(0xa + r3) = r7; // sth @ 0x805C3488
    /* stfs f2, 0xc(r3) */ // 0x805C348C
    /* stfs f1, 0x14(r3) */ // 0x805C3490
    /* stfs f2, 0x18(r3) */ // 0x805C3494
    /* stfs f0, 0x1c(r3) */ // 0x805C3498
    *(0x20 + r3) = r0; // stb @ 0x805C349C
    r8 = *(0 + r6); // lwz @ 0x805C34A0
    r6 = *(0x20 + r8); // lwz @ 0x805C34A4
    if (==) goto 0x0x805c34b4;
    r7 = *(4 + r6); // lhz @ 0x805C34B0
    /* neg r0, r7 */ // 0x805C34B4
    r0 = r0 | r7; // 0x805C34B8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C34BC
    if (==) goto 0x0x805c34e8;
    r4 = *(0x1c + r8); // lwz @ 0x805C34C4
    if (==) goto 0x0x805c34d8;
    r4 = *(4 + r4); // lhz @ 0x805C34D0
    /* b 0x805c34dc */ // 0x805C34D4
    /* li r4, 0 */ // 0x805C34D8
    /* neg r0, r4 */ // 0x805C34DC
    r0 = r0 | r4; // 0x805C34E0
    /* srwi r0, r0, 0x1f */ // 0x805C34E4
    if (==) goto 0x0x805c34fc;
    r4 = *(0x20 + r8); // lwz @ 0x805C34F0
    r0 = *(0xc + r4); // lbz @ 0x805C34F4
    /* b 0x805c3500 */ // 0x805C34F8
    /* li r0, -1 */ // 0x805C34FC
    /* extsb r0, r0 */ // 0x805C3500
    if (==) goto 0x0x805c35e8;
    if (==) goto 0x0x805c3520;
    r4 = *(0x20 + r8); // lwz @ 0x805C3514
    r4 = *(4 + r4); // lhz @ 0x805C3518
    /* b 0x805c3524 */ // 0x805C351C
    /* li r4, 0 */ // 0x805C3520
    /* neg r0, r4 */ // 0x805C3524
    r0 = r0 | r4; // 0x805C3528
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C352C
    if (==) goto 0x0x805c3558;
    r4 = *(0x1c + r8); // lwz @ 0x805C3534
    if (==) goto 0x0x805c3548;
    r4 = *(4 + r4); // lhz @ 0x805C3540
    /* b 0x805c354c */ // 0x805C3544
    /* li r4, 0 */ // 0x805C3548
    /* neg r0, r4 */ // 0x805C354C
    r0 = r0 | r4; // 0x805C3550
    /* srwi r0, r0, 0x1f */ // 0x805C3554
    if (==) goto 0x0x805c356c;
    r4 = *(0x20 + r8); // lwz @ 0x805C3560
    r0 = *(0xc + r4); // lbz @ 0x805C3564
    /* b 0x805c3570 */ // 0x805C3568
    /* li r0, -1 */ // 0x805C356C
    *(0x27 + r3) = r0; // stb @ 0x805C3570
    /* lis r4, 0 */ // 0x805C3574
    r6 = *(0 + r4); // lwz @ 0x805C3578
    r4 = *(0x20 + r6); // lwz @ 0x805C357C
    if (==) goto 0x0x805c3590;
    r4 = *(4 + r4); // lhz @ 0x805C3588
    /* b 0x805c3594 */ // 0x805C358C
    /* li r4, 0 */ // 0x805C3590
    /* neg r0, r4 */ // 0x805C3594
    r0 = r0 | r4; // 0x805C3598
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C359C
    if (==) goto 0x0x805c35c8;
    r4 = *(0x1c + r6); // lwz @ 0x805C35A4
    if (==) goto 0x0x805c35b8;
    r4 = *(4 + r4); // lhz @ 0x805C35B0
    /* b 0x805c35bc */ // 0x805C35B4
    /* li r4, 0 */ // 0x805C35B8
    /* neg r0, r4 */ // 0x805C35BC
    r0 = r0 | r4; // 0x805C35C0
    /* srwi r0, r0, 0x1f */ // 0x805C35C4
    if (==) goto 0x0x805c35dc;
    r4 = *(0x20 + r6); // lwz @ 0x805C35D0
    r0 = *(0xc + r4); // lbz @ 0x805C35D4
    /* b 0x805c35e0 */ // 0x805C35D8
    /* li r0, -1 */ // 0x805C35DC
    *(0x28 + r3) = r0; // stb @ 0x805C35E0
    /* b 0x805c35f4 */ // 0x805C35E4
    /* li r0, -1 */ // 0x805C35E8
    *(0x27 + r3) = r0; // stb @ 0x805C35EC
    *(0x28 + r3) = r0; // stb @ 0x805C35F0
    /* mulli r4, r5, 0xc */ // 0x805C35F4
    /* li r28, 0 */ // 0x805C35F8
    /* li r29, 1 */ // 0x805C35FC
    *(0x24 + r3) = r28; // sth @ 0x805C3600
    *(0x26 + r3) = r29; // stb @ 0x805C3604
    *(0x38 + r3) = r28; // stw @ 0x805C3608
    r3 = r4 + 0x10; // 0x805C360C
    FUN_805E3430(r3); // bl 0x805E3430
}