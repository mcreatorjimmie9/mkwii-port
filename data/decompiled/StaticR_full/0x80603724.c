/* Function at 0x80603724, size=304 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80603724(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80603738
    r30 = r4;
    r12 = *(0xc + r3); // lwz @ 0x80603740
    r4 = *(0x14 + r3); // lwz @ 0x80603744
    r12 = *(0x10 + r12); // lwz @ 0x80603748
    /* mtctr r12 */ // 0x8060374C
    /* bctrl  */ // 0x80603750
    r5 = *(0x14 + r31); // lwz @ 0x80603754
    r3 = r31;
    r4 = r30;
    FUN_80603A6C(r3, r4); // bl 0x80603A6C
    r3 = r31;
    FUN_8061E2BC(r3, r4, r3); // bl 0x8061E2BC
    r12 = *(0x20 + r3); // lwz @ 0x8060376C
    r5 = *(0x18 + r31); // lbz @ 0x80603770
    r12 = *(0x1c + r12); // lwz @ 0x80603774
    /* extsb r5, r5 */ // 0x80603778
    r4 = *(0x14 + r31); // lwz @ 0x8060377C
    /* mtctr r12 */ // 0x80603780
    /* bctrl  */ // 0x80603784
    r3 = r31;
    /* li r4, 0xb */ // 0x8060378C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r4 = *(0 + r31); // lwz @ 0x80603794
    /* li r3, 5 */ // 0x80603798
    /* li r0, 0 */ // 0x8060379C
    r5 = *(4 + r4); // lwz @ 0x806037A0
    r4 = *(8 + r5); // lwz @ 0x806037A4
    r4 = r4 | 0x40; // 0x806037A8
    *(8 + r5) = r4; // stw @ 0x806037AC
    *(0x38 + r31) = r3; // sth @ 0x806037B0
    r3 = *(0 + r31); // lwz @ 0x806037B4
    r3 = *(4 + r3); // lwz @ 0x806037B8
    *(0xa6 + r3) = r0; // sth @ 0x806037BC
    r3 = *(0 + r31); // lwz @ 0x806037C0
    r3 = *(0 + r3); // lwz @ 0x806037C4
    r4 = *(0x38 + r3); // lwz @ 0x806037C8
    if (==) goto 0x0x806037e0;
    r3 = *(0x10 + r4); // lwz @ 0x806037D4
    r0 = r3 + 1; // 0x806037D8
    *(0x10 + r4) = r0; // stw @ 0x806037DC
    r3 = r31;
    /* li r4, 3 */ // 0x806037E4
    /* li r5, 0 */ // 0x806037E8
    /* li r6, 1 */ // 0x806037EC
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r3 = *(0 + r31); // lwz @ 0x806037F4
    r3 = *(4 + r3); // lwz @ 0x806037F8
    r0 = *(0x14 + r3); // lwz @ 0x806037FC
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80603800
    if (==) goto 0x0x8060383c;
    r0 = *(0x14 + r31); // lwz @ 0x80603808
    r3 = r31;
    /* extsb r30, r0 */ // 0x80603810
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x54 + r3) = r30; // stb @ 0x80603818
    r3 = r31;
    r0 = *(0x18 + r31); // lbz @ 0x80603820
    /* extsb r30, r0 */ // 0x80603824
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x55 + r3) = r30; // stb @ 0x8060382C
    r3 = r31;
    /* li r4, 9 */ // 0x80603834
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r0 = *(0x14 + r1); // lwz @ 0x8060383C
    r31 = *(0xc + r1); // lwz @ 0x80603840
    r30 = *(8 + r1); // lwz @ 0x80603844
    return;
}