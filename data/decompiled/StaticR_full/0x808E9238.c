/* Function at 0x808E9238, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E9238(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E9240
    /* slwi r0, r3, 2 */ // 0x808E9248
    *(0xc + r1) = r31; // stw @ 0x808E924C
    *(8 + r1) = r30; // stw @ 0x808E9250
    r3 = *(0 + r4); // lwz @ 0x808E9254
    r3 = *(0 + r3); // lwz @ 0x808E9258
    r3 = r3 + r0; // 0x808E925C
    r30 = *(8 + r3); // lwz @ 0x808E9260
    if (!=) goto 0x0x808e9274;
    /* li r30, 0 */ // 0x808E926C
    /* b 0x808e92c8 */ // 0x808E9270
    /* lis r31, 0 */ // 0x808E9274
    r31 = r31 + 0; // 0x808E9278
    if (==) goto 0x0x808e92c4;
    r12 = *(0 + r30); // lwz @ 0x808E9280
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E9288
    /* mtctr r12 */ // 0x808E928C
    /* bctrl  */ // 0x808E9290
    /* b 0x808e92ac */ // 0x808E9294
    if (!=) goto 0x0x808e92a8;
    /* li r0, 1 */ // 0x808E92A0
    /* b 0x808e92b8 */ // 0x808E92A4
    r3 = *(0 + r3); // lwz @ 0x808E92A8
    if (!=) goto 0x0x808e9298;
    /* li r0, 0 */ // 0x808E92B4
    if (==) goto 0x0x808e92c4;
    /* b 0x808e92c8 */ // 0x808E92C0
    /* li r30, 0 */ // 0x808E92C4
    if (!=) goto 0x0x808e92d8;
    /* li r30, 0 */ // 0x808E92D0
    /* b 0x808e932c */ // 0x808E92D4
    /* lis r31, 0 */ // 0x808E92D8
    r31 = r31 + 0; // 0x808E92DC
    if (==) goto 0x0x808e9328;
    r12 = *(0 + r30); // lwz @ 0x808E92E4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E92EC
    /* mtctr r12 */ // 0x808E92F0
    /* bctrl  */ // 0x808E92F4
    /* b 0x808e9310 */ // 0x808E92F8
    if (!=) goto 0x0x808e930c;
    /* li r0, 1 */ // 0x808E9304
    /* b 0x808e931c */ // 0x808E9308
    r3 = *(0 + r3); // lwz @ 0x808E930C
    if (!=) goto 0x0x808e92fc;
    /* li r0, 0 */ // 0x808E9318
    if (==) goto 0x0x808e9328;
    /* b 0x808e932c */ // 0x808E9324
    /* li r30, 0 */ // 0x808E9328
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E9330
    r30 = *(8 + r1); // lwz @ 0x808E9334
    r0 = *(0x14 + r1); // lwz @ 0x808E9338
    return;
}