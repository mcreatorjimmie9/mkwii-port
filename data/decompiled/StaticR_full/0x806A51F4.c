/* Function at 0x806A51F4, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A51F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 3 */ // 0x806A5208
    *(8 + r1) = r30; // stw @ 0x806A520C
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A5214
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A521C
    /* li r4, 0 */ // 0x806A5220
    /* lfs f1, 0(r5) */ // 0x806A5224
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A522C
    r0 = *(0x290 + r30); // lwz @ 0x806A5230
    r4 = r3 + 1; // 0x806A5234
    if (<) goto 0x0x806a5244;
    /* li r4, 0 */ // 0x806A5240
    r12 = *(0 + r30); // lwz @ 0x806A5244
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A524C
    /* mtctr r12 */ // 0x806A5250
    /* bctrl  */ // 0x806A5254
    r12 = *(0 + r30); // lwz @ 0x806A5258
    r3 = r30;
    r4 = r31;
    r12 = *(0x48 + r12); // lwz @ 0x806A5264
    /* mtctr r12 */ // 0x806A5268
    /* bctrl  */ // 0x806A526C
    r3 = *(0x284 + r30); // lwz @ 0x806A5270
    if (==) goto 0x0x806a5294;
    r12 = *(0 + r3); // lwz @ 0x806A527C
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A5288
    /* mtctr r12 */ // 0x806A528C
    /* bctrl  */ // 0x806A5290
    r0 = *(0x14 + r1); // lwz @ 0x806A5294
    r31 = *(0xc + r1); // lwz @ 0x806A5298
    r30 = *(8 + r1); // lwz @ 0x806A529C
    return;
}