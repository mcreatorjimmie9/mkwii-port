/* Function at 0x806BAEA8, size=836 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_806BAEA8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806BAEBC
    *(0x14 + r1) = r29; // stw @ 0x806BAEC0
    r0 = *(0x310 + r3); // lwz @ 0x806BAEC4
    if (!=) goto 0x0x806baeec;
    r0 = *(0x20 + r3); // lwz @ 0x806BAED0
    if (!=) goto 0x0x806baeec;
    /* lis r4, 0 */ // 0x806BAEDC
    r0 = *(0 + r4); // lwz @ 0x806BAEE0
    r0 = r0 | 0x10; // 0x806BAEE4
    *(0 + r4) = r0; // stw @ 0x806BAEE8
    r0 = *(8 + r3); // lwz @ 0x806BAEEC
    if (!=) goto 0x0x806bb22c;
    r0 = *(0x310 + r3); // lwz @ 0x806BAEF8
    if (==) goto 0x0x806baf18;
    if (==) goto 0x0x806bafd0;
    if (==) goto 0x0x806bb19c;
    /* b 0x806bb22c */ // 0x806BAF14
    /* lis r3, 0 */ // 0x806BAF18
    r3 = *(0 + r3); // lwz @ 0x806BAF1C
    r3 = *(0x54 + r3); // lwz @ 0x806BAF20
    r3 = *(0x24 + r3); // lwz @ 0x806BAF24
    r12 = *(0 + r3); // lwz @ 0x806BAF28
    r12 = *(0xc + r12); // lwz @ 0x806BAF2C
    /* mtctr r12 */ // 0x806BAF30
    /* bctrl  */ // 0x806BAF34
    /* subfic r4, r3, 1 */ // 0x806BAF38
    r0 = r3 + -1; // 0x806BAF3C
    r0 = r4 | r0; // 0x806BAF40
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806BAF44
    if (!=) goto 0x0x806bb22c;
    /* lis r4, 0 */ // 0x806BAF4C
    r3 = *(0x320 + r31); // lwz @ 0x806BAF50
    r4 = *(0 + r4); // lwz @ 0x806BAF54
    /* li r5, 0x200 */ // 0x806BAF58
    r8 = *(0x318 + r31); // lwz @ 0x806BAF5C
    /* li r6, 0x1c8 */ // 0x806BAF60
    r4 = *(4 + r4); // lwz @ 0x806BAF64
    /* li r7, 0x64 */ // 0x806BAF68
    r4 = *(0xc + r4); // lwz @ 0x806BAF6C
    FUN_805E3430(r6, r7); // bl 0x805E3430
    r5 = *(0x320 + r31); // lwz @ 0x806BAF74
    /* lis r4, 0 */ // 0x806BAF78
    r0 = *(0 + r5); // lwz @ 0x806BAF7C
    *(0x324 + r31) = r0; // stw @ 0x806BAF80
    *(0x328 + r31) = r3; // stw @ 0x806BAF84
    r3 = *(0 + r4); // lwz @ 0x806BAF88
    r3 = *(0 + r3); // lwz @ 0x806BAF8C
    r0 = *(0 + r3); // lwz @ 0x806BAF90
    if (==) goto 0x0x806bafa8;
    if (==) goto 0x0x806bafb8;
    /* b 0x806bafc4 */ // 0x806BAFA4
    r3 = r31 + 0x4b8; // 0x806BAFA8
    /* li r4, 0x20d5 */ // 0x806BAFAC
    FUN_806C9DF0(r3, r4); // bl 0x806C9DF0
    /* b 0x806bafc4 */ // 0x806BAFB4
    r3 = r31 + 0x4b8; // 0x806BAFB8
    /* li r4, 0x20d6 */ // 0x806BAFBC
    FUN_806C9DF0(r4, r3, r4); // bl 0x806C9DF0
    /* li r0, 1 */ // 0x806BAFC4
    *(0x310 + r31) = r0; // stw @ 0x806BAFC8
    /* b 0x806bb22c */ // 0x806BAFCC
    r0 = *(0x314 + r3); // lbz @ 0x806BAFD0
    if (==) goto 0x0x806bb22c;
    /* lis r30, 0 */ // 0x806BAFDC
    r3 = *(0 + r30); // lwz @ 0x806BAFE0
    r4 = *(0x90 + r3); // lwz @ 0x806BAFE4
    r0 = *(0x14 + r4); // lbz @ 0x806BAFE8
    if (==) goto 0x0x806bb08c;
    r4 = *(0 + r3); // lwz @ 0x806BAFF4
    r0 = *(0 + r4); // lwz @ 0x806BAFF8
    if (==) goto 0x0x806bb010;
    if (==) goto 0x0x806bb064;
    /* b 0x806bb080 */ // 0x806BB00C
    FUN_808EDB94(); // bl 0x808EDB94
    r4 = r3;
    if (!=) goto 0x0x806bb044;
    r3 = *(0 + r30); // lwz @ 0x806BB020
    /* li r4, 0x41 */ // 0x806BB024
    /* li r5, 0 */ // 0x806BB028
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB030
    /* li r4, 0 */ // 0x806BB034
    /* li r5, 0xff */ // 0x806BB038
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb080 */ // 0x806BB040
    r3 = *(0 + r30); // lwz @ 0x806BB044
    /* li r5, 0 */ // 0x806BB048
    FUN_80698C44(r5, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB050
    /* li r4, 0 */ // 0x806BB054
    /* li r5, 0xff */ // 0x806BB058
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb080 */ // 0x806BB060
    /* li r4, 0x3f */ // 0x806BB064
    /* li r5, 0 */ // 0x806BB068
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB070
    /* li r4, 0 */ // 0x806BB074
    /* li r5, 0xff */ // 0x806BB078
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* li r0, 8 */ // 0x806BB080
    *(0x310 + r31) = r0; // stw @ 0x806BB084
    /* b 0x806bb22c */ // 0x806BB088
    r3 = *(0 + r3); // lwz @ 0x806BB08C
    r29 = *(0x154 + r3); // lwz @ 0x806BB090
    if (!=) goto 0x0x806bb0a4;
    /* li r29, 0 */ // 0x806BB09C
    /* b 0x806bb0f8 */ // 0x806BB0A0
    /* lis r30, 0 */ // 0x806BB0A4
    r30 = r30 + 0; // 0x806BB0A8
    if (==) goto 0x0x806bb0f4;
    r12 = *(0 + r29); // lwz @ 0x806BB0B0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB0B8
    /* mtctr r12 */ // 0x806BB0BC
    /* bctrl  */ // 0x806BB0C0
    /* b 0x806bb0dc */ // 0x806BB0C4
    if (!=) goto 0x0x806bb0d8;
    /* li r0, 1 */ // 0x806BB0D0
    /* b 0x806bb0e8 */ // 0x806BB0D4
    r3 = *(0 + r3); // lwz @ 0x806BB0D8
    if (!=) goto 0x0x806bb0c8;
    /* li r0, 0 */ // 0x806BB0E4
    if (==) goto 0x0x806bb0f4;
    /* b 0x806bb0f8 */ // 0x806BB0F0
    /* li r29, 0 */ // 0x806BB0F4
    r3 = r31;
    /* li r4, 0x39 */ // 0x806BB0FC
    /* li r5, -1 */ // 0x806BB100
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r3 = r29;
    /* li r4, 0 */ // 0x806BB10C
    /* li r5, 0 */ // 0x806BB110
    FUN_806724E0(r5, r3, r4, r5); // bl 0x806724E0
    r12 = *(0 + r29); // lwz @ 0x806BB118
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806BB120
    /* mtctr r12 */ // 0x806BB124
    /* bctrl  */ // 0x806BB128
    r3 = r29;
    /* li r4, 0x1e17 */ // 0x806BB130
    /* li r5, 0 */ // 0x806BB134
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x806BB140
    /* li r5, 0x7d2 */ // 0x806BB144
    /* li r6, 0 */ // 0x806BB148
    /* li r7, -1 */ // 0x806BB14C
    /* li r8, 0 */ // 0x806BB150
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x806BB15C
    /* li r5, 0x7d3 */ // 0x806BB160
    /* li r6, 0 */ // 0x806BB164
    /* li r7, -1 */ // 0x806BB168
    /* li r8, 0 */ // 0x806BB16C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r12 = *(0 + r31); // lwz @ 0x806BB174
    r3 = r31;
    /* li r4, 0x53 */ // 0x806BB17C
    /* li r5, 0 */ // 0x806BB180
    r12 = *(0x24 + r12); // lwz @ 0x806BB184
    /* mtctr r12 */ // 0x806BB188
    /* bctrl  */ // 0x806BB18C
    /* li r0, 2 */ // 0x806BB190
    *(0x310 + r31) = r0; // stw @ 0x806BB194
    /* b 0x806bb22c */ // 0x806BB198
    /* lis r3, 0 */ // 0x806BB19C
    r3 = *(0 + r3); // lwz @ 0x806BB1A0
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x806bb22c;
    /* lis r3, 0 */ // 0x806BB1B0
    r3 = *(0 + r3); // lwz @ 0x806BB1B4
    r3 = *(0 + r3); // lwz @ 0x806BB1B8
    r29 = *(0x144 + r3); // lwz @ 0x806BB1BC
    if (!=) goto 0x0x806bb1d0;
    /* li r29, 0 */ // 0x806BB1C8
    /* b 0x806bb224 */ // 0x806BB1CC
    /* lis r30, 0 */ // 0x806BB1D0
    r30 = r30 + 0; // 0x806BB1D4
    if (==) goto 0x0x806bb220;
    r12 = *(0 + r29); // lwz @ 0x806BB1DC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB1E4
    /* mtctr r12 */ // 0x806BB1E8
}