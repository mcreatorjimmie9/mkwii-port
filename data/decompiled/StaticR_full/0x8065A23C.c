/* Function at 0x8065A23C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8065A23C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8065A244
    *(0x14 + r1) = r0; // stw @ 0x8065A248
    *(0xc + r1) = r31; // stw @ 0x8065A24C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065A254
    FUN_806EEE94(r4); // bl 0x806EEE94
    if (==) goto 0x0x8065a28c;
    r0 = *(8 + r31); // lbz @ 0x8065A264
    if (==) goto 0x0x8065a28c;
    r12 = *(0 + r31); // lwz @ 0x8065A270
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x8065A278
    /* mtctr r12 */ // 0x8065A27C
    /* bctrl  */ // 0x8065A280
    /* li r0, 0 */ // 0x8065A284
    *(8 + r31) = r0; // stb @ 0x8065A288
    r0 = *(0x14 + r1); // lwz @ 0x8065A28C
    r31 = *(0xc + r1); // lwz @ 0x8065A290
    return;
}