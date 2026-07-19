/* Function at 0x80671220, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80671220(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8067122C
    r31 = r3;
    *(4 + r3) = r4; // stw @ 0x80671234
    r12 = *(0 + r3); // lwz @ 0x80671238
    r12 = *(0x28 + r12); // lwz @ 0x8067123C
    /* mtctr r12 */ // 0x80671240
    /* bctrl  */ // 0x80671244
    r3 = r31 + 0x24; // 0x80671248
    FUN_8064DF74(r3); // bl 0x8064DF74
    /* lis r3, 0 */ // 0x80671250
    /* lis r4, 0 */ // 0x80671254
    /* lfs f0, 0(r3) */ // 0x80671258
    r4 = r4 + 0; // 0x8067125C
    *(8 + r1) = r4; // stw @ 0x80671260
    r3 = r31 + 0x24; // 0x80671264
    /* stfs f0, 0xc(r1) */ // 0x8067126C
    FUN_8064E1DC(r4, r3, r4); // bl 0x8064E1DC
    /* lfs f0, 0xc(r1) */ // 0x80671274
    /* li r0, 1 */ // 0x80671278
    /* stfs f0, 0x14(r31) */ // 0x8067127C
    *(8 + r31) = r0; // stw @ 0x80671280
    r31 = *(0x1c + r1); // lwz @ 0x80671284
    r0 = *(0x24 + r1); // lwz @ 0x80671288
    return;
}