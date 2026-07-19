/* Function at 0x806F3660, size=1084 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 27 function(s) */

int FUN_806F3660(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806F3668
    /* clrlwi r0, r4, 0x18 */ // 0x806F3670
    *(0x1c + r1) = r31; // stw @ 0x806F3674
    /* mulli r31, r0, 0x248 */ // 0x806F3678
    *(0x18 + r1) = r30; // stw @ 0x806F367C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F3684
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x806F368C
    r5 = *(0 + r5); // lwz @ 0x806F3690
    r0 = *(0x14 + r5); // lwz @ 0x806F3694
    r3 = r0 + r31; // 0x806F3698
    r0 = *(0x8c + r3); // lwz @ 0x806F369C
    if (==) goto 0x0x806f3948;
    /* lis r28, 0 */ // 0x806F36A8
    r3 = *(0 + r28); // lwz @ 0x806F36AC
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f36d8;
    r3 = *(0 + r28); // lwz @ 0x806F36BC
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F36C8
    r3 = r29 + r0; // 0x806F36CC
    r0 = *(1 + r3); // lbz @ 0x806F36D0
    /* b 0x806f3700 */ // 0x806F36D4
    r3 = *(0 + r28); // lwz @ 0x806F36D8
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f36fc;
    /* slwi r0, r30, 3 */ // 0x806F36EC
    r3 = r29 + r0; // 0x806F36F0
    r0 = *(0x11 + r3); // lbz @ 0x806F36F4
    /* b 0x806f3700 */ // 0x806F36F8
    /* li r0, 0x14 */ // 0x806F36FC
    if (!=) goto 0x0x806f378c;
    /* lis r28, 0 */ // 0x806F3708
    r4 = r30;
    r3 = *(0 + r28); // lwz @ 0x806F3710
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f373c;
    r3 = *(0 + r28); // lwz @ 0x806F3720
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F372C
    r3 = r29 + r0; // 0x806F3730
    r28 = *(1 + r3); // lbz @ 0x806F3734
    /* b 0x806f3764 */ // 0x806F3738
    r3 = *(0 + r28); // lwz @ 0x806F373C
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3760;
    /* slwi r0, r30, 3 */ // 0x806F3750
    r3 = r29 + r0; // 0x806F3754
    r28 = *(0x11 + r3); // lbz @ 0x806F3758
    /* b 0x806f3764 */ // 0x806F375C
    /* li r28, 0x14 */ // 0x806F3760
    /* lis r3, 0 */ // 0x806F3764
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F376C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r3, r3, 3 */ // 0x806F3774
    /* li r0, 7 */ // 0x806F3778
    r3 = r29 + r3; // 0x806F377C
    *(1 + r3) = r28; // stb @ 0x806F3780
    *(3 + r3) = r0; // stb @ 0x806F3784
    /* b 0x806f3a7c */ // 0x806F3788
    /* lis r3, 0 */ // 0x806F378C
    r3 = *(0 + r3); // lwz @ 0x806F3790
    r0 = *(0x14 + r3); // lwz @ 0x806F3794
    r3 = r0 + r31; // 0x806F3798
    r0 = *(0x90 + r3); // lwz @ 0x806F379C
    if (==) goto 0x0x806f37bc;
    if (==) goto 0x0x806f3840;
    if (==) goto 0x0x806f38c4;
    /* b 0x806f3a7c */ // 0x806F37B8
    /* lis r28, 0 */ // 0x806F37BC
    r4 = r30;
    r3 = *(0 + r28); // lwz @ 0x806F37C4
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f37f0;
    r3 = *(0 + r28); // lwz @ 0x806F37D4
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F37E0
    r3 = r29 + r0; // 0x806F37E4
    r28 = *(1 + r3); // lbz @ 0x806F37E8
    /* b 0x806f3818 */ // 0x806F37EC
    r3 = *(0 + r28); // lwz @ 0x806F37F0
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3814;
    /* slwi r0, r30, 3 */ // 0x806F3804
    r3 = r29 + r0; // 0x806F3808
    r28 = *(0x11 + r3); // lbz @ 0x806F380C
    /* b 0x806f3818 */ // 0x806F3810
    /* li r28, 0x14 */ // 0x806F3814
    /* lis r3, 0 */ // 0x806F3818
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3820
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r3, r3, 3 */ // 0x806F3828
    /* li r0, 6 */ // 0x806F382C
    r3 = r29 + r3; // 0x806F3830
    *(1 + r3) = r28; // stb @ 0x806F3834
    *(3 + r3) = r0; // stb @ 0x806F3838
    /* b 0x806f3a7c */ // 0x806F383C
    /* lis r28, 0 */ // 0x806F3840
    r4 = r30;
    r3 = *(0 + r28); // lwz @ 0x806F3848
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f3874;
    r3 = *(0 + r28); // lwz @ 0x806F3858
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3864
    r3 = r29 + r0; // 0x806F3868
    r28 = *(1 + r3); // lbz @ 0x806F386C
    /* b 0x806f389c */ // 0x806F3870
    r3 = *(0 + r28); // lwz @ 0x806F3874
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3898;
    /* slwi r0, r30, 3 */ // 0x806F3888
    r3 = r29 + r0; // 0x806F388C
    r28 = *(0x11 + r3); // lbz @ 0x806F3890
    /* b 0x806f389c */ // 0x806F3894
    /* li r28, 0x14 */ // 0x806F3898
    /* lis r3, 0 */ // 0x806F389C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F38A4
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r3, r3, 3 */ // 0x806F38AC
    /* li r0, 5 */ // 0x806F38B0
    r3 = r29 + r3; // 0x806F38B4
    *(1 + r3) = r28; // stb @ 0x806F38B8
    *(3 + r3) = r0; // stb @ 0x806F38BC
    /* b 0x806f3a7c */ // 0x806F38C0
    /* lis r28, 0 */ // 0x806F38C4
    r4 = r30;
    r3 = *(0 + r28); // lwz @ 0x806F38CC
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f38f8;
    r3 = *(0 + r28); // lwz @ 0x806F38DC
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F38E8
    r3 = r29 + r0; // 0x806F38EC
    r28 = *(1 + r3); // lbz @ 0x806F38F0
    /* b 0x806f3920 */ // 0x806F38F4
    r3 = *(0 + r28); // lwz @ 0x806F38F8
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f391c;
    /* slwi r0, r30, 3 */ // 0x806F390C
    r3 = r29 + r0; // 0x806F3910
    r28 = *(0x11 + r3); // lbz @ 0x806F3914
    /* b 0x806f3920 */ // 0x806F3918
    /* li r28, 0x14 */ // 0x806F391C
    /* lis r3, 0 */ // 0x806F3920
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3928
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r3, r3, 3 */ // 0x806F3930
    /* li r0, 4 */ // 0x806F3934
    r3 = r29 + r3; // 0x806F3938
    *(1 + r3) = r28; // stb @ 0x806F393C
    *(3 + r3) = r0; // stb @ 0x806F3940
    /* b 0x806f3a7c */ // 0x806F3944
    /* lis r28, 0 */ // 0x806F3948
    r3 = *(0 + r28); // lwz @ 0x806F394C
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f3978;
    r3 = *(0 + r28); // lwz @ 0x806F395C
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3968
    r3 = r29 + r0; // 0x806F396C
    r0 = *(3 + r3); // lbz @ 0x806F3970
    /* b 0x806f39a0 */ // 0x806F3974
    r3 = *(0 + r28); // lwz @ 0x806F3978
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f399c;
    /* slwi r0, r30, 3 */ // 0x806F398C
    r3 = r29 + r0; // 0x806F3990
    r0 = *(0x13 + r3); // lbz @ 0x806F3994
    /* b 0x806f39a0 */ // 0x806F3998
    /* li r0, 0 */ // 0x806F399C
    if (==) goto 0x0x806f3a0c;
    /* lis r28, 0 */ // 0x806F39A8
    r4 = r30;
    r3 = *(0 + r28); // lwz @ 0x806F39B0
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f39dc;
    r3 = *(0 + r28); // lwz @ 0x806F39C0
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F39CC
    r3 = r29 + r0; // 0x806F39D0
    r0 = *(3 + r3); // lbz @ 0x806F39D4
    /* b 0x806f3a04 */ // 0x806F39D8
    r3 = *(0 + r28); // lwz @ 0x806F39DC
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3a00;
    /* slwi r0, r30, 3 */ // 0x806F39F0
    r3 = r29 + r0; // 0x806F39F4
    r0 = *(0x13 + r3); // lbz @ 0x806F39F8
    /* b 0x806f3a04 */ // 0x806F39FC
    /* li r0, 0 */ // 0x806F3A00
    if (!=) goto 0x0x806f3a54;
    /* lis r3, 0 */ // 0x806F3A0C
    r3 = *(0 + r3); // lwz @ 0x806F3A10
    r0 = *(0x14 + r3); // lwz @ 0x806F3A14
    r3 = r0 + r31; // 0x806F3A18
    r0 = *(0x58 + r3); // lwz @ 0x806F3A1C
    if (!=) goto 0x0x806f3a7c;
    /* lis r3, 0 */ // 0x806F3A28
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3A30
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3A38
    /* li r4, 0x14 */ // 0x806F3A3C
    r3 = r29 + r0; // 0x806F3A40
    *(1 + r3) = r4; // stb @ 0x806F3A44
    /* li r0, 0 */ // 0x806F3A48
    *(3 + r3) = r0; // stb @ 0x806F3A4C
    /* b 0x806f3a7c */ // 0x806F3A50
    /* lis r3, 0 */ // 0x806F3A54
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3A5C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3A64
    /* li r4, 0x14 */ // 0x806F3A68
    r3 = r29 + r0; // 0x806F3A6C
    *(1 + r3) = r4; // stb @ 0x806F3A70
    /* li r0, 0 */ // 0x806F3A74
    *(3 + r3) = r0; // stb @ 0x806F3A78
    r0 = *(0x24 + r1); // lwz @ 0x806F3A7C
    r31 = *(0x1c + r1); // lwz @ 0x806F3A80
    r30 = *(0x18 + r1); // lwz @ 0x806F3A84
    r29 = *(0x14 + r1); // lwz @ 0x806F3A88
    r28 = *(0x10 + r1); // lwz @ 0x806F3A8C
    return;
}