/* Function at 0x80806560, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80806560(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80806578
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80806580
    r29 = r3;
    if (==) goto 0x0x80806598;
    r0 = *(0x14c + r3); // lwz @ 0x8080658C
    if (<=) goto 0x0x808065a0;
    r3 = r31;
    /* b 0x80806668 */ // 0x8080659C
    if (==) goto 0x0x808065bc;
    if (==) goto 0x0x80806604;
    if (==) goto 0x0x80806604;
    /* b 0x80806664 */ // 0x808065B8
    r0 = *(0xe0 + r3); // lwz @ 0x808065BC
    if (==) goto 0x0x80806664;
    r4 = *(8 + r3); // lwz @ 0x808065C8
    /* lis r3, 0 */ // 0x808065CC
    /* lis r5, 0 */ // 0x808065D0
    /* lfs f1, 0(r3) */ // 0x808065D4
    r3 = *(0x28 + r4); // lwz @ 0x808065D8
    /* li r4, 1 */ // 0x808065DC
    /* lfs f2, 0(r5) */ // 0x808065E0
    /* li r5, 1 */ // 0x808065E4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lis r3, 0 */ // 0x808065EC
    /* li r0, 1 */ // 0x808065F0
    r3 = *(0 + r3); // lwz @ 0x808065F4
    *(0xf4 + r29) = r3; // stw @ 0x808065F8
    *(0xf0 + r29) = r0; // stb @ 0x808065FC
    /* b 0x80806664 */ // 0x80806600
    r0 = *(0xe0 + r3); // lwz @ 0x80806604
    if (==) goto 0x0x80806664;
    r3 = r29;
    r4 = r7;
    r5 = r30 + 0x50; // 0x80806618
    /* li r6, 0 */ // 0x8080661C
    FUN_80806684(r3, r4, r5, r6); // bl 0x80806684
    r3 = *(0x108 + r29); // lwz @ 0x80806624
    r12 = *(0 + r3); // lwz @ 0x80806628
    r12 = *(0xc + r12); // lwz @ 0x8080662C
    /* mtctr r12 */ // 0x80806630
    /* bctrl  */ // 0x80806634
    r3 = *(0x108 + r29); // lwz @ 0x80806638
    r4 = r30 + 0x44; // 0x8080663C
    r12 = *(0 + r3); // lwz @ 0x80806640
    r12 = *(0x74 + r12); // lwz @ 0x80806644
    /* mtctr r12 */ // 0x80806648
    /* bctrl  */ // 0x8080664C
    r3 = *(0x108 + r29); // lwz @ 0x80806650
    r12 = *(0 + r3); // lwz @ 0x80806654
    r12 = *(0x80 + r12); // lwz @ 0x80806658
    /* mtctr r12 */ // 0x8080665C
    /* bctrl  */ // 0x80806660
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80806668
    r31 = *(0x1c + r1); // lwz @ 0x8080666C
    r30 = *(0x18 + r1); // lwz @ 0x80806670
    r29 = *(0x14 + r1); // lwz @ 0x80806674
    return;
}