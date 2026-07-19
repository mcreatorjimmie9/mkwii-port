/* Function at 0x808E8220, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E8220(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E8228
    /* slwi r0, r3, 2 */ // 0x808E8230
    *(0xc + r1) = r31; // stw @ 0x808E8234
    *(8 + r1) = r30; // stw @ 0x808E8238
    r3 = *(0 + r4); // lwz @ 0x808E823C
    r3 = *(0 + r3); // lwz @ 0x808E8240
    r3 = r3 + r0; // 0x808E8244
    r30 = *(8 + r3); // lwz @ 0x808E8248
    if (!=) goto 0x0x808e825c;
    /* li r30, 0 */ // 0x808E8254
    /* b 0x808e82b0 */ // 0x808E8258
    /* lis r31, 0 */ // 0x808E825C
    r31 = r31 + 0; // 0x808E8260
    if (==) goto 0x0x808e82ac;
    r12 = *(0 + r30); // lwz @ 0x808E8268
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E8270
    /* mtctr r12 */ // 0x808E8274
    /* bctrl  */ // 0x808E8278
    /* b 0x808e8294 */ // 0x808E827C
    if (!=) goto 0x0x808e8290;
    /* li r0, 1 */ // 0x808E8288
    /* b 0x808e82a0 */ // 0x808E828C
    r3 = *(0 + r3); // lwz @ 0x808E8290
    if (!=) goto 0x0x808e8280;
    /* li r0, 0 */ // 0x808E829C
    if (==) goto 0x0x808e82ac;
    /* b 0x808e82b0 */ // 0x808E82A8
    /* li r30, 0 */ // 0x808E82AC
    if (!=) goto 0x0x808e82c0;
    /* li r30, 0 */ // 0x808E82B8
    /* b 0x808e8314 */ // 0x808E82BC
    /* lis r31, 0 */ // 0x808E82C0
    r31 = r31 + 0; // 0x808E82C4
    if (==) goto 0x0x808e8310;
    r12 = *(0 + r30); // lwz @ 0x808E82CC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E82D4
    /* mtctr r12 */ // 0x808E82D8
    /* bctrl  */ // 0x808E82DC
    /* b 0x808e82f8 */ // 0x808E82E0
    if (!=) goto 0x0x808e82f4;
    /* li r0, 1 */ // 0x808E82EC
    /* b 0x808e8304 */ // 0x808E82F0
    r3 = *(0 + r3); // lwz @ 0x808E82F4
    if (!=) goto 0x0x808e82e4;
    /* li r0, 0 */ // 0x808E8300
    if (==) goto 0x0x808e8310;
    /* b 0x808e8314 */ // 0x808E830C
    /* li r30, 0 */ // 0x808E8310
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E8318
    r30 = *(8 + r1); // lwz @ 0x808E831C
    r0 = *(0x14 + r1); // lwz @ 0x808E8320
    return;
}