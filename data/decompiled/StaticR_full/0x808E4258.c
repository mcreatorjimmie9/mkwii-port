/* Function at 0x808E4258, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E4258(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E4260
    /* slwi r0, r3, 2 */ // 0x808E4268
    *(0xc + r1) = r31; // stw @ 0x808E426C
    *(8 + r1) = r30; // stw @ 0x808E4270
    r3 = *(0 + r4); // lwz @ 0x808E4274
    r3 = *(0 + r3); // lwz @ 0x808E4278
    r3 = r3 + r0; // 0x808E427C
    r30 = *(8 + r3); // lwz @ 0x808E4280
    if (!=) goto 0x0x808e4294;
    /* li r30, 0 */ // 0x808E428C
    /* b 0x808e42e8 */ // 0x808E4290
    /* lis r31, 0 */ // 0x808E4294
    r31 = r31 + 0; // 0x808E4298
    if (==) goto 0x0x808e42e4;
    r12 = *(0 + r30); // lwz @ 0x808E42A0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E42A8
    /* mtctr r12 */ // 0x808E42AC
    /* bctrl  */ // 0x808E42B0
    /* b 0x808e42cc */ // 0x808E42B4
    if (!=) goto 0x0x808e42c8;
    /* li r0, 1 */ // 0x808E42C0
    /* b 0x808e42d8 */ // 0x808E42C4
    r3 = *(0 + r3); // lwz @ 0x808E42C8
    if (!=) goto 0x0x808e42b8;
    /* li r0, 0 */ // 0x808E42D4
    if (==) goto 0x0x808e42e4;
    /* b 0x808e42e8 */ // 0x808E42E0
    /* li r30, 0 */ // 0x808E42E4
    if (!=) goto 0x0x808e42f8;
    /* li r30, 0 */ // 0x808E42F0
    /* b 0x808e434c */ // 0x808E42F4
    /* lis r31, 0 */ // 0x808E42F8
    r31 = r31 + 0; // 0x808E42FC
    if (==) goto 0x0x808e4348;
    r12 = *(0 + r30); // lwz @ 0x808E4304
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E430C
    /* mtctr r12 */ // 0x808E4310
    /* bctrl  */ // 0x808E4314
    /* b 0x808e4330 */ // 0x808E4318
    if (!=) goto 0x0x808e432c;
    /* li r0, 1 */ // 0x808E4324
    /* b 0x808e433c */ // 0x808E4328
    r3 = *(0 + r3); // lwz @ 0x808E432C
    if (!=) goto 0x0x808e431c;
    /* li r0, 0 */ // 0x808E4338
    if (==) goto 0x0x808e4348;
    /* b 0x808e434c */ // 0x808E4344
    /* li r30, 0 */ // 0x808E4348
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E4350
    r30 = *(8 + r1); // lwz @ 0x808E4354
    r0 = *(0x14 + r1); // lwz @ 0x808E4358
    return;
}