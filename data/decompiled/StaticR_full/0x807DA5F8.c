/* Function at 0x807DA5F8, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807DA5F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807DA600
    /* li r31, 0 */ // 0x807DA60C
    *(0x18 + r1) = r30; // stw @ 0x807DA610
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807DA618
    r29 = r3;
    r0 = *(0x10 + r4); // lbz @ 0x807DA620
    *(8 + r1) = r0; // stb @ 0x807DA628
    r3 = *(0 + r5); // lwz @ 0x807DA62C
    FUN_805A7238(r4); // bl 0x805A7238
    /* clrlwi r0, r3, 0x18 */ // 0x807DA634
    *(0x14 + r30) = r0; // stw @ 0x807DA638
    if (<=) goto 0x0x807da66c;
    r0 = *(0x1e + r30); // lbz @ 0x807DA644
    if (!=) goto 0x0x807da66c;
    r12 = *(0 + r29); // lwz @ 0x807DA650
    r3 = r29;
    r4 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x807DA65C
    /* mtctr r12 */ // 0x807DA660
    /* bctrl  */ // 0x807DA664
    r31 = r3;
    /* lis r3, 0 */ // 0x807DA66C
    r3 = *(0 + r3); // lwz @ 0x807DA674
    /* clrlwi r5, r31, 0x18 */ // 0x807DA678
    FUN_805A71BC(r3, r4); // bl 0x805A71BC
    /* clrlwi r0, r31, 0x18 */ // 0x807DA680
    *(0x18 + r30) = r0; // stw @ 0x807DA684
    r31 = *(0x1c + r1); // lwz @ 0x807DA688
    r30 = *(0x18 + r1); // lwz @ 0x807DA68C
    r29 = *(0x14 + r1); // lwz @ 0x807DA690
    r0 = *(0x24 + r1); // lwz @ 0x807DA694
    return;
}