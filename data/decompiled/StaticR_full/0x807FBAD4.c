/* Function at 0x807FBAD4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FBAD4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FBAE0
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807FBAE8
    r12 = *(0 + r3); // lwz @ 0x807FBAEC
    r12 = *(0x14 + r12); // lwz @ 0x807FBAF0
    /* mtctr r12 */ // 0x807FBAF4
    /* bctrl  */ // 0x807FBAF8
    r6 = *(0x20 + r31); // lwz @ 0x807FBAFC
    /* lis r5, 0 */ // 0x807FBB00
    r0 = *(0x2c + r31); // lhz @ 0x807FBB04
    r3 = r31;
    /* lfs f3, 0x20(r6) */ // 0x807FBB0C
    /* li r4, 0x240 */ // 0x807FBB10
    /* lfs f2, 0x1c(r6) */ // 0x807FBB14
    r0 = r0 | 1; // 0x807FBB18
    /* lfs f0, 0x18(r6) */ // 0x807FBB1C
    /* stfs f0, 0x30(r31) */ // 0x807FBB20
    /* lfs f1, 0(r5) */ // 0x807FBB24
    *(0x2c + r31) = r0; // sth @ 0x807FBB28
    /* stfs f2, 0x34(r31) */ // 0x807FBB2C
    /* stfs f3, 0x38(r31) */ // 0x807FBB30
    FUN_808A0AA8(); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x807FBB38
    r31 = *(0xc + r1); // lwz @ 0x807FBB3C
    return;
}