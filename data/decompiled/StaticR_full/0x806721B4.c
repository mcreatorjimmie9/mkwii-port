/* Function at 0x806721B4, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806721B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806721BC
    /* lis r5, 0 */ // 0x806721C0
    *(0x24 + r1) = r0; // stw @ 0x806721C4
    r5 = r5 + 0; // 0x806721C8
    /* lfs f0, 0(r4) */ // 0x806721CC
    *(0x1c + r1) = r31; // stw @ 0x806721D4
    *(0x18 + r1) = r30; // stw @ 0x806721D8
    *(0x14 + r1) = r29; // stw @ 0x806721DC
    r29 = r3;
    r3 = r3 + 0x24; // 0x806721E4
    *(8 + r1) = r5; // stw @ 0x806721E8
    /* stfs f0, 0xc(r1) */ // 0x806721EC
    FUN_8064E1DC(r3); // bl 0x8064E1DC
    r30 = *(0x38 + r29); // lwz @ 0x806721F4
    /* li r3, 4 */ // 0x806721F8
    /* li r0, -1 */ // 0x806721FC
    *(8 + r29) = r3; // stw @ 0x80672200
    *(0x1c + r29) = r0; // stw @ 0x80672208
    if (!=) goto 0x0x80672218;
    /* li r30, 0 */ // 0x80672210
    /* b 0x8067226c */ // 0x80672214
    /* lis r31, 0 */ // 0x80672218
    r31 = r31 + 0; // 0x8067221C
    if (==) goto 0x0x80672268;
    r12 = *(0 + r30); // lwz @ 0x80672224
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8067222C
    /* mtctr r12 */ // 0x80672230
    /* bctrl  */ // 0x80672234
    /* b 0x80672250 */ // 0x80672238
    if (!=) goto 0x0x8067224c;
    /* li r0, 1 */ // 0x80672244
    /* b 0x8067225c */ // 0x80672248
    r3 = *(0 + r3); // lwz @ 0x8067224C
    if (!=) goto 0x0x8067223c;
    /* li r0, 0 */ // 0x80672258
    if (==) goto 0x0x80672268;
    /* b 0x8067226c */ // 0x80672264
    /* li r30, 0 */ // 0x80672268
    if (==) goto 0x0x80672294;
    /* li r31, 0 */ // 0x80672274
    r3 = r30;
    r4 = r31;
    /* li r5, 1 */ // 0x80672280
    FUN_8066B6CC(r3, r4, r5); // bl 0x8066B6CC
    r31 = r31 + 1; // 0x80672288
    if (<) goto 0x0x80672278;
    r12 = *(0 + r29); // lwz @ 0x80672294
    r3 = r29;
    r12 = *(0x3c + r12); // lwz @ 0x8067229C
    /* mtctr r12 */ // 0x806722A0
    /* bctrl  */ // 0x806722A4
    r0 = *(0x24 + r1); // lwz @ 0x806722A8
    r31 = *(0x1c + r1); // lwz @ 0x806722AC
    r30 = *(0x18 + r1); // lwz @ 0x806722B0
    r29 = *(0x14 + r1); // lwz @ 0x806722B4
    return;
}