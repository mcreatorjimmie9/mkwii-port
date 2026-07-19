/* Function at 0x805C31C4, size=280 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805C31C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0xf0 */ // 0x805C31D0
    /* lis r4, 0 */ // 0x805C31D4
    *(0xc + r1) = r31; // stw @ 0x805C31D8
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805C31E0
    r5 = *(0x1c + r3); // lbz @ 0x805C31E4
    r5 = r5 + 1; // 0x805C31E8
    *(0x1c + r3) = r5; // stb @ 0x805C31EC
    r3 = *(0 + r4); // lwz @ 0x805C31F0
    r3 = r3 + r0; // 0x805C31F4
    r0 = *(0x2e + r3); // lbz @ 0x805C31F8
    /* extsb. r0, r0 */ // 0x805C31FC
    if (<) goto 0x0x805c3214;
    /* lis r3, 0 */ // 0x805C3204
    /* clrlwi r4, r0, 0x18 */ // 0x805C3208
    r3 = *(0 + r3); // lwz @ 0x805C320C
    FUN_805B41F8(r3); // bl 0x805B41F8
    /* lis r4, 0 */ // 0x805C3214
    /* lis r3, 0 */ // 0x805C3218
    r5 = *(0 + r4); // lwz @ 0x805C321C
    /* li r30, 0 */ // 0x805C3220
    r4 = *(0 + r3); // lwz @ 0x805C3224
    /* li r6, 0 */ // 0x805C3228
    r5 = *(0x24 + r5); // lbz @ 0x805C322C
    /* b 0x805c325c */ // 0x805C3230
    r3 = *(0xc + r4); // lwz @ 0x805C3234
    r0 = r6 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805C323C
    r3 = *(0x38 + r3); // lwz @ 0x805C3240
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805C3244
    if (!=) goto 0x0x805c3254;
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x805C324C
    if (==) goto 0x0x805c3258;
    r30 = r30 + 1; // 0x805C3254
    r6 = r6 + 1; // 0x805C3258
    /* clrlwi r0, r6, 0x18 */ // 0x805C325C
    if (<) goto 0x0x805c3234;
    r0 = *(0x28 + r31); // lwz @ 0x805C3268
    if (>=) goto 0x0x805c32c4;
    r3 = *(0x10 + r31); // lwz @ 0x805C3274
    r12 = *(0 + r3); // lwz @ 0x805C3278
    r12 = *(8 + r12); // lwz @ 0x805C327C
    /* mtctr r12 */ // 0x805C3280
    /* bctrl  */ // 0x805C3284
    if (==) goto 0x0x805c32c4;
    r3 = *(0x10 + r31); // lwz @ 0x805C3290
    /* lis r4, 0 */ // 0x805C3294
    r5 = *(0 + r4); // lwz @ 0x805C3298
    /* clrlwi r4, r30, 0x18 */ // 0x805C329C
    r12 = *(0 + r3); // lwz @ 0x805C32A0
    r5 = *(0x24 + r5); // lbz @ 0x805C32A4
    r12 = *(0x24 + r12); // lwz @ 0x805C32A8
    /* mtctr r12 */ // 0x805C32AC
    /* bctrl  */ // 0x805C32B0
    if (==) goto 0x0x805c32c4;
    /* li r0, 3 */ // 0x805C32BC
    *(0x28 + r31) = r0; // stw @ 0x805C32C0
    r0 = *(0x14 + r1); // lwz @ 0x805C32C4
    r31 = *(0xc + r1); // lwz @ 0x805C32C8
    r30 = *(8 + r1); // lwz @ 0x805C32CC
    return;
}