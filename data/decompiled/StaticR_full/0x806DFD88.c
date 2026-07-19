/* Function at 0x806DFD88, size=956 bytes */
/* Stack frame: 416 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_806DFD88(int r3, int r4, int r5)
{
    /* Stack frame: -416(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x198 + r1) = r30; // stw @ 0x806DFD9C
    *(0x194 + r1) = r29; // stw @ 0x806DFDA0
    r4 = *(0x68 + r3); // lwz @ 0x806DFDA4
    r0 = r4 + -6; // 0x806DFDA8
    if (<=) goto 0x0x806e0180;
    if (==) goto 0x0x806dfdd0;
    if (==) goto 0x0x806dff08;
    if (==) goto 0x0x806dffec;
    /* b 0x806e0190 */ // 0x806DFDCC
    /* lis r3, 0 */ // 0x806DFDD0
    r3 = *(0 + r3); // lwz @ 0x806DFDD4
    r3 = *(0 + r3); // lwz @ 0x806DFDD8
    r29 = *(0x14c + r3); // lwz @ 0x806DFDDC
    if (!=) goto 0x0x806dfdf0;
    /* li r29, 0 */ // 0x806DFDE8
    /* b 0x806dfe44 */ // 0x806DFDEC
    /* lis r30, 0 */ // 0x806DFDF0
    r30 = r30 + 0; // 0x806DFDF4
    if (==) goto 0x0x806dfe40;
    r12 = *(0 + r29); // lwz @ 0x806DFDFC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFE04
    /* mtctr r12 */ // 0x806DFE08
    /* bctrl  */ // 0x806DFE0C
    /* b 0x806dfe28 */ // 0x806DFE10
    if (!=) goto 0x0x806dfe24;
    /* li r0, 1 */ // 0x806DFE1C
    /* b 0x806dfe34 */ // 0x806DFE20
    r3 = *(0 + r3); // lwz @ 0x806DFE24
    if (!=) goto 0x0x806dfe14;
    /* li r0, 0 */ // 0x806DFE30
    if (==) goto 0x0x806dfe40;
    /* b 0x806dfe44 */ // 0x806DFE3C
    /* li r29, 0 */ // 0x806DFE40
    r12 = *(0 + r29); // lwz @ 0x806DFE44
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806DFE4C
    /* mtctr r12 */ // 0x806DFE50
    /* bctrl  */ // 0x806DFE54
    r3 = r29;
    /* li r4, 0x189c */ // 0x806DFE5C
    /* li r5, 0 */ // 0x806DFE60
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    /* lis r3, 0 */ // 0x806DFE68
    r3 = *(0 + r3); // lwz @ 0x806DFE6C
    FUN_8070319C(r4, r5, r3); // bl 0x8070319C
    r30 = r3;
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r3 = r31 + 0x78; // 0x806DFE80
    /* li r4, 0 */ // 0x806DFE84
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    *(0x114 + r1) = r3; // stw @ 0x806DFE90
    if (>=) goto 0x0x806dfebc;
    *(0xcc + r1) = r30; // stw @ 0x806DFE98
    r3 = r29;
    /* li r4, 0x151c */ // 0x806DFEA4
    r12 = *(0 + r29); // lwz @ 0x806DFEA8
    r12 = *(0x68 + r12); // lwz @ 0x806DFEAC
    /* mtctr r12 */ // 0x806DFEB0
    /* bctrl  */ // 0x806DFEB4
    /* b 0x806dfed8 */ // 0x806DFEB8
    r12 = *(0 + r29); // lwz @ 0x806DFEBC
    r3 = r29;
    /* li r4, 0x151d */ // 0x806DFEC8
    r12 = *(0x68 + r12); // lwz @ 0x806DFECC
    /* mtctr r12 */ // 0x806DFED0
    /* bctrl  */ // 0x806DFED4
    r0 = r31 + 0x44; // 0x806DFED8
    *(0x188 + r29) = r0; // stw @ 0x806DFEDC
    r3 = r31;
    /* li r4, 0x51 */ // 0x806DFEE4
    r12 = *(0 + r31); // lwz @ 0x806DFEE8
    /* li r5, 0 */ // 0x806DFEEC
    r12 = *(0x24 + r12); // lwz @ 0x806DFEF0
    /* mtctr r12 */ // 0x806DFEF4
    /* bctrl  */ // 0x806DFEF8
    /* li r0, 6 */ // 0x806DFEFC
    *(0x68 + r31) = r0; // stw @ 0x806DFF00
    /* b 0x806e0190 */ // 0x806DFF04
    /* lis r3, 0 */ // 0x806DFF08
    r3 = *(0 + r3); // lwz @ 0x806DFF0C
    r3 = *(0 + r3); // lwz @ 0x806DFF10
    r29 = *(0x14c + r3); // lwz @ 0x806DFF14
    if (!=) goto 0x0x806dff28;
    /* li r29, 0 */ // 0x806DFF20
    /* b 0x806dff7c */ // 0x806DFF24
    /* lis r30, 0 */ // 0x806DFF28
    r30 = r30 + 0; // 0x806DFF2C
    if (==) goto 0x0x806dff78;
    r12 = *(0 + r29); // lwz @ 0x806DFF34
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFF3C
    /* mtctr r12 */ // 0x806DFF40
    /* bctrl  */ // 0x806DFF44
    /* b 0x806dff60 */ // 0x806DFF48
    if (!=) goto 0x0x806dff5c;
    /* li r0, 1 */ // 0x806DFF54
    /* b 0x806dff6c */ // 0x806DFF58
    r3 = *(0 + r3); // lwz @ 0x806DFF5C
    if (!=) goto 0x0x806dff4c;
    /* li r0, 0 */ // 0x806DFF68
    if (==) goto 0x0x806dff78;
    /* b 0x806dff7c */ // 0x806DFF74
    /* li r29, 0 */ // 0x806DFF78
    r12 = *(0 + r29); // lwz @ 0x806DFF7C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806DFF84
    /* mtctr r12 */ // 0x806DFF88
    /* bctrl  */ // 0x806DFF8C
    r3 = r29;
    /* li r4, 0x189c */ // 0x806DFF94
    /* li r5, 0 */ // 0x806DFF98
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r12 = *(0 + r29); // lwz @ 0x806DFFA0
    r3 = r29;
    /* li r4, 0x151e */ // 0x806DFFA8
    /* li r5, 0 */ // 0x806DFFAC
    r12 = *(0x68 + r12); // lwz @ 0x806DFFB0
    /* mtctr r12 */ // 0x806DFFB4
    /* bctrl  */ // 0x806DFFB8
    r0 = r31 + 0x44; // 0x806DFFBC
    *(0x188 + r29) = r0; // stw @ 0x806DFFC0
    r3 = r31;
    /* li r4, 0x51 */ // 0x806DFFC8
    r12 = *(0 + r31); // lwz @ 0x806DFFCC
    /* li r5, 0 */ // 0x806DFFD0
    r12 = *(0x24 + r12); // lwz @ 0x806DFFD4
    /* mtctr r12 */ // 0x806DFFD8
    /* bctrl  */ // 0x806DFFDC
    /* li r0, 7 */ // 0x806DFFE0
    *(0x68 + r31) = r0; // stw @ 0x806DFFE4
    /* b 0x806e0190 */ // 0x806DFFE8
    /* lis r3, 0 */ // 0x806DFFEC
    r3 = *(0 + r3); // lwz @ 0x806DFFF0
    r3 = *(0 + r3); // lwz @ 0x806DFFF4
    r29 = *(0x14c + r3); // lwz @ 0x806DFFF8
    if (!=) goto 0x0x806e000c;
    /* li r29, 0 */ // 0x806E0004
    /* b 0x806e0060 */ // 0x806E0008
    /* lis r30, 0 */ // 0x806E000C
    r30 = r30 + 0; // 0x806E0010
    if (==) goto 0x0x806e005c;
    r12 = *(0 + r29); // lwz @ 0x806E0018
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806E0020
    /* mtctr r12 */ // 0x806E0024
    /* bctrl  */ // 0x806E0028
    /* b 0x806e0044 */ // 0x806E002C
    if (!=) goto 0x0x806e0040;
    /* li r0, 1 */ // 0x806E0038
    /* b 0x806e0050 */ // 0x806E003C
    r3 = *(0 + r3); // lwz @ 0x806E0040
    if (!=) goto 0x0x806e0030;
    /* li r0, 0 */ // 0x806E004C
    if (==) goto 0x0x806e005c;
    /* b 0x806e0060 */ // 0x806E0058
    /* li r29, 0 */ // 0x806E005C
    r12 = *(0 + r29); // lwz @ 0x806E0060
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806E0068
    /* mtctr r12 */ // 0x806E006C
    /* bctrl  */ // 0x806E0070
    /* lis r3, 0 */ // 0x806E0074
    /* li r30, 0 */ // 0x806E0078
    r3 = *(0 + r3); // lwz @ 0x806E007C
    FUN_806F5918(r3); // bl 0x806F5918
    if (>) goto 0x0x806e010c;
    /* lis r4, 0 */ // 0x806E008C
    /* slwi r0, r3, 2 */ // 0x806E0090
    r4 = r4 + 0; // 0x806E0094
    /* lwzx r4, r4, r0 */ // 0x806E0098
    /* mtctr r4 */ // 0x806E009C
    /* bctr  */ // 0x806E00A0
    /* li r30, 0x18a6 */ // 0x806E00A4
    /* b 0x806e010c */ // 0x806E00A8
    /* li r30, 0x18a7 */ // 0x806E00AC
    /* b 0x806e010c */ // 0x806E00B0
    /* li r30, 0x18a8 */ // 0x806E00B4
    /* b 0x806e010c */ // 0x806E00B8
    /* li r30, 0x18a9 */ // 0x806E00BC
    /* b 0x806e010c */ // 0x806E00C0
    /* li r30, 0x18aa */ // 0x806E00C4
    /* b 0x806e010c */ // 0x806E00C8
    /* li r30, 0x18ab */ // 0x806E00CC
    /* b 0x806e010c */ // 0x806E00D0
    /* li r30, 0x18ad */ // 0x806E00D4
    /* b 0x806e010c */ // 0x806E00D8
    /* li r30, 0x815 */ // 0x806E00DC
    /* b 0x806e010c */ // 0x806E00E0
    /* lis r3, 0 */ // 0x806E00E4
    r3 = *(0 + r3); // lwz @ 0x806E00E8
    r3 = *(0x90 + r3); // lwz @ 0x806E00EC
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x806E00F4
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806E00FC
    /* li r4, -1 */ // 0x806E0100
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806e0190 */ // 0x806E0108
    FUN_80654ECC(r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806E0114
    r3 = *(0 + r3); // lwz @ 0x806E0118
    FUN_806F58F0(r3, r3); // bl 0x806F58F0
    *(8 + r1) = r3; // stw @ 0x806E0120
    r3 = r29;
    /* li r4, 0x189c */ // 0x806E0128
    /* li r5, 0 */ // 0x806E012C
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r12 = *(0 + r29); // lwz @ 0x806E0134
    r3 = r29;
    r4 = r30;
}