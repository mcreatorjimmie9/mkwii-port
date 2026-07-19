/* Function at 0x8065D5FC, size=660 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_8065D5FC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8065D618
    *(0x10 + r1) = r28; // stw @ 0x8065D61C
    r5 = *(0x11ac + r3); // lwz @ 0x8065D620
    r0 = r5 + -0x15; // 0x8065D624
    if (<=) goto 0x0x8065d6e0;
    if (!=) goto 0x0x8065d7f4;
    /* lis r3, 0 */ // 0x8065D638
    r3 = *(0 + r3); // lwz @ 0x8065D63C
    r3 = *(0 + r3); // lwz @ 0x8065D640
    r28 = *(0x274 + r3); // lwz @ 0x8065D644
    if (!=) goto 0x0x8065d658;
    /* li r28, 0 */ // 0x8065D650
    /* b 0x8065d6ac */ // 0x8065D654
    /* lis r29, 0 */ // 0x8065D658
    r29 = r29 + 0; // 0x8065D65C
    if (==) goto 0x0x8065d6a8;
    r12 = *(0 + r28); // lwz @ 0x8065D664
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x8065D66C
    /* mtctr r12 */ // 0x8065D670
    /* bctrl  */ // 0x8065D674
    /* b 0x8065d690 */ // 0x8065D678
    if (!=) goto 0x0x8065d68c;
    /* li r0, 1 */ // 0x8065D684
    /* b 0x8065d69c */ // 0x8065D688
    r3 = *(0 + r3); // lwz @ 0x8065D68C
    if (!=) goto 0x0x8065d67c;
    /* li r0, 0 */ // 0x8065D698
    if (==) goto 0x0x8065d6a8;
    /* b 0x8065d6ac */ // 0x8065D6A4
    /* li r28, 0 */ // 0x8065D6A8
    r3 = r28;
    /* li r4, 1 */ // 0x8065D6B0
    FUN_806C2644(r3, r4); // bl 0x806C2644
    r3 = *(0x1108 + r30); // lwz @ 0x8065D6B8
    /* li r0, 0x9b */ // 0x8065D6BC
    *(0x354 + r28) = r3; // stw @ 0x8065D6C0
    r3 = r31;
    *(0x11a8 + r30) = r0; // stw @ 0x8065D6C8
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x8065D6D4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x8065d7f4 */ // 0x8065D6DC
    /* lis r3, 0 */ // 0x8065D6E0
    r3 = *(0 + r3); // lwz @ 0x8065D6E4
    r3 = *(0 + r3); // lwz @ 0x8065D6E8
    r28 = *(0x244 + r3); // lwz @ 0x8065D6EC
    if (!=) goto 0x0x8065d700;
    /* li r28, 0 */ // 0x8065D6F8
    /* b 0x8065d754 */ // 0x8065D6FC
    /* lis r29, 0 */ // 0x8065D700
    r29 = r29 + 0; // 0x8065D704
    if (==) goto 0x0x8065d750;
    r12 = *(0 + r28); // lwz @ 0x8065D70C
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x8065D714
    /* mtctr r12 */ // 0x8065D718
    /* bctrl  */ // 0x8065D71C
    /* b 0x8065d738 */ // 0x8065D720
    if (!=) goto 0x0x8065d734;
    /* li r0, 1 */ // 0x8065D72C
    /* b 0x8065d744 */ // 0x8065D730
    r3 = *(0 + r3); // lwz @ 0x8065D734
    if (!=) goto 0x0x8065d724;
    /* li r0, 0 */ // 0x8065D740
    if (==) goto 0x0x8065d750;
    /* b 0x8065d754 */ // 0x8065D74C
    /* li r28, 0 */ // 0x8065D750
    r0 = *(0x1108 + r30); // lwz @ 0x8065D754
    *(0x1cfc + r28) = r0; // stw @ 0x8065D758
    r3 = *(0x11ac + r30); // lwz @ 0x8065D75C
    r0 = r3 + -0x15; // 0x8065D760
    if (<=) goto 0x0x8065d780;
    if (<) goto 0x0x8065d794;
    if (<=) goto 0x0x8065d78c;
    /* b 0x8065d794 */ // 0x8065D77C
    /* li r0, 2 */ // 0x8065D780
    *(0x1cf4 + r28) = r0; // stw @ 0x8065D784
    /* b 0x8065d794 */ // 0x8065D788
    /* li r0, 3 */ // 0x8065D78C
    *(0x1cf4 + r28) = r0; // stw @ 0x8065D790
    r0 = *(0x11ac + r30); // lwz @ 0x8065D794
    if (==) goto 0x0x8065d7bc;
    if (==) goto 0x0x8065d7bc;
    if (==) goto 0x0x8065d7cc;
    if (==) goto 0x0x8065d7cc;
    /* b 0x8065d7d8 */ // 0x8065D7B8
    r3 = r28;
    /* li r4, 0 */ // 0x8065D7C0
    FUN_80679484(r3, r4); // bl 0x80679484
    /* b 0x8065d7d8 */ // 0x8065D7C8
    r3 = r28;
    /* li r4, 1 */ // 0x8065D7D0
    FUN_80679484(r4, r3, r4); // bl 0x80679484
    /* li r0, 0x8f */ // 0x8065D7D8
    *(0x11a8 + r30) = r0; // stw @ 0x8065D7DC
    r3 = r31;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x8065D7EC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x8065D7F4
    r3 = *(0 + r3); // lwz @ 0x8065D7F8
    r3 = *(0 + r3); // lwz @ 0x8065D7FC
    r28 = *(0x25c + r3); // lwz @ 0x8065D800
    if (!=) goto 0x0x8065d814;
    /* li r28, 0 */ // 0x8065D80C
    /* b 0x8065d868 */ // 0x8065D810
    /* lis r29, 0 */ // 0x8065D814
    r29 = r29 + 0; // 0x8065D818
    if (==) goto 0x0x8065d864;
    r12 = *(0 + r28); // lwz @ 0x8065D820
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x8065D828
    /* mtctr r12 */ // 0x8065D82C
    /* bctrl  */ // 0x8065D830
    /* b 0x8065d84c */ // 0x8065D834
    if (!=) goto 0x0x8065d848;
    /* li r0, 1 */ // 0x8065D840
    /* b 0x8065d858 */ // 0x8065D844
    r3 = *(0 + r3); // lwz @ 0x8065D848
    if (!=) goto 0x0x8065d838;
    /* li r0, 0 */ // 0x8065D854
    if (==) goto 0x0x8065d864;
    /* b 0x8065d868 */ // 0x8065D860
    /* li r28, 0 */ // 0x8065D864
    r3 = r28;
    FUN_806642AC(r3); // bl 0x806642AC
    r0 = *(0x24 + r1); // lwz @ 0x8065D870
    r31 = *(0x1c + r1); // lwz @ 0x8065D874
    r30 = *(0x18 + r1); // lwz @ 0x8065D878
    r29 = *(0x14 + r1); // lwz @ 0x8065D87C
    r28 = *(0x10 + r1); // lwz @ 0x8065D880
    return;
}