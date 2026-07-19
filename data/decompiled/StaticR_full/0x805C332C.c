/* Function at 0x805C332C, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805C332C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805C3334
    r0 = r4 rlwinm 2; // rlwinm
    *(0xc + r1) = r31; // stw @ 0x805C3340
    /* li r31, 0 */ // 0x805C3344
    *(8 + r1) = r30; // stw @ 0x805C3348
    r30 = r3;
    r7 = *(0x1d + r3); // lbz @ 0x805C3350
    r6 = *(0xc + r3); // lwz @ 0x805C3354
    r4 = r7 + 1; // 0x805C3358
    *(0x1d + r3) = r4; // stb @ 0x805C335C
    /* lis r4, 0 */ // 0x805C3360
    /* li r7, 0 */ // 0x805C3364
    /* lwzx r6, r6, r0 */ // 0x805C3368
    r0 = *(0x38 + r6); // lwz @ 0x805C336C
    r0 = r0 | 0x10; // 0x805C3370
    *(0x38 + r6) = r0; // stw @ 0x805C3374
    r6 = *(0 + r5); // lwz @ 0x805C3378
    r5 = *(0 + r4); // lwz @ 0x805C337C
    r6 = *(0x24 + r6); // lbz @ 0x805C3380
    /* b 0x805c33b0 */ // 0x805C3384
    r4 = *(0xc + r5); // lwz @ 0x805C3388
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r4, r4, r0 */ // 0x805C3390
    r4 = *(0x38 + r4); // lwz @ 0x805C3394
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x805C3398
    if (!=) goto 0x0x805c33a8;
    /* rlwinm. r0, r4, 0, 0x1b, 0x1b */ // 0x805C33A0
    if (==) goto 0x0x805c33ac;
    r31 = r31 + 1; // 0x805C33A8
    r7 = r7 + 1; // 0x805C33AC
    /* clrlwi r0, r7, 0x18 */ // 0x805C33B0
    if (<) goto 0x0x805c3388;
    r0 = *(0x28 + r3); // lwz @ 0x805C33BC
    if (>=) goto 0x0x805c3418;
    r3 = *(0x10 + r3); // lwz @ 0x805C33C8
    r12 = *(0 + r3); // lwz @ 0x805C33CC
    r12 = *(8 + r12); // lwz @ 0x805C33D0
    /* mtctr r12 */ // 0x805C33D4
    /* bctrl  */ // 0x805C33D8
    if (==) goto 0x0x805c3418;
    r3 = *(0x10 + r30); // lwz @ 0x805C33E4
    /* lis r4, 0 */ // 0x805C33E8
    r5 = *(0 + r4); // lwz @ 0x805C33EC
    /* clrlwi r4, r31, 0x18 */ // 0x805C33F0
    r12 = *(0 + r3); // lwz @ 0x805C33F4
    r5 = *(0x24 + r5); // lbz @ 0x805C33F8
    r12 = *(0x24 + r12); // lwz @ 0x805C33FC
    /* mtctr r12 */ // 0x805C3400
    /* bctrl  */ // 0x805C3404
    if (==) goto 0x0x805c3418;
    /* li r0, 3 */ // 0x805C3410
    *(0x28 + r30) = r0; // stw @ 0x805C3414
    r0 = *(0x14 + r1); // lwz @ 0x805C3418
    r31 = *(0xc + r1); // lwz @ 0x805C341C
    r30 = *(8 + r1); // lwz @ 0x805C3420
    return;
}