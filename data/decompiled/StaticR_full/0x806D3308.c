/* Function at 0x806D3308, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806D3308(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806D3310
    *(0x18 + r1) = r30; // stw @ 0x806D331C
    *(0x14 + r1) = r29; // stw @ 0x806D3320
    r29 = r3;
    r3 = *(0 + r5); // lwz @ 0x806D3328
    FUN_806FDCCC(); // bl 0x806FDCCC
    if (==) goto 0x0x806d3414;
    /* lis r3, 0 */ // 0x806D3338
    r3 = *(0 + r3); // lwz @ 0x806D333C
    r3 = *(0 + r3); // lwz @ 0x806D3340
    r30 = *(0x324 + r3); // lwz @ 0x806D3344
    if (!=) goto 0x0x806d3358;
    /* li r30, 0 */ // 0x806D3350
    /* b 0x806d33ac */ // 0x806D3354
    /* lis r31, 0 */ // 0x806D3358
    r31 = r31 + 0; // 0x806D335C
    if (==) goto 0x0x806d33a8;
    r12 = *(0 + r30); // lwz @ 0x806D3364
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D336C
    /* mtctr r12 */ // 0x806D3370
    /* bctrl  */ // 0x806D3374
    /* b 0x806d3390 */ // 0x806D3378
    if (!=) goto 0x0x806d338c;
    /* li r0, 1 */ // 0x806D3384
    /* b 0x806d339c */ // 0x806D3388
    r3 = *(0 + r3); // lwz @ 0x806D338C
    if (!=) goto 0x0x806d337c;
    /* li r0, 0 */ // 0x806D3398
    if (==) goto 0x0x806d33a8;
    /* b 0x806d33ac */ // 0x806D33A4
    /* li r30, 0 */ // 0x806D33A8
    r12 = *(0 + r30); // lwz @ 0x806D33AC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D33B4
    /* mtctr r12 */ // 0x806D33B8
    /* bctrl  */ // 0x806D33BC
    r3 = r30;
    /* li r4, 0x1c84 */ // 0x806D33C4
    /* li r5, 0 */ // 0x806D33C8
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r30); // lwz @ 0x806D33D0
    r3 = r30;
    /* li r4, 0x10cd */ // 0x806D33D8
    /* li r5, 0 */ // 0x806D33DC
    r12 = *(0x68 + r12); // lwz @ 0x806D33E0
    /* mtctr r12 */ // 0x806D33E4
    /* bctrl  */ // 0x806D33E8
    r12 = *(0 + r29); // lwz @ 0x806D33EC
    r3 = r29;
    /* li r4, 0xc7 */ // 0x806D33F4
    /* li r5, 0 */ // 0x806D33F8
    r12 = *(0x24 + r12); // lwz @ 0x806D33FC
    /* mtctr r12 */ // 0x806D3400
    /* bctrl  */ // 0x806D3404
    /* li r0, 6 */ // 0x806D3408
    *(0x6c + r29) = r0; // stw @ 0x806D340C
    /* b 0x806d341c */ // 0x806D3410
    r3 = r29;
    FUN_806D37FC(r3); // bl 0x806D37FC
    r0 = *(0x24 + r1); // lwz @ 0x806D341C
    r31 = *(0x1c + r1); // lwz @ 0x806D3420
    r30 = *(0x18 + r1); // lwz @ 0x806D3424
    r29 = *(0x14 + r1); // lwz @ 0x806D3428
    return;
}