/* Function at 0x8077A270, size=240 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8077A270(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8077A280
    *(0x28 + r1) = r30; // stw @ 0x8077A284
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x8077A28C
    r12 = *(0 + r3); // lwz @ 0x8077A290
    r12 = *(0x30 + r12); // lwz @ 0x8077A294
    /* mtctr r12 */ // 0x8077A298
    /* bctrl  */ // 0x8077A29C
    /* lis r4, 0x101 */ // 0x8077A2A0
    r0 = *(0x20 + r3); // lwz @ 0x8077A2A4
    r3 = r4 + 0x101; // 0x8077A2A8
    /* andc. r0, r3, r0 */ // 0x8077A2AC
    if (!=) goto 0x0x8077a2cc;
    /* lis r3, 0 */ // 0x8077A2B4
    r3 = *(0 + r3); // lwz @ 0x8077A2B8
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x8077a2cc;
    /* li r31, 1 */ // 0x8077A2C8
    r5 = *(0xb4 + r30); // lhz @ 0x8077A2CC
    /* li r3, 2 */ // 0x8077A2D0
    /* li r29, 1 */ // 0x8077A2D4
    /* addis r4, r5, 1 */ // 0x8077A2D8
    r0 = r4 + -1; // 0x8077A2E0
    /* clrlwi r4, r0, 0x10 */ // 0x8077A2E4
    /* subfic r0, r4, 2 */ // 0x8077A2E8
    /* orc r3, r3, r4 */ // 0x8077A2EC
    /* srwi r0, r0, 1 */ // 0x8077A2F0
    /* subf r0, r0, r3 */ // 0x8077A2F4
    /* srwi r0, r0, 0x1f */ // 0x8077A2F8
    if (==) goto 0x0x8077a30c;
    if (==) goto 0x0x8077a30c;
    /* li r29, 0 */ // 0x8077A308
    if (==) goto 0x0x8077a330;
    if (!=) goto 0x0x8077a330;
    r3 = *(0xd0 + r30); // lwz @ 0x8077A31C
    r12 = *(0 + r3); // lwz @ 0x8077A320
    r12 = *(0xc + r12); // lwz @ 0x8077A324
    /* mtctr r12 */ // 0x8077A328
    /* bctrl  */ // 0x8077A32C
    if (!=) goto 0x0x8077a340;
    if (==) goto 0x0x8077a354;
    r3 = *(0xd0 + r30); // lwz @ 0x8077A340
    r12 = *(0 + r3); // lwz @ 0x8077A344
    r12 = *(0x10 + r12); // lwz @ 0x8077A348
    /* mtctr r12 */ // 0x8077A34C
    /* bctrl  */ // 0x8077A350
    r3 = *(0xd0 + r30); // lwz @ 0x8077A354
    r3 = r3 + 0x74; // 0x8077A358
    FUN_805E3430(r3); // bl 0x805E3430
}