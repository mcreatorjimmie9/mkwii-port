/* Function at 0x808E5850, size=820 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 24 function(s) */

int FUN_808E5850(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x808E5858
    *(0x24 + r1) = r0; // stw @ 0x808E585C
    /* stmw r26, 8(r1) */ // 0x808E5860
    r31 = r3;
    /* li r28, 0 */ // 0x808E5868
    r3 = *(0 + r4); // lwz @ 0x808E586C
    r3 = *(0 + r3); // lwz @ 0x808E5870
    r3 = *(0 + r3); // lwz @ 0x808E5874
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808e5890;
    /* lis r3, 0 */ // 0x808E5884
    r3 = *(0 + r3); // lwz @ 0x808E5888
    r28 = *(0xce4 + r3); // lwz @ 0x808E588C
    /* lis r3, 0 */ // 0x808E5890
    r3 = *(0 + r3); // lwz @ 0x808E5894
    r3 = *(0x98 + r3); // lwz @ 0x808E5898
    r3 = *(0x12c + r3); // lwz @ 0x808E589C
    FUN_8089E030(r3); // bl 0x8089E030
    /* lis r4, 0 */ // 0x808E58A4
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808E58AC
    if (==) goto 0x0x808e58c8;
    r3 = *(0x18 + r3); // lwz @ 0x808E58B8
    if (==) goto 0x0x808e58c8;
    FUN_808E3D10(); // bl 0x808E3D10
    r3 = *(0x48 + r31); // lwz @ 0x808E58C8
    /* li r30, -1 */ // 0x808E58D0
    r27 = *(0 + r3); // lwz @ 0x808E58D4
    if (==) goto 0x0x808e58f0;
    if (==) goto 0x0x808e58f8;
    if (==) goto 0x0x808e5900;
    /* b 0x808e5904 */ // 0x808E58EC
    /* li r30, 0 */ // 0x808E58F0
    /* b 0x808e5904 */ // 0x808E58F4
    /* li r30, 1 */ // 0x808E58F8
    /* b 0x808e5904 */ // 0x808E58FC
    /* li r30, 2 */ // 0x808E5900
    r3 = r30;
    r4 = r28;
    FUN_808AF6B0(r3, r4); // bl 0x808AF6B0
    r4 = r3;
    r3 = r27;
    /* li r5, 0 */ // 0x808E5918
    FUN_806A0A34(r4, r4, r3, r5); // bl 0x806A0A34
    r4 = *(0x6bc + r31); // lwz @ 0x808E5920
    r3 = r27;
    FUN_80649FD0(r3, r5, r3); // bl 0x80649FD0
    *(0x240 + r27) = r30; // stw @ 0x808E592C
    r3 = r30;
    r4 = r28;
    FUN_808D0044(r3, r3, r4); // bl 0x808D0044
    r26 = r3;
    r3 = r27;
    FUN_806A0C48(r3, r4, r3); // bl 0x806A0C48
    /* lis r30, 0 */ // 0x808E5948
    r3 = r27;
    r30 = r30 + 0; // 0x808E5950
    r5 = r26;
    r4 = r30 + 0x70; // 0x808E5958
    FUN_806A0D70(r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r26;
    r4 = r30 + 0x76; // 0x808E5968
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r26;
    r4 = r30 + 0x83; // 0x808E5978
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r26;
    r4 = r30 + 0x90; // 0x808E5988
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r26;
    r4 = r30 + 0x9f; // 0x808E5998
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r12 = *(0 + r31); // lwz @ 0x808E59A0
    r3 = r31;
    r4 = r27;
    r12 = *(0x78 + r12); // lwz @ 0x808E59AC
    /* mtctr r12 */ // 0x808E59B0
    /* bctrl  */ // 0x808E59B4
    r12 = *(0 + r31); // lwz @ 0x808E59B8
    r3 = r31;
    r4 = r27;
    /* li r5, 0 */ // 0x808E59C4
    r12 = *(0x64 + r12); // lwz @ 0x808E59C8
    /* mtctr r12 */ // 0x808E59CC
    /* bctrl  */ // 0x808E59D0
    r3 = *(0x48 + r31); // lwz @ 0x808E59D4
    /* li r26, -1 */ // 0x808E59DC
    r27 = *(4 + r3); // lwz @ 0x808E59E0
    if (==) goto 0x0x808e59fc;
    if (==) goto 0x0x808e5a04;
    if (==) goto 0x0x808e5a0c;
    /* b 0x808e5a10 */ // 0x808E59F8
    /* li r26, 0x12 */ // 0x808E59FC
    /* b 0x808e5a10 */ // 0x808E5A00
    /* li r26, 0x13 */ // 0x808E5A04
    /* b 0x808e5a10 */ // 0x808E5A08
    /* li r26, 0x14 */ // 0x808E5A0C
    r3 = r26;
    r4 = r28;
    FUN_808AF6B0(r3, r4); // bl 0x808AF6B0
    r4 = r3;
    r3 = r27;
    /* li r5, 0 */ // 0x808E5A24
    FUN_806A0A34(r4, r4, r3, r5); // bl 0x806A0A34
    r4 = *(0x6bc + r31); // lwz @ 0x808E5A2C
    r3 = r27;
    FUN_80649FD0(r3, r5, r3); // bl 0x80649FD0
    *(0x240 + r27) = r26; // stw @ 0x808E5A38
    r3 = r26;
    r4 = r28;
    FUN_808D0044(r3, r3, r4); // bl 0x808D0044
    r28 = r3;
    r3 = r27;
    FUN_806A0C48(r3, r4, r3); // bl 0x806A0C48
    /* lis r30, 0 */ // 0x808E5A54
    r3 = r27;
    r30 = r30 + 0; // 0x808E5A5C
    r5 = r28;
    r4 = r30 + 0xae; // 0x808E5A64
    FUN_806A0D70(r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r28;
    r4 = r30 + 0xb4; // 0x808E5A74
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r28;
    r4 = r30 + 0xc1; // 0x808E5A84
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r28;
    r4 = r30 + 0xce; // 0x808E5A94
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r3 = r27;
    r5 = r28;
    r4 = r30 + 0xdd; // 0x808E5AA4
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    /* lis r3, 0 */ // 0x808E5AAC
    r3 = *(0 + r3); // lwz @ 0x808E5AB0
    r3 = *(0x98 + r3); // lwz @ 0x808E5AB4
    r0 = *(0x13c + r3); // lwz @ 0x808E5AB8
    if (!=) goto 0x0x808e5af8;
    r12 = *(0 + r31); // lwz @ 0x808E5AC4
    r3 = r31;
    r4 = r27;
    r12 = *(0x78 + r12); // lwz @ 0x808E5AD0
    /* mtctr r12 */ // 0x808E5AD4
    /* bctrl  */ // 0x808E5AD8
    r12 = *(0 + r31); // lwz @ 0x808E5ADC
    r3 = r31;
    r4 = r27;
    /* li r5, 0 */ // 0x808E5AE8
    r12 = *(0x64 + r12); // lwz @ 0x808E5AEC
    /* mtctr r12 */ // 0x808E5AF0
    /* bctrl  */ // 0x808E5AF4
    r3 = r31;
    FUN_808B3318(r5, r3); // bl 0x808B3318
    /* li r26, 0 */ // 0x808E5B00
    /* li r29, 0 */ // 0x808E5B04
    /* lis r30, 0 */ // 0x808E5B08
    r4 = *(0x48 + r31); // lwz @ 0x808E5B0C
    r3 = *(0 + r30); // lwz @ 0x808E5B10
    /* lwzx r4, r4, r29 */ // 0x808E5B14
    r3 = *(0x98 + r3); // lwz @ 0x808E5B18
    r5 = *(0x240 + r4); // lwz @ 0x808E5B1C
    r0 = *(0x13c + r3); // lwz @ 0x808E5B20
    if (!=) goto 0x0x808e5b60;
    r12 = *(0 + r31); // lwz @ 0x808E5B2C
    r3 = r31;
    r12 = *(0x78 + r12); // lwz @ 0x808E5B34
    /* mtctr r12 */ // 0x808E5B38
    /* bctrl  */ // 0x808E5B3C
    r12 = *(0 + r31); // lwz @ 0x808E5B40
    r3 = r31;
    r4 = *(0x48 + r31); // lwz @ 0x808E5B48
    /* li r5, 0 */ // 0x808E5B4C
    r12 = *(0x64 + r12); // lwz @ 0x808E5B50
    /* lwzx r4, r4, r29 */ // 0x808E5B54
    /* mtctr r12 */ // 0x808E5B58
    /* bctrl  */ // 0x808E5B5C
    r26 = r26 + 1; // 0x808E5B60
    r29 = r29 + 4; // 0x808E5B64
    if (<) goto 0x0x808e5b0c;
    r0 = *(0x24 + r1); // lwz @ 0x808E5B74
    return;
}