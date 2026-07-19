/* Function at 0x806AAE20, size=1016 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806AAE20(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806AAE38
    *(0x10 + r1) = r28; // stw @ 0x806AAE3C
    r0 = *(0x54 + r3); // lbz @ 0x806AAE40
    if (!=) goto 0x0x806ab1f8;
    r0 = *(8 + r3); // lwz @ 0x806AAE4C
    if (!=) goto 0x0x806ab1f8;
    /* lis r3, 0 */ // 0x806AAE58
    r3 = *(0 + r3); // lwz @ 0x806AAE5C
    r3 = *(0x54 + r3); // lwz @ 0x806AAE60
    r0 = *(0x18 + r3); // lwz @ 0x806AAE64
    if (!=) goto 0x0x806aae84;
    /* lis r3, 0 */ // 0x806AAE70
    r3 = *(0 + r3); // lwz @ 0x806AAE74
    r0 = *(0x2d + r3); // lbz @ 0x806AAE78
    if (!=) goto 0x0x806ab1f8;
    /* lis r3, 0 */ // 0x806AAE84
    r3 = *(0 + r3); // lwz @ 0x806AAE88
    FUN_806E65CC(r3); // bl 0x806E65CC
    r0 = r3 + -4; // 0x806AAE90
    *(0xc + r1) = r4; // stw @ 0x806AAE94
    *(8 + r1) = r3; // stw @ 0x806AAE9C
    if (<=) goto 0x0x806aaec0;
    if (==) goto 0x0x806aaf3c;
    if (==) goto 0x0x806aaec0;
    if (==) goto 0x0x806aaf3c;
    /* b 0x806aaf04 */ // 0x806AAEBC
    /* lis r3, 0 */ // 0x806AAEC0
    /* lis r6, 0 */ // 0x806AAEC4
    r5 = *(0 + r3); // lwz @ 0x806AAEC8
    r3 = r30;
    r7 = *(8 + r1); // lwz @ 0x806AAED0
    /* li r4, 0x78 */ // 0x806AAED4
    r8 = *(0x98 + r5); // lwz @ 0x806AAED8
    /* li r5, 0 */ // 0x806AAEDC
    r0 = *(0xc + r1); // lwz @ 0x806AAEE0
    *(0x500 + r8) = r7; // stw @ 0x806AAEE4
    /* lfs f1, 0(r6) */ // 0x806AAEE8
    *(0x504 + r8) = r0; // stw @ 0x806AAEEC
    r12 = *(0 + r30); // lwz @ 0x806AAEF0
    r12 = *(0x1c + r12); // lwz @ 0x806AAEF4
    /* mtctr r12 */ // 0x806AAEF8
    /* bctrl  */ // 0x806AAEFC
    /* b 0x806aaf3c */ // 0x806AAF00
    /* lis r5, 0 */ // 0x806AAF04
    /* lis r6, 0 */ // 0x806AAF08
    r7 = *(0 + r5); // lwz @ 0x806AAF0C
    /* li r5, 0 */ // 0x806AAF10
    /* lfs f1, 0(r6) */ // 0x806AAF14
    r6 = *(0x98 + r7); // lwz @ 0x806AAF18
    *(0x500 + r6) = r3; // stw @ 0x806AAF1C
    r3 = r30;
    *(0x504 + r6) = r4; // stw @ 0x806AAF24
    /* li r4, 0x78 */ // 0x806AAF28
    r12 = *(0 + r30); // lwz @ 0x806AAF2C
    r12 = *(0x1c + r12); // lwz @ 0x806AAF30
    /* mtctr r12 */ // 0x806AAF34
    /* bctrl  */ // 0x806AAF38
    /* lis r3, 0 */ // 0x806AAF3C
    r3 = *(0 + r3); // lwz @ 0x806AAF40
    r3 = *(0 + r3); // lwz @ 0x806AAF44
    r3 = *(0 + r3); // lwz @ 0x806AAF48
    FUN_80694774(r3); // bl 0x80694774
    if (!=) goto 0x0x806ab1f8;
    /* lis r3, 0 */ // 0x806AAF58
    /* lis r4, 0 */ // 0x806AAF5C
    r5 = *(0 + r3); // lwz @ 0x806AAF60
    /* li r0, 0 */ // 0x806AAF64
    r4 = *(0 + r4); // lwz @ 0x806AAF68
    r3 = *(0xb70 + r5); // lwz @ 0x806AAF6C
    if (<) goto 0x0x806aaf84;
    if (>) goto 0x0x806aaf84;
    /* li r0, 1 */ // 0x806AAF80
    if (==) goto 0x0x806aafc8;
    /* li r3, 0 */ // 0x806AAF90
    if (==) goto 0x0x806aafa4;
    r0 = *(0xb70 + r5); // lwz @ 0x806AAF98
    if (!=) goto 0x0x806aafa8;
    /* li r3, 1 */ // 0x806AAFA4
    if (==) goto 0x0x806aafbc;
    r3 = *(0x10 + r4); // lwz @ 0x806AAFB0
    r5 = *(0x114 + r3); // lbz @ 0x806AAFB4
    /* b 0x806aafcc */ // 0x806AAFB8
    r3 = *(0x10 + r4); // lwz @ 0x806AAFBC
    r5 = *(0x34 + r3); // lbz @ 0x806AAFC0
    /* b 0x806aafcc */ // 0x806AAFC4
    /* li r5, 0 */ // 0x806AAFC8
    /* lis r3, 0 */ // 0x806AAFCC
    /* neg r0, r5 */ // 0x806AAFD0
    r6 = *(0 + r3); // lwz @ 0x806AAFD4
    /* lis r4, 0 */ // 0x806AAFD8
    r3 = *(0 + r4); // lwz @ 0x806AAFDC
    r0 = r0 | r5; // 0x806AAFE0
    r6 = *(0 + r6); // lwz @ 0x806AAFE4
    /* srwi r4, r0, 0x1f */ // 0x806AAFE8
    r0 = *(1 + r3); // lbz @ 0x806AAFEC
    r5 = *(0 + r6); // lwz @ 0x806AAFF0
    r3 = r4 | r0; // 0x806AAFF4
    /* neg r0, r3 */ // 0x806AAFF8
    r0 = r0 | r3; // 0x806AB000
    /* srwi r31, r0, 0x1f */ // 0x806AB004
    if (<) goto 0x0x806ab014;
    if (<=) goto 0x0x806ab034;
    if (<) goto 0x0x806ab024;
    if (<=) goto 0x0x806ab034;
    if (<) goto 0x0x806ab124;
    if (>) goto 0x0x806ab124;
    r28 = *(0x380 + r6); // lwz @ 0x806AB034
    if (!=) goto 0x0x806ab048;
    /* li r28, 0 */ // 0x806AB040
    /* b 0x806ab09c */ // 0x806AB044
    /* lis r29, 0 */ // 0x806AB048
    r29 = r29 + 0; // 0x806AB04C
    if (==) goto 0x0x806ab098;
    r12 = *(0 + r28); // lwz @ 0x806AB054
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806AB05C
    /* mtctr r12 */ // 0x806AB060
    /* bctrl  */ // 0x806AB064
    /* b 0x806ab080 */ // 0x806AB068
    if (!=) goto 0x0x806ab07c;
    /* li r0, 1 */ // 0x806AB074
    /* b 0x806ab08c */ // 0x806AB078
    r3 = *(0 + r3); // lwz @ 0x806AB07C
    if (!=) goto 0x0x806ab06c;
    /* li r0, 0 */ // 0x806AB088
    if (==) goto 0x0x806ab098;
    /* b 0x806ab09c */ // 0x806AB094
    /* li r28, 0 */ // 0x806AB098
    if (!=) goto 0x0x806ab0ac;
    /* li r28, 0 */ // 0x806AB0A4
    /* b 0x806ab100 */ // 0x806AB0A8
    /* lis r29, 0 */ // 0x806AB0AC
    r29 = r29 + 0; // 0x806AB0B0
    if (==) goto 0x0x806ab0fc;
    r12 = *(0 + r28); // lwz @ 0x806AB0B8
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806AB0C0
    /* mtctr r12 */ // 0x806AB0C4
    /* bctrl  */ // 0x806AB0C8
    /* b 0x806ab0e4 */ // 0x806AB0CC
    if (!=) goto 0x0x806ab0e0;
    /* li r0, 1 */ // 0x806AB0D8
    /* b 0x806ab0f0 */ // 0x806AB0DC
    r3 = *(0 + r3); // lwz @ 0x806AB0E0
    if (!=) goto 0x0x806ab0d0;
    /* li r0, 0 */ // 0x806AB0EC
    if (==) goto 0x0x806ab0fc;
    /* b 0x806ab100 */ // 0x806AB0F8
    /* li r28, 0 */ // 0x806AB0FC
    if (==) goto 0x0x806ab124;
    r0 = *(8 + r28); // lwz @ 0x806AB108
    if (!=) goto 0x0x806ab124;
    r0 = *(0x20 + r28); // lwz @ 0x806AB114
    if (<=) goto 0x0x806ab124;
    /* li r31, 1 */ // 0x806AB120
    /* lis r3, 0 */ // 0x806AB124
    r3 = *(0 + r3); // lwz @ 0x806AB128
    r3 = *(0 + r3); // lwz @ 0x806AB12C
    r29 = *(0x128 + r3); // lwz @ 0x806AB130
    if (!=) goto 0x0x806ab144;
    /* li r29, 0 */ // 0x806AB13C
    /* b 0x806ab198 */ // 0x806AB140
    /* lis r28, 0 */ // 0x806AB144
    r28 = r28 + 0; // 0x806AB148
    if (==) goto 0x0x806ab194;
    r12 = *(0 + r29); // lwz @ 0x806AB150
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806AB158
    /* mtctr r12 */ // 0x806AB15C
    /* bctrl  */ // 0x806AB160
    /* b 0x806ab17c */ // 0x806AB164
    if (!=) goto 0x0x806ab178;
    /* li r0, 1 */ // 0x806AB170
    /* b 0x806ab188 */ // 0x806AB174
    r3 = *(0 + r3); // lwz @ 0x806AB178
    if (!=) goto 0x0x806ab168;
    /* li r0, 0 */ // 0x806AB184
    if (==) goto 0x0x806ab194;
    /* b 0x806ab198 */ // 0x806AB190
    /* li r29, 0 */ // 0x806AB194
    if (==) goto 0x0x806ab1bc;
    r0 = *(8 + r29); // lwz @ 0x806AB1A0
    if (!=) goto 0x0x806ab1bc;
    r0 = *(0x20 + r29); // lwz @ 0x806AB1AC
    if (<=) goto 0x0x806ab1bc;
    /* li r31, 1 */ // 0x806AB1B8
    if (==) goto 0x0x806ab1f8;
    /* lis r3, 0 */ // 0x806AB1C4
    r3 = *(0 + r3); // lwz @ 0x806AB1C8
    r3 = *(0 + r3); // lwz @ 0x806AB1CC
    FUN_80686240(r3); // bl 0x80686240
    r12 = *(0 + r30); // lwz @ 0x806AB1D4
    /* lis r5, 0 */ // 0x806AB1D8
    /* lfs f1, 0(r5) */ // 0x806AB1DC
    r3 = r30;
    r12 = *(0x1c + r12); // lwz @ 0x806AB1E4
    /* li r4, 0x79 */ // 0x806AB1E8
    /* li r5, 0 */ // 0x806AB1EC
    /* mtctr r12 */ // 0x806AB1F0
    /* bctrl  */ // 0x806AB1F4
    r0 = *(0x24 + r1); // lwz @ 0x806AB1F8
    r31 = *(0x1c + r1); // lwz @ 0x806AB1FC
    r30 = *(0x18 + r1); // lwz @ 0x806AB200
    r29 = *(0x14 + r1); // lwz @ 0x806AB204
    r28 = *(0x10 + r1); // lwz @ 0x806AB208
    return;
}