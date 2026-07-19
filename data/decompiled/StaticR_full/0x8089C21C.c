/* Function at 0x8089C21C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8089C21C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8089C224
    *(0xc + r1) = r31; // stw @ 0x8089C22C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8089C234
    r30 = r3;
    r5 = *(0 + r5); // lwz @ 0x8089C23C
    r6 = *(0x100 + r3); // lwz @ 0x8089C240
    r0 = *(0x20 + r5); // lwz @ 0x8089C244
    /* subf r0, r4, r0 */ // 0x8089C248
    if (==) goto 0x0x8089c27c;
    if (!=) goto 0x0x8089c264;
    /* lfs f1, 0x40(r3) */ // 0x8089C25C
    /* b 0x8089c274 */ // 0x8089C260
    r12 = *(0 + r3); // lwz @ 0x8089C264
    r12 = *(0x130 + r12); // lwz @ 0x8089C268
    /* mtctr r12 */ // 0x8089C26C
    /* bctrl  */ // 0x8089C270
    r3 = *(0xac + r30); // lwz @ 0x8089C274
    /* stfs f1, 0x64(r3) */ // 0x8089C278
    /* lis r3, 0 */ // 0x8089C27C
    r3 = *(0 + r3); // lwz @ 0x8089C280
    r0 = *(0x20 + r3); // lwz @ 0x8089C284
    /* subf r0, r31, r0 */ // 0x8089C288
    *(0x100 + r30) = r0; // stw @ 0x8089C28C
    r31 = *(0xc + r1); // lwz @ 0x8089C290
    r30 = *(8 + r1); // lwz @ 0x8089C294
    r0 = *(0x14 + r1); // lwz @ 0x8089C298
    return;
}