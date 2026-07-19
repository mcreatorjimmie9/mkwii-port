/* Function at 0x806C95BC, size=472 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806C95BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806C95C4
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806C95D4
    *(0x14 + r1) = r29; // stw @ 0x806C95D8
    *(0x10 + r1) = r28; // stw @ 0x806C95DC
    r3 = *(0 + r4); // lwz @ 0x806C95E0
    r3 = *(0 + r3); // lwz @ 0x806C95E4
    r30 = *(0x140 + r3); // lwz @ 0x806C95E8
    if (!=) goto 0x0x806c95fc;
    /* li r30, 0 */ // 0x806C95F4
    /* b 0x806c9650 */ // 0x806C95F8
    /* lis r29, 0 */ // 0x806C95FC
    r29 = r29 + 0; // 0x806C9600
    if (==) goto 0x0x806c964c;
    r12 = *(0 + r30); // lwz @ 0x806C9608
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C9610
    /* mtctr r12 */ // 0x806C9614
    /* bctrl  */ // 0x806C9618
    /* b 0x806c9634 */ // 0x806C961C
    if (!=) goto 0x0x806c9630;
    /* li r0, 1 */ // 0x806C9628
    /* b 0x806c9640 */ // 0x806C962C
    r3 = *(0 + r3); // lwz @ 0x806C9630
    if (!=) goto 0x0x806c9620;
    /* li r0, 0 */ // 0x806C963C
    if (==) goto 0x0x806c964c;
    /* b 0x806c9650 */ // 0x806C9648
    /* li r30, 0 */ // 0x806C964C
    r0 = *(0x270 + r30); // lwz @ 0x806C9650
    if (!=) goto 0x0x806c9774;
    /* lis r3, 0 */ // 0x806C965C
    r3 = *(0 + r3); // lwz @ 0x806C9660
    r3 = *(0 + r3); // lwz @ 0x806C9664
    r30 = *(0x14c + r3); // lwz @ 0x806C9668
    if (!=) goto 0x0x806c967c;
    /* li r30, 0 */ // 0x806C9674
    /* b 0x806c96d0 */ // 0x806C9678
    /* lis r29, 0 */ // 0x806C967C
    r29 = r29 + 0; // 0x806C9680
    if (==) goto 0x0x806c96cc;
    r12 = *(0 + r30); // lwz @ 0x806C9688
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C9690
    /* mtctr r12 */ // 0x806C9694
    /* bctrl  */ // 0x806C9698
    /* b 0x806c96b4 */ // 0x806C969C
    if (!=) goto 0x0x806c96b0;
    /* li r0, 1 */ // 0x806C96A8
    /* b 0x806c96c0 */ // 0x806C96AC
    r3 = *(0 + r3); // lwz @ 0x806C96B0
    if (!=) goto 0x0x806c96a0;
    /* li r0, 0 */ // 0x806C96BC
    if (==) goto 0x0x806c96cc;
    /* b 0x806c96d0 */ // 0x806C96C8
    /* li r30, 0 */ // 0x806C96CC
    r12 = *(0 + r30); // lwz @ 0x806C96D0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C96D8
    /* mtctr r12 */ // 0x806C96DC
    /* bctrl  */ // 0x806C96E0
    r3 = r30;
    /* li r4, 0x837 */ // 0x806C96E8
    /* li r5, 0 */ // 0x806C96EC
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r12 = *(0 + r30); // lwz @ 0x806C96F4
    r3 = r30;
    /* li r4, 0x869 */ // 0x806C96FC
    /* li r5, 0 */ // 0x806C9700
    r12 = *(0x68 + r12); // lwz @ 0x806C9704
    /* mtctr r12 */ // 0x806C9708
    /* bctrl  */ // 0x806C970C
    r0 = r31 + 0x80; // 0x806C9710
    *(0x188 + r30) = r0; // stw @ 0x806C9714
    /* lis r29, 0 */ // 0x806C9718
    /* lis r30, 0 */ // 0x806C971C
    r4 = *(0 + r29); // lwz @ 0x806C9720
    /* li r5, 4 */ // 0x806C9724
    r3 = *(0 + r30); // lwz @ 0x806C9728
    /* li r6, 0 */ // 0x806C972C
    r0 = *(0x36 + r4); // lha @ 0x806C9730
    /* li r7, 0 */ // 0x806C9734
    r3 = *(0x90 + r3); // lwz @ 0x806C9738
    /* clrlwi r28, r0, 0x18 */ // 0x806C973C
    r4 = r28;
    FUN_80684DF4(r7, r4); // bl 0x80684DF4
    r3 = *(0 + r29); // lwz @ 0x806C9748
    r4 = r28;
    FUN_805D6B20(r4, r4); // bl 0x805D6B20
    r3 = *(0 + r30); // lwz @ 0x806C9754
    r3 = *(0x90 + r3); // lwz @ 0x806C9758
    FUN_806845D0(r4); // bl 0x806845D0
    /* lis r4, 0 */ // 0x806C9760
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806C9768
    /* li r4, 0 */ // 0x806C976C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806C9774
    r31 = *(0x1c + r1); // lwz @ 0x806C9778
    r30 = *(0x18 + r1); // lwz @ 0x806C977C
    r29 = *(0x14 + r1); // lwz @ 0x806C9780
    r28 = *(0x10 + r1); // lwz @ 0x806C9784
    return;
}