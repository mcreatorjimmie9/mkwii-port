/* Function at 0x806D57F4, size=728 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806D57F4(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x806D5808
    *(0xd4 + r1) = r29; // stw @ 0x806D580C
    r4 = *(0x54 + r3); // lwz @ 0x806D5810
    r0 = r4 + -5; // 0x806D5814
    if (<=) goto 0x0x806d5aa0;
    if (==) goto 0x0x806d5844;
    if (==) goto 0x0x806d5910;
    if (==) goto 0x0x806d59b4;
    if (==) goto 0x0x806d59bc;
    /* b 0x806d5ab0 */ // 0x806D5840
    /* lis r3, 0 */ // 0x806D5844
    r3 = *(0 + r3); // lwz @ 0x806D5848
    r3 = *(0 + r3); // lwz @ 0x806D584C
    r29 = *(0x150 + r3); // lwz @ 0x806D5850
    if (!=) goto 0x0x806d5864;
    /* li r29, 0 */ // 0x806D585C
    /* b 0x806d58b8 */ // 0x806D5860
    /* lis r30, 0 */ // 0x806D5864
    r30 = r30 + 0; // 0x806D5868
    if (==) goto 0x0x806d58b4;
    r12 = *(0 + r29); // lwz @ 0x806D5870
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D5878
    /* mtctr r12 */ // 0x806D587C
    /* bctrl  */ // 0x806D5880
    /* b 0x806d589c */ // 0x806D5884
    if (!=) goto 0x0x806d5898;
    /* li r0, 1 */ // 0x806D5890
    /* b 0x806d58a8 */ // 0x806D5894
    r3 = *(0 + r3); // lwz @ 0x806D5898
    if (!=) goto 0x0x806d5888;
    /* li r0, 0 */ // 0x806D58A4
    if (==) goto 0x0x806d58b4;
    /* b 0x806d58b8 */ // 0x806D58B0
    /* li r29, 0 */ // 0x806D58B4
    r0 = *(0xa50 + r29); // lwz @ 0x806D58B8
    if (==) goto 0x0x806d58d0;
    if (==) goto 0x0x806d58f8;
    /* b 0x806d5ab0 */ // 0x806D58CC
    /* li r0, 1 */ // 0x806D58D0
    *(0x54 + r31) = r0; // stw @ 0x806D58D4
    r3 = r31;
    /* li r4, 0x84 */ // 0x806D58DC
    r12 = *(0 + r31); // lwz @ 0x806D58E0
    /* li r5, 0 */ // 0x806D58E4
    r12 = *(0x24 + r12); // lwz @ 0x806D58E8
    /* mtctr r12 */ // 0x806D58EC
    /* bctrl  */ // 0x806D58F0
    /* b 0x806d5ab0 */ // 0x806D58F4
    /* lis r4, 0 */ // 0x806D58F8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806D5900
    /* li r4, 1 */ // 0x806D5904
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806d5ab0 */ // 0x806D590C
    /* lis r3, 0 */ // 0x806D5910
    r3 = *(0 + r3); // lwz @ 0x806D5914
    r3 = *(0 + r3); // lwz @ 0x806D5918
    r29 = *(0x218 + r3); // lwz @ 0x806D591C
    if (!=) goto 0x0x806d5930;
    /* li r29, 0 */ // 0x806D5928
    /* b 0x806d5984 */ // 0x806D592C
    /* lis r30, 0 */ // 0x806D5930
    r30 = r30 + 0; // 0x806D5934
    if (==) goto 0x0x806d5980;
    r12 = *(0 + r29); // lwz @ 0x806D593C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D5944
    /* mtctr r12 */ // 0x806D5948
    /* bctrl  */ // 0x806D594C
    /* b 0x806d5968 */ // 0x806D5950
    if (!=) goto 0x0x806d5964;
    /* li r0, 1 */ // 0x806D595C
    /* b 0x806d5974 */ // 0x806D5960
    r3 = *(0 + r3); // lwz @ 0x806D5964
    if (!=) goto 0x0x806d5954;
    /* li r0, 0 */ // 0x806D5970
    if (==) goto 0x0x806d5980;
    /* b 0x806d5984 */ // 0x806D597C
    /* li r29, 0 */ // 0x806D5980
    r0 = *(0x6e + r29); // lbz @ 0x806D5984
    if (==) goto 0x0x806d599c;
    r3 = r31;
    FUN_806D5B08(r3); // bl 0x806D5B08
    /* b 0x806d5ab0 */ // 0x806D5998
    /* lis r3, 0 */ // 0x806D599C
    r4 = *(0x10 + r29); // lwz @ 0x806D59A0
    /* lfs f1, 0(r3) */ // 0x806D59A4
    r3 = r31;
    FUN_80671C48(r3, r3); // bl 0x80671C48
    /* b 0x806d5ab0 */ // 0x806D59B0
    FUN_806D6644(r3); // bl 0x806D6644
    /* b 0x806d5ab0 */ // 0x806D59B8
    /* lis r3, 0 */ // 0x806D59BC
    r3 = *(0 + r3); // lwz @ 0x806D59C0
    r3 = *(0 + r3); // lwz @ 0x806D59C4
    r29 = *(0x14c + r3); // lwz @ 0x806D59C8
    if (!=) goto 0x0x806d59dc;
    /* li r29, 0 */ // 0x806D59D4
    /* b 0x806d5a30 */ // 0x806D59D8
    /* lis r30, 0 */ // 0x806D59DC
    r30 = r30 + 0; // 0x806D59E0
    if (==) goto 0x0x806d5a2c;
    r12 = *(0 + r29); // lwz @ 0x806D59E8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D59F0
    /* mtctr r12 */ // 0x806D59F4
    /* bctrl  */ // 0x806D59F8
    /* b 0x806d5a14 */ // 0x806D59FC
    if (!=) goto 0x0x806d5a10;
    /* li r0, 1 */ // 0x806D5A08
    /* b 0x806d5a20 */ // 0x806D5A0C
    r3 = *(0 + r3); // lwz @ 0x806D5A10
    if (!=) goto 0x0x806d5a00;
    /* li r0, 0 */ // 0x806D5A1C
    if (==) goto 0x0x806d5a2c;
    /* b 0x806d5a30 */ // 0x806D5A28
    /* li r29, 0 */ // 0x806D5A2C
    r12 = *(0 + r29); // lwz @ 0x806D5A30
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806D5A38
    /* mtctr r12 */ // 0x806D5A3C
    /* bctrl  */ // 0x806D5A40
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D5A4C
    r3 = *(0 + r3); // lwz @ 0x806D5A50
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806D5A58
    r3 = r29;
    /* li r4, 0x17e3 */ // 0x806D5A64
    r12 = *(0 + r29); // lwz @ 0x806D5A68
    r12 = *(0x68 + r12); // lwz @ 0x806D5A6C
    /* mtctr r12 */ // 0x806D5A70
    /* bctrl  */ // 0x806D5A74
    r12 = *(0 + r31); // lwz @ 0x806D5A78
    r3 = r31;
    /* li r4, 0x51 */ // 0x806D5A80
    /* li r5, 0 */ // 0x806D5A84
    r12 = *(0x24 + r12); // lwz @ 0x806D5A88
    /* mtctr r12 */ // 0x806D5A8C
    /* bctrl  */ // 0x806D5A90
    /* li r0, 6 */ // 0x806D5A94
    *(0x54 + r31) = r0; // stw @ 0x806D5A98
    /* b 0x806d5ab0 */ // 0x806D5A9C
    /* lis r5, 0 */ // 0x806D5AA0
    /* li r4, 1 */ // 0x806D5AA4
    /* lfs f1, 0(r5) */ // 0x806D5AA8
    FUN_80671C48(r5, r4); // bl 0x80671C48
    r0 = *(0xe4 + r1); // lwz @ 0x806D5AB0
    r31 = *(0xdc + r1); // lwz @ 0x806D5AB4
    r30 = *(0xd8 + r1); // lwz @ 0x806D5AB8
    r29 = *(0xd4 + r1); // lwz @ 0x806D5ABC
    return;
}