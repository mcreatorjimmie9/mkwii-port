/* Function at 0x8076ED08, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8076ED08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8076ED10
    /* li r0, 0 */ // 0x8076ED18
    /* lfs f0, 0(r6) */ // 0x8076ED1C
    *(0x1c + r1) = r31; // stw @ 0x8076ED20
    *(0x18 + r1) = r30; // stw @ 0x8076ED24
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8076ED30
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8076ED3C
    r28 = r3;
    *(8 + r1) = r0; // sth @ 0x8076ED44
    /* stfs f0, 0xc(r1) */ // 0x8076ED48
    r12 = *(0 + r3); // lwz @ 0x8076ED4C
    r12 = *(0x28 + r12); // lwz @ 0x8076ED50
    /* mtctr r12 */ // 0x8076ED54
    /* bctrl  */ // 0x8076ED58
    r3 = *(8 + r1); // lhz @ 0x8076ED5C
    r0 = *(6 + r28); // lhz @ 0x8076ED60
    r31 = r3 + 1; // 0x8076ED64
    if (!=) goto 0x0x8076ed74;
    /* li r31, 0 */ // 0x8076ED70
    r0 = *(0x44 + r28); // lbz @ 0x8076ED74
    /* lfs f1, 0xc(r1) */ // 0x8076ED78
    if (==) goto 0x0x8076ed94;
    r3 = r28;
    FUN_8076EF44(r3); // bl 0x8076EF44
    /* fmr f0, f1 */ // 0x8076ED8C
    /* b 0x8076edac */ // 0x8076ED90
    /* lis r4, 0 */ // 0x8076ED94
    r3 = r28;
    /* lfs f0, 0(r4) */ // 0x8076ED9C
    /* fsubs f1, f0, f1 */ // 0x8076EDA0
    FUN_8076EF44(r4, r3); // bl 0x8076EF44
    /* fmr f0, f1 */ // 0x8076EDA8
    /* frsp f1, f0 */ // 0x8076EDAC
    /* stfs f0, 0xc(r1) */ // 0x8076EDB0
    r4 = *(8 + r1); // lha @ 0x8076EDB4
    r3 = r28;
    r6 = r29;
    r7 = r30;
    /* extsh r5, r31 */ // 0x8076EDC4
    FUN_8076F070(r3, r6, r7); // bl 0x8076F070
    r0 = *(0x24 + r1); // lwz @ 0x8076EDCC
    r31 = *(0x1c + r1); // lwz @ 0x8076EDD0
    r30 = *(0x18 + r1); // lwz @ 0x8076EDD4
    r29 = *(0x14 + r1); // lwz @ 0x8076EDD8
    r28 = *(0x10 + r1); // lwz @ 0x8076EDDC
    return;
}