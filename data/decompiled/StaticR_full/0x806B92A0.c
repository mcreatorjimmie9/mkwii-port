/* Function at 0x806B92A0, size=288 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806B92A0(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806B92A8
    *(0xd8 + r1) = r30; // stw @ 0x806B92B4
    *(0xd4 + r1) = r29; // stw @ 0x806B92B8
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806B92C0
    r3 = *(0 + r3); // lwz @ 0x806B92C4
    r30 = *(0x14c + r3); // lwz @ 0x806B92C8
    if (!=) goto 0x0x806b92dc;
    /* li r30, 0 */ // 0x806B92D4
    /* b 0x806b9330 */ // 0x806B92D8
    /* lis r31, 0 */ // 0x806B92DC
    r31 = r31 + 0; // 0x806B92E0
    if (==) goto 0x0x806b932c;
    r12 = *(0 + r30); // lwz @ 0x806B92E8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806B92F0
    /* mtctr r12 */ // 0x806B92F4
    /* bctrl  */ // 0x806B92F8
    /* b 0x806b9314 */ // 0x806B92FC
    if (!=) goto 0x0x806b9310;
    /* li r0, 1 */ // 0x806B9308
    /* b 0x806b9320 */ // 0x806B930C
    r3 = *(0 + r3); // lwz @ 0x806B9310
    if (!=) goto 0x0x806b9300;
    /* li r0, 0 */ // 0x806B931C
    if (==) goto 0x0x806b932c;
    /* b 0x806b9330 */ // 0x806B9328
    /* li r30, 0 */ // 0x806B932C
    r12 = *(0 + r30); // lwz @ 0x806B9330
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806B9338
    /* mtctr r12 */ // 0x806B933C
    /* bctrl  */ // 0x806B9340
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B934C
    r3 = *(0 + r3); // lwz @ 0x806B9350
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806B9358
    r3 = r30;
    /* li r4, 0x1998 */ // 0x806B9364
    r12 = *(0 + r30); // lwz @ 0x806B9368
    r12 = *(0x68 + r12); // lwz @ 0x806B936C
    /* mtctr r12 */ // 0x806B9370
    /* bctrl  */ // 0x806B9374
    r0 = r29 + 0x44; // 0x806B9378
    *(0x188 + r30) = r0; // stw @ 0x806B937C
    r3 = r29;
    /* li r4, 0x51 */ // 0x806B9384
    r12 = *(0 + r29); // lwz @ 0x806B9388
    /* li r5, 0 */ // 0x806B938C
    r12 = *(0x24 + r12); // lwz @ 0x806B9390
    /* mtctr r12 */ // 0x806B9394
    /* bctrl  */ // 0x806B9398
    /* li r0, 6 */ // 0x806B939C
    *(0x7c + r29) = r0; // stw @ 0x806B93A0
    r31 = *(0xdc + r1); // lwz @ 0x806B93A4
    r30 = *(0xd8 + r1); // lwz @ 0x806B93A8
    r29 = *(0xd4 + r1); // lwz @ 0x806B93AC
    r0 = *(0xe4 + r1); // lwz @ 0x806B93B0
    return;
}