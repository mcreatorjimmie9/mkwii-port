/* Function at 0x806A4740, size=460 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 14 function(s) */

int FUN_806A4740(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806A4754
    r29 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = *(0x64 + r29); // lwz @ 0x806A4760
    r3 = *(0xc + r3); // lwz @ 0x806A4764
    r30 = *(0x38 + r3); // lwz @ 0x806A4768
    if (!=) goto 0x0x806a477c;
    /* li r30, 0 */ // 0x806A4774
    /* b 0x806a47d0 */ // 0x806A4778
    /* lis r31, 0 */ // 0x806A477C
    r31 = r31 + 0; // 0x806A4780
    if (==) goto 0x0x806a47cc;
    r12 = *(0 + r30); // lwz @ 0x806A4788
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x806A4790
    /* mtctr r12 */ // 0x806A4794
    /* bctrl  */ // 0x806A4798
    /* b 0x806a47b4 */ // 0x806A479C
    if (!=) goto 0x0x806a47b0;
    /* li r0, 1 */ // 0x806A47A8
    /* b 0x806a47c0 */ // 0x806A47AC
    r3 = *(0 + r3); // lwz @ 0x806A47B0
    if (!=) goto 0x0x806a47a0;
    /* li r0, 0 */ // 0x806A47BC
    if (==) goto 0x0x806a47cc;
    /* b 0x806a47d0 */ // 0x806A47C8
    /* li r30, 0 */ // 0x806A47CC
    r3 = *(0x54 + r30); // lwz @ 0x806A47D0
    r0 = r29 + 0x174; // 0x806A47D4
    /* li r5, 0 */ // 0x806A47D8
    if (!=) goto 0x0x806a47ec;
    /* li r5, 1 */ // 0x806A47E4
    /* b 0x806a483c */ // 0x806A47E8
    r3 = *(0xb0 + r30); // lwz @ 0x806A47EC
    if (!=) goto 0x0x806a4800;
    /* li r5, 1 */ // 0x806A47F8
    /* b 0x806a483c */ // 0x806A47FC
    r3 = *(0x10c + r30); // lwz @ 0x806A4800
    r4 = r30 + 0xb8; // 0x806A4804
    if (!=) goto 0x0x806a4818;
    /* li r5, 1 */ // 0x806A4810
    /* b 0x806a483c */ // 0x806A4814
    r3 = *(0xb0 + r4); // lwz @ 0x806A4818
    if (!=) goto 0x0x806a482c;
    /* li r5, 1 */ // 0x806A4824
    /* b 0x806a483c */ // 0x806A4828
    r3 = *(0x10c + r4); // lwz @ 0x806A482C
    if (!=) goto 0x0x806a483c;
    /* li r5, 1 */ // 0x806A4838
    if (==) goto 0x0x806a4864;
    r3 = r29 + 0x98; // 0x806A4844
    /* li r4, 0 */ // 0x806A4848
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A4850
    /* li r4, 2 */ // 0x806A4854
    /* lfs f1, 0(r5) */ // 0x806A4858
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x806a4880 */ // 0x806A4860
    r3 = r29 + 0x98; // 0x806A4864
    /* li r4, 0 */ // 0x806A4868
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A4870
    /* li r4, 0 */ // 0x806A4874
    /* lfs f1, 0(r5) */ // 0x806A4878
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x806A4880
    /* li r4, 1 */ // 0x806A4884
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A488C
    /* li r4, 0 */ // 0x806A4890
    /* lfs f1, 0(r31) */ // 0x806A4894
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x806A489C
    /* li r4, 2 */ // 0x806A48A0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A48A8
    /* li r4, 0 */ // 0x806A48AC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x806A48B4
    /* li r4, 3 */ // 0x806A48B8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A48C0
    /* li r4, 1 */ // 0x806A48C4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x806A48CC
    /* li r4, 4 */ // 0x806A48D0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A48D8
    /* li r4, 1 */ // 0x806A48DC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r4 = *(0x288 + r29); // lwz @ 0x806A48E4
    r3 = r29 + 0x174; // 0x806A48E8
    FUN_806692E0(r4, r3); // bl 0x806692E0
    r0 = *(0x24 + r1); // lwz @ 0x806A48F0
    r31 = *(0x1c + r1); // lwz @ 0x806A48F4
    r30 = *(0x18 + r1); // lwz @ 0x806A48F8
    r29 = *(0x14 + r1); // lwz @ 0x806A48FC
    return;
}