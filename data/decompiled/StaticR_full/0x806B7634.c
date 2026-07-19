/* Function at 0x806B7634, size=540 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_806B7634(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x806B763C
    *(0xf4 + r1) = r0; // stw @ 0x806B7640
    /* stmw r27, 0xdc(r1) */ // 0x806B7644
    r27 = r3;
    r28 = r4;
    r3 = *(0 + r5); // lwz @ 0x806B7650
    r29 = *(0x68 + r3); // lwz @ 0x806B7654
    if (!=) goto 0x0x806b7688;
    r3 = r28;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r27); // lwz @ 0x806B7668
    r3 = r27;
    /* li r4, 2 */ // 0x806B7670
    /* li r5, 0 */ // 0x806B7674
    r12 = *(0x1c + r12); // lwz @ 0x806B7678
    /* mtctr r12 */ // 0x806B767C
    /* bctrl  */ // 0x806B7680
    /* b 0x806b783c */ // 0x806B7684
    /* lis r3, 0 */ // 0x806B7688
    r3 = *(0 + r3); // lwz @ 0x806B768C
    r3 = *(0 + r3); // lwz @ 0x806B7690
    r30 = *(0x13c + r3); // lwz @ 0x806B7694
    if (!=) goto 0x0x806b76a8;
    /* li r30, 0 */ // 0x806B76A0
    /* b 0x806b76fc */ // 0x806B76A4
    /* lis r31, 0 */ // 0x806B76A8
    r31 = r31 + 0; // 0x806B76AC
    if (==) goto 0x0x806b76f8;
    r12 = *(0 + r30); // lwz @ 0x806B76B4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806B76BC
    /* mtctr r12 */ // 0x806B76C0
    /* bctrl  */ // 0x806B76C4
    /* b 0x806b76e0 */ // 0x806B76C8
    if (!=) goto 0x0x806b76dc;
    /* li r0, 1 */ // 0x806B76D4
    /* b 0x806b76ec */ // 0x806B76D8
    r3 = *(0 + r3); // lwz @ 0x806B76DC
    if (!=) goto 0x0x806b76cc;
    /* li r0, 0 */ // 0x806B76E8
    if (==) goto 0x0x806b76f8;
    /* b 0x806b76fc */ // 0x806B76F4
    /* li r30, 0 */ // 0x806B76F8
    r12 = *(0 + r30); // lwz @ 0x806B76FC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806B7704
    /* mtctr r12 */ // 0x806B7708
    /* bctrl  */ // 0x806B770C
    /* lis r3, 0 */ // 0x806B7710
    r3 = *(0 + r3); // lwz @ 0x806B7718
    /* li r4, 0 */ // 0x806B7720
    FUN_805A0390(r3, r5, r6, r4); // bl 0x805A0390
    if (!=) goto 0x0x806b773c;
    /* li r0, 0 */ // 0x806B7730
    *(0xa + r1) = r0; // sth @ 0x806B7734
    *(8 + r1) = r0; // sth @ 0x806B7738
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0xa + r1); // lhz @ 0x806B7744
    *(0xc + r1) = r0; // stw @ 0x806B774C
    if (==) goto 0x0x806b7778;
    if (==) goto 0x0x806b7798;
    if (==) goto 0x0x806b77b8;
    if (==) goto 0x0x806b77d8;
    if (==) goto 0x0x806b77f8;
    /* b 0x806b7814 */ // 0x806B7774
    r12 = *(0 + r30); // lwz @ 0x806B7778
    r3 = r30;
    /* li r4, 0xa31 */ // 0x806B7780
    /* li r5, 0 */ // 0x806B7784
    r12 = *(0x68 + r12); // lwz @ 0x806B7788
    /* mtctr r12 */ // 0x806B778C
    /* bctrl  */ // 0x806B7790
    /* b 0x806b7814 */ // 0x806B7794
    r12 = *(0 + r30); // lwz @ 0x806B7798
    r3 = r30;
    /* li r4, 0xa32 */ // 0x806B77A4
    r12 = *(0x68 + r12); // lwz @ 0x806B77A8
    /* mtctr r12 */ // 0x806B77AC
    /* bctrl  */ // 0x806B77B0
    /* b 0x806b7814 */ // 0x806B77B4
    r12 = *(0 + r30); // lwz @ 0x806B77B8
    r3 = r30;
    /* li r4, 0xa33 */ // 0x806B77C0
    /* li r5, 0 */ // 0x806B77C4
    r12 = *(0x68 + r12); // lwz @ 0x806B77C8
    /* mtctr r12 */ // 0x806B77CC
    /* bctrl  */ // 0x806B77D0
    /* b 0x806b7814 */ // 0x806B77D4
    r12 = *(0 + r30); // lwz @ 0x806B77D8
    r3 = r30;
    /* li r4, 0xa34 */ // 0x806B77E0
    /* li r5, 0 */ // 0x806B77E4
    r12 = *(0x68 + r12); // lwz @ 0x806B77E8
    /* mtctr r12 */ // 0x806B77EC
    /* bctrl  */ // 0x806B77F0
    /* b 0x806b7814 */ // 0x806B77F4
    r12 = *(0 + r30); // lwz @ 0x806B77F8
    r3 = r30;
    /* li r4, 0xa35 */ // 0x806B7800
    /* li r5, 0 */ // 0x806B7804
    r12 = *(0x68 + r12); // lwz @ 0x806B7808
    /* mtctr r12 */ // 0x806B780C
    /* bctrl  */ // 0x806B7810
    r12 = *(0 + r27); // lwz @ 0x806B7814
    r3 = r27;
    /* li r4, 0x4d */ // 0x806B781C
    /* li r5, 0 */ // 0x806B7820
    r12 = *(0x24 + r12); // lwz @ 0x806B7824
    /* mtctr r12 */ // 0x806B7828
    /* bctrl  */ // 0x806B782C
    r3 = r28;
    /* li r4, 0 */ // 0x806B7834
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0xf4 + r1); // lwz @ 0x806B7840
    return;
}