/* Function at 0x806C864C, size=380 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806C864C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C8654
    *(0x18 + r1) = r30; // stw @ 0x806C8660
    *(0x14 + r1) = r29; // stw @ 0x806C8664
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806C866C
    r3 = *(0 + r3); // lwz @ 0x806C8670
    r30 = *(0x14c + r3); // lwz @ 0x806C8674
    if (!=) goto 0x0x806c8688;
    /* li r30, 0 */ // 0x806C8680
    /* b 0x806c86dc */ // 0x806C8684
    /* lis r31, 0 */ // 0x806C8688
    r31 = r31 + 0; // 0x806C868C
    if (==) goto 0x0x806c86d8;
    r12 = *(0 + r30); // lwz @ 0x806C8694
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C869C
    /* mtctr r12 */ // 0x806C86A0
    /* bctrl  */ // 0x806C86A4
    /* b 0x806c86c0 */ // 0x806C86A8
    if (!=) goto 0x0x806c86bc;
    /* li r0, 1 */ // 0x806C86B4
    /* b 0x806c86cc */ // 0x806C86B8
    r3 = *(0 + r3); // lwz @ 0x806C86BC
    if (!=) goto 0x0x806c86ac;
    /* li r0, 0 */ // 0x806C86C8
    if (==) goto 0x0x806c86d8;
    /* b 0x806c86dc */ // 0x806C86D4
    /* li r30, 0 */ // 0x806C86D8
    r12 = *(0 + r30); // lwz @ 0x806C86DC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C86E4
    /* mtctr r12 */ // 0x806C86E8
    /* bctrl  */ // 0x806C86EC
    /* lis r3, 0 */ // 0x806C86F0
    r3 = *(0 + r3); // lwz @ 0x806C86F4
    r3 = *(0 + r3); // lwz @ 0x806C86F8
    r0 = *(0 + r3); // lwz @ 0x806C86FC
    if (<) goto 0x0x806c8710;
    if (<=) goto 0x0x806c872c;
    if (!=) goto 0x0x806c873c;
    r3 = r30;
    /* li r4, 0x836 */ // 0x806C871C
    /* li r5, 0 */ // 0x806C8720
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    /* b 0x806c873c */ // 0x806C8728
    r3 = r30;
    /* li r4, 0x898 */ // 0x806C8730
    /* li r5, 0 */ // 0x806C8734
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r3 = r29 + 0x634; // 0x806C873C
    /* li r4, 0 */ // 0x806C8740
    FUN_8066E0EC(r4, r5, r3, r4); // bl 0x8066E0EC
    r0 = *(0xa5 + r3); // lbz @ 0x806C8748
    if (==) goto 0x0x806c8774;
    r12 = *(0 + r30); // lwz @ 0x806C8754
    r3 = r30;
    /* li r4, 0x814 */ // 0x806C875C
    /* li r5, 0 */ // 0x806C8760
    r12 = *(0x68 + r12); // lwz @ 0x806C8764
    /* mtctr r12 */ // 0x806C8768
    /* bctrl  */ // 0x806C876C
    /* b 0x806c8790 */ // 0x806C8770
    r12 = *(0 + r30); // lwz @ 0x806C8774
    r3 = r30;
    /* li r4, 0x813 */ // 0x806C877C
    /* li r5, 0 */ // 0x806C8780
    r12 = *(0x68 + r12); // lwz @ 0x806C8784
    /* mtctr r12 */ // 0x806C8788
    /* bctrl  */ // 0x806C878C
    /* lis r4, 0 */ // 0x806C8790
    r0 = r29 + 0x80; // 0x806C8794
    /* lfs f1, 0(r4) */ // 0x806C8798
    r3 = r29;
    *(0x188 + r30) = r0; // stw @ 0x806C87A0
    /* li r4, 0 */ // 0x806C87A4
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806C87AC
    r31 = *(0x1c + r1); // lwz @ 0x806C87B0
    r30 = *(0x18 + r1); // lwz @ 0x806C87B4
    r29 = *(0x14 + r1); // lwz @ 0x806C87B8
    return;
}