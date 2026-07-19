/* Function at 0x807987F8, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807987F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80798800
    *(0x14 + r1) = r0; // stw @ 0x80798804
    *(0xc + r1) = r31; // stw @ 0x80798808
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x80798810
    r0 = *(0x40 + r4); // lwz @ 0x80798814
    if (==) goto 0x0x80798890;
    r4 = *(0xdc + r3); // lwz @ 0x80798820
    r4 = *(0 + r4); // lwz @ 0x80798824
    r4 = *(4 + r4); // lwz @ 0x80798828
    r0 = *(4 + r4); // lwz @ 0x8079882C
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x80798830
    if (==) goto 0x0x80798890;
    r0 = *(0xc + r4); // lwz @ 0x80798838
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8079883C
    if (==) goto 0x0x80798890;
    r12 = *(0 + r3); // lwz @ 0x80798844
    r12 = *(0x138 + r12); // lwz @ 0x80798848
    /* mtctr r12 */ // 0x8079884C
    /* bctrl  */ // 0x80798850
    r12 = *(0 + r31); // lwz @ 0x80798854
    /* lis r5, 0 */ // 0x80798858
    r4 = r3;
    r3 = r31;
    r12 = *(0xe0 + r12); // lwz @ 0x80798864
    /* lfs f1, 0(r5) */ // 0x80798868
    /* mtctr r12 */ // 0x8079886C
    /* bctrl  */ // 0x80798870
    if (==) goto 0x0x80798890;
    r0 = *(0xf4 + r31); // lwz @ 0x8079887C
    if (==) goto 0x0x80798890;
    r4 = r0 | 1; // 0x80798888
    FUN_807A027C(); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x80798890
    r31 = *(0xc + r1); // lwz @ 0x80798894
    return;
}