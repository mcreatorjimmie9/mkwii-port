/* Function at 0x808BAF28, size=612 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_808BAF28(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808BAF3C
    /* lis r30, 0 */ // 0x808BAF40
    *(0x14 + r1) = r29; // stw @ 0x808BAF44
    r3 = *(0 + r30); // lwz @ 0x808BAF48
    r3 = *(0 + r3); // lwz @ 0x808BAF4C
    r3 = *(0 + r3); // lwz @ 0x808BAF50
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808bb058;
    r3 = *(0 + r30); // lwz @ 0x808BAF60
    r3 = *(0 + r3); // lwz @ 0x808BAF64
    r29 = *(0x140 + r3); // lwz @ 0x808BAF68
    if (!=) goto 0x0x808baf7c;
    /* li r29, 0 */ // 0x808BAF74
    /* b 0x808bafd0 */ // 0x808BAF78
    /* lis r30, 0 */ // 0x808BAF7C
    r30 = r30 + 0; // 0x808BAF80
    if (==) goto 0x0x808bafcc;
    r12 = *(0 + r29); // lwz @ 0x808BAF88
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BAF90
    /* mtctr r12 */ // 0x808BAF94
    /* bctrl  */ // 0x808BAF98
    /* b 0x808bafb4 */ // 0x808BAF9C
    if (!=) goto 0x0x808bafb0;
    /* li r0, 1 */ // 0x808BAFA8
    /* b 0x808bafc0 */ // 0x808BAFAC
    r3 = *(0 + r3); // lwz @ 0x808BAFB0
    if (!=) goto 0x0x808bafa0;
    /* li r0, 0 */ // 0x808BAFBC
    if (==) goto 0x0x808bafcc;
    /* b 0x808bafd0 */ // 0x808BAFC8
    /* li r29, 0 */ // 0x808BAFCC
    r12 = *(0 + r29); // lwz @ 0x808BAFD0
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808BAFD8
    /* mtctr r12 */ // 0x808BAFDC
    /* bctrl  */ // 0x808BAFE0
    r3 = r29;
    /* li r4, 0x10fe */ // 0x808BAFE8
    /* li r5, 0 */ // 0x808BAFEC
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808BAFF8
    /* li r5, 0x10ff */ // 0x808BAFFC
    /* li r6, 0 */ // 0x808BB000
    /* li r7, -1 */ // 0x808BB004
    /* li r8, 0 */ // 0x808BB008
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808BB014
    /* li r5, 0x1100 */ // 0x808BB018
    /* li r6, 0 */ // 0x808BB01C
    /* li r7, -1 */ // 0x808BB020
    /* li r8, 0 */ // 0x808BB024
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808BB02C
    *(0x27c + r29) = r0; // stw @ 0x808BB030
    r3 = r31;
    /* li r4, 0x4e */ // 0x808BB038
    r12 = *(0 + r31); // lwz @ 0x808BB03C
    /* li r5, 0 */ // 0x808BB040
    r12 = *(0x24 + r12); // lwz @ 0x808BB044
    /* mtctr r12 */ // 0x808BB048
    /* bctrl  */ // 0x808BB04C
    *(0x23d8 + r31) = r3; // stw @ 0x808BB050
    /* b 0x808bb170 */ // 0x808BB054
    r4 = *(0 + r30); // lwz @ 0x808BB058
    r3 = *(0 + r4); // lwz @ 0x808BB05C
    r0 = *(0 + r3); // lwz @ 0x808BB060
    if (!=) goto 0x0x808bb160;
    r3 = *(0 + r4); // lwz @ 0x808BB06C
    r29 = *(0x140 + r3); // lwz @ 0x808BB070
    if (!=) goto 0x0x808bb084;
    /* li r29, 0 */ // 0x808BB07C
    /* b 0x808bb0d8 */ // 0x808BB080
    /* lis r30, 0 */ // 0x808BB084
    r30 = r30 + 0; // 0x808BB088
    if (==) goto 0x0x808bb0d4;
    r12 = *(0 + r29); // lwz @ 0x808BB090
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BB098
    /* mtctr r12 */ // 0x808BB09C
    /* bctrl  */ // 0x808BB0A0
    /* b 0x808bb0bc */ // 0x808BB0A4
    if (!=) goto 0x0x808bb0b8;
    /* li r0, 1 */ // 0x808BB0B0
    /* b 0x808bb0c8 */ // 0x808BB0B4
    r3 = *(0 + r3); // lwz @ 0x808BB0B8
    if (!=) goto 0x0x808bb0a8;
    /* li r0, 0 */ // 0x808BB0C4
    if (==) goto 0x0x808bb0d4;
    /* b 0x808bb0d8 */ // 0x808BB0D0
    /* li r29, 0 */ // 0x808BB0D4
    r12 = *(0 + r29); // lwz @ 0x808BB0D8
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808BB0E0
    /* mtctr r12 */ // 0x808BB0E4
    /* bctrl  */ // 0x808BB0E8
    r3 = r29;
    /* li r4, 0xd8e */ // 0x808BB0F0
    /* li r5, 0 */ // 0x808BB0F4
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808BB100
    /* li r5, 0x7d2 */ // 0x808BB104
    /* li r6, 0 */ // 0x808BB108
    /* li r7, -1 */ // 0x808BB10C
    /* li r8, 0 */ // 0x808BB110
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808BB11C
    /* li r5, 0x7d3 */ // 0x808BB120
    /* li r6, 0 */ // 0x808BB124
    /* li r7, -1 */ // 0x808BB128
    /* li r8, 0 */ // 0x808BB12C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x808BB134
    *(0x27c + r29) = r0; // stw @ 0x808BB138
    r3 = r31;
    /* li r4, 0x4e */ // 0x808BB140
    r12 = *(0 + r31); // lwz @ 0x808BB144
    /* li r5, 0 */ // 0x808BB148
    r12 = *(0x24 + r12); // lwz @ 0x808BB14C
    /* mtctr r12 */ // 0x808BB150
    /* bctrl  */ // 0x808BB154
    *(0x23d8 + r31) = r3; // stw @ 0x808BB158
    /* b 0x808bb170 */ // 0x808BB15C
    /* lis r4, 0 */ // 0x808BB160
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808BB168
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808BB170
    r31 = *(0x1c + r1); // lwz @ 0x808BB174
    r30 = *(0x18 + r1); // lwz @ 0x808BB178
    r29 = *(0x14 + r1); // lwz @ 0x808BB17C
    return;
}