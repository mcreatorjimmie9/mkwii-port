/* Function at 0x808717E4, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808717E4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808717F8
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80871800
    r29 = r4;
    if (!=) goto 0x0x80871814;
    /* li r29, 0 */ // 0x8087180C
    /* b 0x80871868 */ // 0x80871810
    /* lis r31, 0 */ // 0x80871814
    r31 = r31 + 0; // 0x80871818
    if (==) goto 0x0x80871864;
    r12 = *(0 + r29); // lwz @ 0x80871820
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x80871828
    /* mtctr r12 */ // 0x8087182C
    /* bctrl  */ // 0x80871830
    /* b 0x8087184c */ // 0x80871834
    if (!=) goto 0x0x80871848;
    /* li r0, 1 */ // 0x80871840
    /* b 0x80871858 */ // 0x80871844
    r3 = *(0 + r3); // lwz @ 0x80871848
    if (!=) goto 0x0x80871838;
    /* li r0, 0 */ // 0x80871854
    if (==) goto 0x0x80871864;
    /* b 0x80871868 */ // 0x80871860
    /* li r29, 0 */ // 0x80871864
    r3 = r29;
    r4 = r30;
    FUN_80871F0C(r3, r4); // bl 0x80871F0C
    r0 = *(0x24 + r1); // lwz @ 0x80871874
    r31 = *(0x1c + r1); // lwz @ 0x80871878
    r30 = *(0x18 + r1); // lwz @ 0x8087187C
    r29 = *(0x14 + r1); // lwz @ 0x80871880
    return;
}