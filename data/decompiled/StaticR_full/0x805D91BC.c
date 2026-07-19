/* Function at 0x805D91BC, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805D91BC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 4 */ // 0x805D91C0
    /* li r5, 1 */ // 0x805D91C4
    /* li r6, 0 */ // 0x805D91C8
    *(0xc + r1) = r31; // stw @ 0x805D91CC
    /* lis r31, 1 */ // 0x805D91D0
    r0 = r31 + -0x7340; // 0x805D91D4
    *(8 + r1) = r30; // stw @ 0x805D91D8
    /* mtctr r7 */ // 0x805D91DC
    /* clrlwi r8, r6, 0x18 */ // 0x805D91E0
    r9 = *(0x14 + r3); // lwz @ 0x805D91E4
    r7 = r8 * r0; // 0x805D91E8
    r7 = r9 + r7; // 0x805D91EC
    r7 = *(8 + r7); // lwz @ 0x805D91F0
    /* addis r7, r7, -0x524b */ // 0x805D91F4
    if (!=) goto 0x0x805d9288;
    r7 = r31 + -0x6c10; // 0x805D9200
    r7 = r8 * r7; // 0x805D9208
    r7 = r3 + r7; // 0x805D920C
    r7 = r7 + 0x38; // 0x805D9210
    if (==) goto 0x0x805d9244;
    /* addis r7, r7, 1 */ // 0x805D9218
    /* li r5, 0 */ // 0x805D921C
    r10 = *(-0x7004 + r7); // lwz @ 0x805D9220
    r9 = *(-0x7000 + r7); // lwz @ 0x805D9224
    r8 = *(-0x6ffc + r7); // lwz @ 0x805D9228
    r7 = *(-0x6ff8 + r7); // lwz @ 0x805D922C
    *(4 + r4) = r10; // stw @ 0x805D9230
    *(8 + r4) = r9; // stw @ 0x805D9234
    *(0xc + r4) = r8; // stw @ 0x805D9238
    *(0x10 + r4) = r7; // stw @ 0x805D923C
    /* b 0x805d9288 */ // 0x805D9240
    /* addis r30, r7, 1 */ // 0x805D9244
    r10 = *(4 + r4); // lwz @ 0x805D9248
    r9 = *(-0x7004 + r30); // lwz @ 0x805D924C
    r8 = *(8 + r4); // lwz @ 0x805D9250
    r12 = r10 | r9; // 0x805D9254
    r7 = *(-0x7000 + r30); // lwz @ 0x805D9258
    r10 = *(0xc + r4); // lwz @ 0x805D925C
    r11 = r8 | r7; // 0x805D9260
    r9 = *(-0x6ffc + r30); // lwz @ 0x805D9264
    r8 = *(0x10 + r4); // lwz @ 0x805D9268
    r7 = *(-0x6ff8 + r30); // lwz @ 0x805D926C
    r9 = r10 | r9; // 0x805D9270
    *(4 + r4) = r12; // stw @ 0x805D9274
    r7 = r8 | r7; // 0x805D9278
    *(8 + r4) = r11; // stw @ 0x805D927C
    *(0xc + r4) = r9; // stw @ 0x805D9280
    *(0x10 + r4) = r7; // stw @ 0x805D9284
    r6 = r6 + 1; // 0x805D9288
    if (counter-- != 0) goto 0x0x805d91e0;
    r31 = *(0xc + r1); // lwz @ 0x805D9290
    r30 = *(8 + r1); // lwz @ 0x805D9294
    return;
}