/* Function at 0x8071D70C, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8071D70C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8071D714
    *(0xc + r1) = r31; // stw @ 0x8071D71C
    r31 = r4;
    r4 = r5;
    *(8 + r1) = r30; // stw @ 0x8071D728
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x8071D730
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DECC(r4); // bl 0x8061DECC
    if (==) goto 0x0x8071d770;
    r0 = *(0x30 + r30); // lbz @ 0x8071D744
    if (!=) goto 0x0x8071d770;
    r3 = *(0x14 + r30); // lwz @ 0x8071D750
    /* slwi r0, r31, 2 */ // 0x8071D754
    /* lwzx r3, r3, r0 */ // 0x8071D758
    r12 = *(0 + r3); // lwz @ 0x8071D75C
    r12 = *(0xc + r12); // lwz @ 0x8071D760
    /* mtctr r12 */ // 0x8071D764
    /* bctrl  */ // 0x8071D768
    /* b 0x8071d78c */ // 0x8071D76C
    r3 = *(0x18 + r30); // lwz @ 0x8071D770
    /* slwi r0, r31, 2 */ // 0x8071D774
    /* lwzx r3, r3, r0 */ // 0x8071D778
    r12 = *(0 + r3); // lwz @ 0x8071D77C
    r12 = *(0xc + r12); // lwz @ 0x8071D780
    /* mtctr r12 */ // 0x8071D784
    /* bctrl  */ // 0x8071D788
    r0 = *(0x14 + r1); // lwz @ 0x8071D78C
    r31 = *(0xc + r1); // lwz @ 0x8071D790
    r30 = *(8 + r1); // lwz @ 0x8071D794
    return;
}