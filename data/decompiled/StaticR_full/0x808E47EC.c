/* Function at 0x808E47EC, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808E47EC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808E4800
    *(0x14 + r1) = r29; // stw @ 0x808E4804
    r0 = *(8 + r3); // lwz @ 0x808E4808
    if (!=) goto 0x0x808e492c;
    r3 = *(0x1754 + r3); // lwz @ 0x808E4814
    if (==) goto 0x0x808e482c;
    r0 = *(8 + r3); // lwz @ 0x808E4820
    if (!=) goto 0x0x808e492c;
    /* lis r30, 0 */ // 0x808E482C
    r3 = *(0 + r30); // lwz @ 0x808E4830
    r3 = *(0 + r3); // lwz @ 0x808E4834
    r3 = *(0 + r3); // lwz @ 0x808E4838
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e492c;
    r4 = *(0x1758 + r31); // lwz @ 0x808E4848
    /* lis r3, 0 */ // 0x808E484C
    /* lfs f0, 0(r3) */ // 0x808E4850
    /* lfs f1, 0(r4) */ // 0x808E4854
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808E4858
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808E485C
    /* mfcr r0 */ // 0x808E4860
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808E4864
    if (==) goto 0x0x808e492c;
    r3 = *(0 + r30); // lwz @ 0x808E486C
    r3 = *(0 + r3); // lwz @ 0x808E4870
    r29 = *(0x250 + r3); // lwz @ 0x808E4874
    if (!=) goto 0x0x808e4888;
    /* li r29, 0 */ // 0x808E4880
    /* b 0x808e48dc */ // 0x808E4884
    /* lis r30, 0 */ // 0x808E4888
    r30 = r30 + 0; // 0x808E488C
    if (==) goto 0x0x808e48d8;
    r12 = *(0 + r29); // lwz @ 0x808E4894
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E489C
    /* mtctr r12 */ // 0x808E48A0
    /* bctrl  */ // 0x808E48A4
    /* b 0x808e48c0 */ // 0x808E48A8
    if (!=) goto 0x0x808e48bc;
    /* li r0, 1 */ // 0x808E48B4
    /* b 0x808e48cc */ // 0x808E48B8
    r3 = *(0 + r3); // lwz @ 0x808E48BC
    if (!=) goto 0x0x808e48ac;
    /* li r0, 0 */ // 0x808E48C8
    if (==) goto 0x0x808e48d8;
    /* b 0x808e48dc */ // 0x808E48D4
    /* li r29, 0 */ // 0x808E48D8
    r3 = r29;
    /* li r4, -1 */ // 0x808E48E0
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    r3 = *(0x1754 + r31); // lwz @ 0x808E48E8
    if (==) goto 0x0x808e4910;
    r0 = *(8 + r3); // lwz @ 0x808E48F4
    if (!=) goto 0x0x808e4910;
    /* lis r4, 0 */ // 0x808E4900
    /* lfs f1, 0(r4) */ // 0x808E4904
    /* li r4, -1 */ // 0x808E4908
    FUN_80671C48(r4, r4); // bl 0x80671C48
    /* lis r4, 0 */ // 0x808E4910
    /* li r0, -1 */ // 0x808E4914
    /* lfs f1, 0(r4) */ // 0x808E4918
    r3 = r31;
    *(0x3e8 + r31) = r0; // stw @ 0x808E4920
    /* li r4, 0 */ // 0x808E4924
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808E492C
    r31 = *(0x1c + r1); // lwz @ 0x808E4930
    r30 = *(0x18 + r1); // lwz @ 0x808E4934
    r29 = *(0x14 + r1); // lwz @ 0x808E4938
    return;
}