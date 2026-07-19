/* Function at 0x808EA2A8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808EA2A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808EA2B0
    /* slwi r0, r3, 2 */ // 0x808EA2B8
    *(0xc + r1) = r31; // stw @ 0x808EA2BC
    *(8 + r1) = r30; // stw @ 0x808EA2C0
    r3 = *(0 + r4); // lwz @ 0x808EA2C4
    r3 = *(0 + r3); // lwz @ 0x808EA2C8
    r3 = r3 + r0; // 0x808EA2CC
    r30 = *(8 + r3); // lwz @ 0x808EA2D0
    if (!=) goto 0x0x808ea2e4;
    /* li r30, 0 */ // 0x808EA2DC
    /* b 0x808ea338 */ // 0x808EA2E0
    /* lis r31, 0 */ // 0x808EA2E4
    r31 = r31 + 0; // 0x808EA2E8
    if (==) goto 0x0x808ea334;
    r12 = *(0 + r30); // lwz @ 0x808EA2F0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EA2F8
    /* mtctr r12 */ // 0x808EA2FC
    /* bctrl  */ // 0x808EA300
    /* b 0x808ea31c */ // 0x808EA304
    if (!=) goto 0x0x808ea318;
    /* li r0, 1 */ // 0x808EA310
    /* b 0x808ea328 */ // 0x808EA314
    r3 = *(0 + r3); // lwz @ 0x808EA318
    if (!=) goto 0x0x808ea308;
    /* li r0, 0 */ // 0x808EA324
    if (==) goto 0x0x808ea334;
    /* b 0x808ea338 */ // 0x808EA330
    /* li r30, 0 */ // 0x808EA334
    if (!=) goto 0x0x808ea348;
    /* li r30, 0 */ // 0x808EA340
    /* b 0x808ea39c */ // 0x808EA344
    /* lis r31, 0 */ // 0x808EA348
    r31 = r31 + 0; // 0x808EA34C
    if (==) goto 0x0x808ea398;
    r12 = *(0 + r30); // lwz @ 0x808EA354
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EA35C
    /* mtctr r12 */ // 0x808EA360
    /* bctrl  */ // 0x808EA364
    /* b 0x808ea380 */ // 0x808EA368
    if (!=) goto 0x0x808ea37c;
    /* li r0, 1 */ // 0x808EA374
    /* b 0x808ea38c */ // 0x808EA378
    r3 = *(0 + r3); // lwz @ 0x808EA37C
    if (!=) goto 0x0x808ea36c;
    /* li r0, 0 */ // 0x808EA388
    if (==) goto 0x0x808ea398;
    /* b 0x808ea39c */ // 0x808EA394
    /* li r30, 0 */ // 0x808EA398
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EA3A0
    r30 = *(8 + r1); // lwz @ 0x808EA3A4
    r0 = *(0x14 + r1); // lwz @ 0x808EA3A8
    return;
}