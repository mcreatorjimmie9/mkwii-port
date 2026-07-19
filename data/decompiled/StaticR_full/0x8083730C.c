/* Function at 0x8083730C, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8083730C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80837314
    /* li r4, 0 */ // 0x80837318
    *(0x14 + r1) = r0; // stw @ 0x8083731C
    r5 = r5 + 0; // 0x80837320
    *(0xc + r1) = r31; // stw @ 0x80837324
    /* lis r31, 0 */ // 0x80837328
    r31 = r31 + 0; // 0x8083732C
    *(8 + r1) = r30; // stw @ 0x80837330
    r30 = r3;
    /* lfs f0, 0x188(r31) */ // 0x80837338
    /* stfs f0, 0x2dc(r3) */ // 0x8083733C
    /* lfs f0, 0x1c(r31) */ // 0x80837340
    /* lfs f1, 0x28c(r5) */ // 0x80837344
    /* fadds f0, f1, f0 */ // 0x80837348
    /* stfs f0, 0x140(r3) */ // 0x8083734C
    FUN_80829EC4(); // bl 0x80829EC4
    r0 = *(0x7c + r30); // lwz @ 0x80837354
    /* li r4, 0 */ // 0x80837358
    r3 = *(0x9c + r30); // lwz @ 0x8083735C
    r0 = r0 | 0x2000; // 0x80837360
    *(0x7c + r30) = r0; // stw @ 0x80837364
    r3 = *(0x28 + r3); // lwz @ 0x80837368
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80837370
    /* lfs f1, 0(r31) */ // 0x80837374
    r12 = *(0x1c + r12); // lwz @ 0x80837378
    /* mtctr r12 */ // 0x8083737C
    /* bctrl  */ // 0x80837380
    r0 = *(0x14 + r1); // lwz @ 0x80837384
    r31 = *(0xc + r1); // lwz @ 0x80837388
    r30 = *(8 + r1); // lwz @ 0x8083738C
    return;
}