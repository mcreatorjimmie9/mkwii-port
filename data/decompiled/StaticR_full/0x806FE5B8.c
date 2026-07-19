/* Function at 0x806FE5B8, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806FE5B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806FE5C4
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806FE5CC
    if (!=) goto 0x0x806fe61c;
    /* li r0, 0 */ // 0x806FE5D8
    *(0x1c + r3) = r0; // stw @ 0x806FE5DC
    r3 = *(0x758c + r3); // lwz @ 0x806FE5E0
    r12 = *(0x18 + r3); // lwz @ 0x806FE5E4
    r12 = *(0xc + r12); // lwz @ 0x806FE5E8
    /* mtctr r12 */ // 0x806FE5EC
    /* bctrl  */ // 0x806FE5F0
    if (!=) goto 0x0x806fe608;
    /* li r0, 1 */ // 0x806FE5FC
    *(0x20 + r31) = r0; // stb @ 0x806FE600
    /* b 0x806fe61c */ // 0x806FE604
    r3 = *(0x758c + r31); // lwz @ 0x806FE608
    r0 = *(4 + r3); // lwz @ 0x806FE60C
    *(0x1c + r31) = r0; // stw @ 0x806FE610
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fe620 */ // 0x806FE618
    /* li r3, 0 */ // 0x806FE61C
    if (==) goto 0x0x806fe638;
    /* li r0, 6 */ // 0x806FE628
    *(0x757c + r31) = r3; // stw @ 0x806FE62C
    *(0x14 + r31) = r0; // stw @ 0x806FE630
    /* b 0x806fe6e4 */ // 0x806FE634
    r4 = *(0x4220 + r31); // lwz @ 0x806FE638
    r3 = r31;
    r5 = *(0x420c + r31); // lwz @ 0x806FE640
    r6 = *(0x4210 + r31); // lwz @ 0x806FE644
    FUN_806FEA0C(r3); // bl 0x806FEA0C
    /* li r0, 0 */ // 0x806FE64C
    *(8 + r1) = r0; // stw @ 0x806FE650
    r3 = r31;
    r0 = *(0x4218 + r31); // lwz @ 0x806FE658
    r5 = *(0x4200 + r31); // lwz @ 0x806FE65C
    r6 = *(0x4204 + r31); // lwz @ 0x806FE664
    r7 = *(0x4208 + r31); // lwz @ 0x806FE668
    r8 = *(0x4220 + r31); // lwz @ 0x806FE66C
    r9 = *(0x4214 + r31); // lwz @ 0x806FE670
    if (==) goto 0x0x806fe680;
    /* b 0x806fe684 */ // 0x806FE67C
    /* li r10, 0 */ // 0x806FE680
    FUN_806FE734(r10, r10); // bl 0x806FE734
    if (==) goto 0x0x806fe6a0;
    /* li r0, 6 */ // 0x806FE690
    *(0x757c + r31) = r3; // stw @ 0x806FE694
    *(0x14 + r31) = r0; // stw @ 0x806FE698
    /* b 0x806fe6e4 */ // 0x806FE69C
    r0 = *(0x4210 + r31); // lwz @ 0x806FE6A0
    if (!=) goto 0x0x806fe6c0;
    /* addis r4, r31, 1 */ // 0x806FE6AC
    r3 = *(-0x7648 + r4); // lwz @ 0x806FE6B0
    r0 = r3 + 1; // 0x806FE6B4
    *(-0x7648 + r4) = r0; // stw @ 0x806FE6B8
    /* b 0x806fe6dc */ // 0x806FE6BC
    r0 = *(0x4218 + r31); // lwz @ 0x806FE6C0
    if (==) goto 0x0x806fe6dc;
    /* addis r4, r31, 1 */ // 0x806FE6CC
    r3 = *(-0x7504 + r4); // lwz @ 0x806FE6D0
    r0 = r3 + 1; // 0x806FE6D4
    *(-0x7504 + r4) = r0; // stw @ 0x806FE6D8
    /* li r0, 1 */ // 0x806FE6DC
    *(0x14 + r31) = r0; // stw @ 0x806FE6E0
    r0 = *(0x20 + r31); // lbz @ 0x806FE6E4
    if (==) goto 0x0x806fe720;
    r3 = *(0x758c + r31); // lwz @ 0x806FE6F0
    r12 = *(0x18 + r3); // lwz @ 0x806FE6F4
    r12 = *(0x10 + r12); // lwz @ 0x806FE6F8
    /* mtctr r12 */ // 0x806FE6FC
    /* bctrl  */ // 0x806FE700
    if (!=) goto 0x0x806fe718;
    /* li r0, 0 */ // 0x806FE70C
    *(0x20 + r31) = r0; // stb @ 0x806FE710
    /* b 0x806fe720 */ // 0x806FE714
    r3 = *(0x758c + r31); // lwz @ 0x806FE718
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x806FE720
    r31 = *(0x1c + r1); // lwz @ 0x806FE724
}