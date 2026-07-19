/* Function at 0x806D37FC, size=352 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806D37FC(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D3804
    *(0xd8 + r1) = r30; // stw @ 0x806D3810
    *(0xd4 + r1) = r29; // stw @ 0x806D3814
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D381C
    r3 = *(0 + r3); // lwz @ 0x806D3820
    r30 = *(0x328 + r3); // lwz @ 0x806D3824
    if (!=) goto 0x0x806d3838;
    /* li r30, 0 */ // 0x806D3830
    /* b 0x806d388c */ // 0x806D3834
    /* lis r31, 0 */ // 0x806D3838
    r31 = r31 + 0; // 0x806D383C
    if (==) goto 0x0x806d3888;
    r12 = *(0 + r30); // lwz @ 0x806D3844
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D384C
    /* mtctr r12 */ // 0x806D3850
    /* bctrl  */ // 0x806D3854
    /* b 0x806d3870 */ // 0x806D3858
    if (!=) goto 0x0x806d386c;
    /* li r0, 1 */ // 0x806D3864
    /* b 0x806d387c */ // 0x806D3868
    r3 = *(0 + r3); // lwz @ 0x806D386C
    if (!=) goto 0x0x806d385c;
    /* li r0, 0 */ // 0x806D3878
    if (==) goto 0x0x806d3888;
    /* b 0x806d388c */ // 0x806D3884
    /* li r30, 0 */ // 0x806D3888
    r12 = *(0 + r30); // lwz @ 0x806D388C
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D3894
    /* mtctr r12 */ // 0x806D3898
    /* bctrl  */ // 0x806D389C
    /* lis r3, 0 */ // 0x806D38A0
    /* li r31, 0 */ // 0x806D38A4
    r3 = *(0 + r3); // lwz @ 0x806D38A8
    FUN_806F5918(r3); // bl 0x806F5918
    if (>) goto 0x0x806d3938;
    /* lis r4, 0 */ // 0x806D38B8
    /* slwi r0, r3, 2 */ // 0x806D38BC
    r4 = r4 + 0; // 0x806D38C0
    /* lwzx r4, r4, r0 */ // 0x806D38C4
    /* mtctr r4 */ // 0x806D38C8
    /* bctr  */ // 0x806D38CC
    /* li r31, 0x18a6 */ // 0x806D38D0
    /* b 0x806d3938 */ // 0x806D38D4
    /* li r31, 0x18a7 */ // 0x806D38D8
    /* b 0x806d3938 */ // 0x806D38DC
    /* li r31, 0x18a8 */ // 0x806D38E0
    /* b 0x806d3938 */ // 0x806D38E4
    /* li r31, 0x18a9 */ // 0x806D38E8
    /* b 0x806d3938 */ // 0x806D38EC
    /* li r31, 0x18aa */ // 0x806D38F0
    /* b 0x806d3938 */ // 0x806D38F4
    /* li r31, 0x18ab */ // 0x806D38F8
    /* b 0x806d3938 */ // 0x806D38FC
    /* li r31, 0x18ad */ // 0x806D3900
    /* b 0x806d3938 */ // 0x806D3904
    /* li r31, 0x815 */ // 0x806D3908
    /* b 0x806d3938 */ // 0x806D390C
    /* lis r3, 0 */ // 0x806D3910
    r3 = *(0 + r3); // lwz @ 0x806D3914
    r3 = *(0x90 + r3); // lwz @ 0x806D3918
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x806D3920
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x806D3928
    /* li r4, -1 */ // 0x806D392C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806d39a8 */ // 0x806D3934
    FUN_80654ECC(r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D3940
    r3 = *(0 + r3); // lwz @ 0x806D3944
    FUN_806F58F0(r3, r3); // bl 0x806F58F0
    *(8 + r1) = r3; // stw @ 0x806D394C
    r3 = r30;
    /* li r4, 0x1c84 */ // 0x806D3954
    /* li r5, 0 */ // 0x806D3958
}