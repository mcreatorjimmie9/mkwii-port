/* Function at 0x80744310, size=100 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80744310(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80744320
    r31 = r4;
    r12 = *(0 + r3); // lwz @ 0x8074432C
    r12 = *(0x24 + r12); // lwz @ 0x80744330
    /* mtctr r12 */ // 0x80744334
    /* bctrl  */ // 0x80744338
    r4 = r31;
    FUN_807438BC(r4, r3); // bl 0x807438BC
    /* lfs f0, 0x14(r1) */ // 0x80744348
    /* stfs f0, 0xc(r31) */ // 0x8074434C
    /* lfs f0, 0x18(r1) */ // 0x80744350
    /* stfs f0, 0x1c(r31) */ // 0x80744354
    /* lfs f0, 0x1c(r1) */ // 0x80744358
    /* stfs f0, 0x2c(r31) */ // 0x8074435C
    r31 = *(0x2c + r1); // lwz @ 0x80744360
    r0 = *(0x34 + r1); // lwz @ 0x80744364
    return;
}