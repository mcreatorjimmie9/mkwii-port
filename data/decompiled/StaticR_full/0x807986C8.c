/* Function at 0x807986C8, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807986C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807986D8
    r30 = r3;
    r3 = *(0xdc + r3); // lwz @ 0x807986E0
    FUN_8061EA24(); // bl 0x8061EA24
    r31 = r3;
    r3 = *(0xdc + r30); // lwz @ 0x807986EC
    FUN_8061EA3C(); // bl 0x8061EA3C
    if (==) goto 0x0x80798780;
    if (==) goto 0x0x80798710;
    if (==) goto 0x0x80798724;
    /* b 0x80798738 */ // 0x8079870C
    /* lis r4, 0 */ // 0x80798710
    /* slwi r0, r3, 2 */ // 0x80798714
    r4 = r4 + 0; // 0x80798718
    /* lwzx r4, r4, r0 */ // 0x8079871C
    /* b 0x80798748 */ // 0x80798720
    /* lis r4, 0 */ // 0x80798724
    /* slwi r0, r3, 2 */ // 0x80798728
    r4 = r4 + 0; // 0x8079872C
    /* lwzx r4, r4, r0 */ // 0x80798730
    /* b 0x80798748 */ // 0x80798734
    /* lis r4, 0 */ // 0x80798738
    /* slwi r0, r3, 2 */ // 0x8079873C
    r4 = r4 + 0; // 0x80798740
    /* lwzx r4, r4, r0 */ // 0x80798744
    r12 = *(0 + r30); // lwz @ 0x80798748
    /* lis r5, 0 */ // 0x8079874C
    r3 = r30;
    /* lfs f1, 0(r5) */ // 0x80798754
    r12 = *(0xe0 + r12); // lwz @ 0x80798758
    /* mtctr r12 */ // 0x8079875C
    /* bctrl  */ // 0x80798760
    if (==) goto 0x0x80798780;
    r0 = *(0xf4 + r30); // lwz @ 0x8079876C
    if (==) goto 0x0x80798780;
    r4 = r0 | 1; // 0x80798778
    FUN_807A027C(); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x80798780
    r31 = *(0xc + r1); // lwz @ 0x80798784
    r30 = *(8 + r1); // lwz @ 0x80798788
    return;
}