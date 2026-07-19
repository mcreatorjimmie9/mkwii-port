/* Function at 0x806A2314, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806A2314(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x806A232C
    *(0x14 + r1) = r29; // stw @ 0x806A2330
    r29 = r3;
    r3 = r3 + 0x98; // 0x806A2338
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A2340
    r31 = r3;
    if (==) goto 0x0x806a235c;
    if (==) goto 0x0x806a2370;
    /* b 0x806a23c0 */ // 0x806A2358
    /* lis r5, 0 */ // 0x806A235C
    /* li r4, 1 */ // 0x806A2360
    /* lfs f1, 0(r5) */ // 0x806A2364
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a23c0 */ // 0x806A236C
    r3 = *(0 + r3); // lwz @ 0x806A2370
    /* slwi r0, r0, 4 */ // 0x806A2374
    /* lwzx r3, r3, r0 */ // 0x806A2378
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A2380
    /* lis r0, 0x4330 */ // 0x806A2384
    *(0xc + r1) = r4; // stw @ 0x806A2388
    /* lis r3, 0 */ // 0x806A238C
    /* lfd f3, 0(r3) */ // 0x806A2390
    /* lis r5, 0 */ // 0x806A2394
    *(8 + r1) = r0; // stw @ 0x806A2398
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A23A0
    /* li r4, 1 */ // 0x806A23A4
    /* lfd f2, 8(r1) */ // 0x806A23A8
    /* lfs f0, 0(r5) */ // 0x806A23AC
    /* fsubs f2, f2, f3 */ // 0x806A23B0
    /* fdivs f1, f1, f2 */ // 0x806A23B4
    /* fsubs f1, f0, f1 */ // 0x806A23B8
    FUN_8069F718(); // bl 0x8069F718
    r3 = r29 + 0x98; // 0x806A23C0
    /* li r4, 1 */ // 0x806A23C4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A23CC
    /* li r4, 0 */ // 0x806A23D0
    /* lfs f1, 0(r5) */ // 0x806A23D4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = *(0x214 + r29); // lwz @ 0x806A23DC
    /* li r4, 1 */ // 0x806A23E0
    r12 = *(0 + r3); // lwz @ 0x806A23E4
    r12 = *(0x10 + r12); // lwz @ 0x806A23E8
    /* mtctr r12 */ // 0x806A23EC
    /* bctrl  */ // 0x806A23F0
    r3 = *(0x2a4 + r29); // lwz @ 0x806A23F4
    if (==) goto 0x0x806a2418;
    r12 = *(0 + r3); // lwz @ 0x806A2400
}