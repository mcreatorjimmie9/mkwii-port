/* Function at 0x80871704, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80871704(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x80871714
    r3 = r3 + r0; // 0x80871718
    *(0x1c + r1) = r31; // stw @ 0x8087171C
    *(0x18 + r1) = r30; // stw @ 0x80871720
    *(0x14 + r1) = r29; // stw @ 0x80871724
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8087172C
    r28 = r4;
    r30 = *(0x240 + r4); // lwz @ 0x80871734
    *(0x174 + r3) = r30; // stw @ 0x80871738
    if (!=) goto 0x0x80871748;
    /* li r3, 0 */ // 0x80871740
    /* b 0x808717a0 */ // 0x80871744
    /* lis r31, 0 */ // 0x80871748
    r31 = r31 + 0; // 0x8087174C
    if (==) goto 0x0x8087179c;
    r12 = *(0 + r28); // lwz @ 0x80871754
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x8087175C
    /* mtctr r12 */ // 0x80871760
    /* bctrl  */ // 0x80871764
    /* b 0x80871780 */ // 0x80871768
    if (!=) goto 0x0x8087177c;
    /* li r0, 1 */ // 0x80871774
    /* b 0x8087178c */ // 0x80871778
    r3 = *(0 + r3); // lwz @ 0x8087177C
    if (!=) goto 0x0x8087176c;
    /* li r0, 0 */ // 0x80871788
    if (==) goto 0x0x8087179c;
    r3 = r28;
    /* b 0x808717a0 */ // 0x80871798
    /* li r3, 0 */ // 0x8087179C
    r4 = r29;
    /* li r5, 0xb4 */ // 0x808717A4
    FUN_80872140(r3, r3, r4, r5); // bl 0x80872140
    /* li r3, 0x6b */ // 0x808717AC
    FUN_808B6A8C(r3, r4, r5, r3); // bl 0x808B6A8C
    r4 = r28;
    r5 = r30;
    r6 = r29;
    FUN_808B7C34(r3, r4, r5, r6); // bl 0x808B7C34
    r0 = *(0x24 + r1); // lwz @ 0x808717C4
    r31 = *(0x1c + r1); // lwz @ 0x808717C8
    r30 = *(0x18 + r1); // lwz @ 0x808717CC
    r29 = *(0x14 + r1); // lwz @ 0x808717D0
    r28 = *(0x10 + r1); // lwz @ 0x808717D4
    return;
}