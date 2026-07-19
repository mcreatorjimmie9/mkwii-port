/* Function at 0x806D3438, size=964 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806D3438(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806D3448
    *(0x18 + r1) = r30; // stw @ 0x806D344C
    *(0x14 + r1) = r29; // stw @ 0x806D3450
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806D3458
    r3 = *(0x90 + r3); // lwz @ 0x806D345C
    FUN_806845D0(); // bl 0x806845D0
    r3 = *(0 + r31); // lwz @ 0x806D3464
    r3 = *(0 + r3); // lwz @ 0x806D3468
    r30 = *(0x328 + r3); // lwz @ 0x806D346C
    if (!=) goto 0x0x806d3480;
    /* li r30, 0 */ // 0x806D3478
    /* b 0x806d34d4 */ // 0x806D347C
    /* lis r31, 0 */ // 0x806D3480
    r31 = r31 + 0; // 0x806D3484
    if (==) goto 0x0x806d34d0;
    r12 = *(0 + r30); // lwz @ 0x806D348C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D3494
    /* mtctr r12 */ // 0x806D3498
    /* bctrl  */ // 0x806D349C
    /* b 0x806d34b8 */ // 0x806D34A0
    if (!=) goto 0x0x806d34b4;
    /* li r0, 1 */ // 0x806D34AC
    /* b 0x806d34c4 */ // 0x806D34B0
    r3 = *(0 + r3); // lwz @ 0x806D34B4
    if (!=) goto 0x0x806d34a4;
    /* li r0, 0 */ // 0x806D34C0
    if (==) goto 0x0x806d34d0;
    /* b 0x806d34d4 */ // 0x806D34CC
    /* li r30, 0 */ // 0x806D34D0
    r12 = *(0 + r30); // lwz @ 0x806D34D4
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D34DC
    /* mtctr r12 */ // 0x806D34E0
    /* bctrl  */ // 0x806D34E4
    r0 = *(0x68 + r29); // lwz @ 0x806D34E8
    if (==) goto 0x0x806d3520;
    if (==) goto 0x0x806d3588;
    if (==) goto 0x0x806d35f0;
    if (==) goto 0x0x806d3658;
    if (==) goto 0x0x806d36e8;
    if (==) goto 0x0x806d3750;
    /* b 0x806d37b4 */ // 0x806D351C
    r3 = r30;
    /* li r4, 0x1bbc */ // 0x806D3524
    /* li r5, 0 */ // 0x806D3528
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D3530
    if (==) goto 0x0x806d3548;
    if (==) goto 0x0x806d3568;
    /* b 0x806d37b4 */ // 0x806D3544
    r12 = *(0 + r30); // lwz @ 0x806D3548
    r3 = r30;
    /* li r4, 0x1bc0 */ // 0x806D3550
    /* li r5, 0 */ // 0x806D3554
    r12 = *(0x68 + r12); // lwz @ 0x806D3558
    /* mtctr r12 */ // 0x806D355C
    /* bctrl  */ // 0x806D3560
    /* b 0x806d37b4 */ // 0x806D3564
    r12 = *(0 + r30); // lwz @ 0x806D3568
    r3 = r30;
    /* li r4, 0x1bc1 */ // 0x806D3570
    /* li r5, 0 */ // 0x806D3574
    r12 = *(0x68 + r12); // lwz @ 0x806D3578
    /* mtctr r12 */ // 0x806D357C
    /* bctrl  */ // 0x806D3580
    /* b 0x806d37b4 */ // 0x806D3584
    r3 = r30;
    /* li r4, 0x1c52 */ // 0x806D358C
    /* li r5, 0 */ // 0x806D3590
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D3598
    if (==) goto 0x0x806d35b0;
    if (==) goto 0x0x806d35d0;
    /* b 0x806d37b4 */ // 0x806D35AC
    r12 = *(0 + r30); // lwz @ 0x806D35B0
    r3 = r30;
    /* li r4, 0x1c57 */ // 0x806D35B8
    /* li r5, 0 */ // 0x806D35BC
    r12 = *(0x68 + r12); // lwz @ 0x806D35C0
    /* mtctr r12 */ // 0x806D35C4
    /* bctrl  */ // 0x806D35C8
    /* b 0x806d37b4 */ // 0x806D35CC
    r12 = *(0 + r30); // lwz @ 0x806D35D0
    r3 = r30;
    /* li r4, 0x1c58 */ // 0x806D35D8
    /* li r5, 0 */ // 0x806D35DC
    r12 = *(0x68 + r12); // lwz @ 0x806D35E0
    /* mtctr r12 */ // 0x806D35E4
    /* bctrl  */ // 0x806D35E8
    /* b 0x806d37b4 */ // 0x806D35EC
    r3 = r30;
    /* li r4, 0x1c84 */ // 0x806D35F4
    /* li r5, 0 */ // 0x806D35F8
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D3600
    if (==) goto 0x0x806d3618;
    if (==) goto 0x0x806d3638;
    /* b 0x806d37b4 */ // 0x806D3614
    r12 = *(0 + r30); // lwz @ 0x806D3618
    r3 = r30;
    /* li r4, 0x1c89 */ // 0x806D3620
    /* li r5, 0 */ // 0x806D3624
    r12 = *(0x68 + r12); // lwz @ 0x806D3628
    /* mtctr r12 */ // 0x806D362C
    /* bctrl  */ // 0x806D3630
    /* b 0x806d37b4 */ // 0x806D3634
    r12 = *(0 + r30); // lwz @ 0x806D3638
    r3 = r30;
    /* li r4, 0x1cbe */ // 0x806D3640
    /* li r5, 0 */ // 0x806D3644
    r12 = *(0x68 + r12); // lwz @ 0x806D3648
    /* mtctr r12 */ // 0x806D364C
    /* bctrl  */ // 0x806D3650
    /* b 0x806d37b4 */ // 0x806D3654
    r3 = r30;
    /* li r4, 0x1c84 */ // 0x806D365C
    /* li r5, 0 */ // 0x806D3660
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D3668
    if (==) goto 0x0x806d3688;
    if (==) goto 0x0x806d36a8;
    if (==) goto 0x0x806d36c8;
    /* b 0x806d37b4 */ // 0x806D3684
    r12 = *(0 + r30); // lwz @ 0x806D3688
    r3 = r30;
    /* li r4, 0x1cbf */ // 0x806D3690
    /* li r5, 0 */ // 0x806D3694
    r12 = *(0x68 + r12); // lwz @ 0x806D3698
    /* mtctr r12 */ // 0x806D369C
    /* bctrl  */ // 0x806D36A0
    /* b 0x806d37b4 */ // 0x806D36A4
    r12 = *(0 + r30); // lwz @ 0x806D36A8
    r3 = r30;
    /* li r4, 0x1cc0 */ // 0x806D36B0
    /* li r5, 0 */ // 0x806D36B4
    r12 = *(0x68 + r12); // lwz @ 0x806D36B8
    /* mtctr r12 */ // 0x806D36BC
    /* bctrl  */ // 0x806D36C0
    /* b 0x806d37b4 */ // 0x806D36C4
    r12 = *(0 + r30); // lwz @ 0x806D36C8
    r3 = r30;
    /* li r4, 0x1cbd */ // 0x806D36D0
    /* li r5, 0 */ // 0x806D36D4
    r12 = *(0x68 + r12); // lwz @ 0x806D36D8
    /* mtctr r12 */ // 0x806D36DC
    /* bctrl  */ // 0x806D36E0
    /* b 0x806d37b4 */ // 0x806D36E4
    r3 = r30;
    /* li r4, 0x1ce8 */ // 0x806D36EC
    /* li r5, 0 */ // 0x806D36F0
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D36F8
    if (==) goto 0x0x806d3710;
    if (==) goto 0x0x806d3730;
    /* b 0x806d37b4 */ // 0x806D370C
    r12 = *(0 + r30); // lwz @ 0x806D3710
    r3 = r30;
    /* li r4, 0x1ced */ // 0x806D3718
    /* li r5, 0 */ // 0x806D371C
    r12 = *(0x68 + r12); // lwz @ 0x806D3720
    /* mtctr r12 */ // 0x806D3724
    /* bctrl  */ // 0x806D3728
    /* b 0x806d37b4 */ // 0x806D372C
    r12 = *(0 + r30); // lwz @ 0x806D3730
    r3 = r30;
    /* li r4, 0x1cef */ // 0x806D3738
    /* li r5, 0 */ // 0x806D373C
    r12 = *(0x68 + r12); // lwz @ 0x806D3740
    /* mtctr r12 */ // 0x806D3744
    /* bctrl  */ // 0x806D3748
    /* b 0x806d37b4 */ // 0x806D374C
    r3 = r30;
    /* li r4, 0x1d4c */ // 0x806D3754
    /* li r5, 0 */ // 0x806D3758
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = *(0x74 + r29); // lwz @ 0x806D3760
    if (==) goto 0x0x806d3778;
    if (==) goto 0x0x806d3798;
    /* b 0x806d37b4 */ // 0x806D3774
    r12 = *(0 + r30); // lwz @ 0x806D3778
    r3 = r30;
    /* li r4, 0x1d51 */ // 0x806D3780
    /* li r5, 0 */ // 0x806D3784
    r12 = *(0x68 + r12); // lwz @ 0x806D3788
    /* mtctr r12 */ // 0x806D378C
    /* bctrl  */ // 0x806D3790
    /* b 0x806d37b4 */ // 0x806D3794
    r12 = *(0 + r30); // lwz @ 0x806D3798
    r3 = r30;
    /* li r4, 0x1d52 */ // 0x806D37A0
    /* li r5, 0 */ // 0x806D37A4
    r12 = *(0x68 + r12); // lwz @ 0x806D37A8
    /* mtctr r12 */ // 0x806D37AC
    /* bctrl  */ // 0x806D37B0
    r0 = r29 + 0x44; // 0x806D37B4
    *(0x188 + r30) = r0; // stw @ 0x806D37B8
    r3 = r29;
    /* li r4, 0xc8 */ // 0x806D37C0
    r12 = *(0 + r29); // lwz @ 0x806D37C4
    /* li r5, 0 */ // 0x806D37C8
    r12 = *(0x24 + r12); // lwz @ 0x806D37CC
    /* mtctr r12 */ // 0x806D37D0
    /* bctrl  */ // 0x806D37D4
    /* li r0, 9 */ // 0x806D37D8
    *(0x6c + r29) = r0; // stw @ 0x806D37DC
    r31 = *(0x1c + r1); // lwz @ 0x806D37E0
    r30 = *(0x18 + r1); // lwz @ 0x806D37E4
    r29 = *(0x14 + r1); // lwz @ 0x806D37E8
    r0 = *(0x24 + r1); // lwz @ 0x806D37EC
    return;
}