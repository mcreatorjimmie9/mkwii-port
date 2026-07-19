/* Function at 0x807EE770, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EE770(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EE77C
    r31 = r3;
    FUN_808A8DEC(); // bl 0x808A8DEC
    r0 = *(0xc8 + r31); // lwz @ 0x807EE788
    if (==) goto 0x0x807ee7a0;
    if (==) goto 0x0x807ee7d0;
    /* b 0x807ee854 */ // 0x807EE79C
    r12 = *(0 + r31); // lwz @ 0x807EE7A0
    r3 = r31;
    /* li r4, 0 */ // 0x807EE7A8
    r12 = *(0x68 + r12); // lwz @ 0x807EE7AC
    /* mtctr r12 */ // 0x807EE7B0
    /* bctrl  */ // 0x807EE7B4
    r12 = *(0 + r31); // lwz @ 0x807EE7B8
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x807EE7C0
    /* mtctr r12 */ // 0x807EE7C4
    /* bctrl  */ // 0x807EE7C8
    /* b 0x807ee854 */ // 0x807EE7CC
    r12 = *(0 + r31); // lwz @ 0x807EE7D0
    r3 = r31;
    /* li r4, 1 */ // 0x807EE7D8
    r12 = *(0x68 + r12); // lwz @ 0x807EE7DC
    /* mtctr r12 */ // 0x807EE7E0
    /* bctrl  */ // 0x807EE7E4
    r12 = *(0 + r31); // lwz @ 0x807EE7E8
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807EE7F0
    /* mtctr r12 */ // 0x807EE7F4
    /* bctrl  */ // 0x807EE7F8
    r3 = *(0x20 + r31); // lwz @ 0x807EE7FC
    r12 = *(0 + r3); // lwz @ 0x807EE800
    r12 = *(0x14 + r12); // lwz @ 0x807EE804
    /* mtctr r12 */ // 0x807EE808
    /* bctrl  */ // 0x807EE80C
    if (!=) goto 0x0x807ee820;
    /* li r0, 0 */ // 0x807EE818
    *(0xc8 + r31) = r0; // stw @ 0x807EE81C
    r4 = *(0x20 + r31); // lwz @ 0x807EE820
    /* lis r3, 0 */ // 0x807EE824
    r0 = *(0x2c + r31); // lhz @ 0x807EE828
    /* lfs f2, 0x1c(r4) */ // 0x807EE82C
    /* lfs f0, 0(r3) */ // 0x807EE830
    r0 = r0 | 1; // 0x807EE834
    /* lfs f3, 0x20(r4) */ // 0x807EE838
    /* lfs f1, 0x18(r4) */ // 0x807EE83C
    /* fadds f0, f0, f2 */ // 0x807EE840
    /* stfs f1, 0x30(r31) */ // 0x807EE844
    /* stfs f3, 0x38(r31) */ // 0x807EE848
    *(0x2c + r31) = r0; // sth @ 0x807EE84C
    /* stfs f0, 0x34(r31) */ // 0x807EE850
    r0 = *(0x14 + r1); // lwz @ 0x807EE854
    r31 = *(0xc + r1); // lwz @ 0x807EE858
    return;
}