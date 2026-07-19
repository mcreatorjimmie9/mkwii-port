/* Function at 0x806A52B0, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A52B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 4 */ // 0x806A52C4
    *(8 + r1) = r30; // stw @ 0x806A52C8
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A52D0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A52D8
    /* li r4, 0 */ // 0x806A52DC
    /* lfs f1, 0(r5) */ // 0x806A52E0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A52E8
    /* addic. r4, r3, -1 */ // 0x806A52EC
    if (>=) goto 0x0x806a52fc;
    r3 = *(0x290 + r30); // lwz @ 0x806A52F4
    r4 = r3 + -1; // 0x806A52F8
    r12 = *(0 + r30); // lwz @ 0x806A52FC
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A5304
    /* mtctr r12 */ // 0x806A5308
    /* bctrl  */ // 0x806A530C
    r12 = *(0 + r30); // lwz @ 0x806A5310
    r3 = r30;
    r4 = r31;
    r12 = *(0x4c + r12); // lwz @ 0x806A531C
    /* mtctr r12 */ // 0x806A5320
    /* bctrl  */ // 0x806A5324
    r3 = *(0x284 + r30); // lwz @ 0x806A5328
    if (==) goto 0x0x806a534c;
    r12 = *(0 + r3); // lwz @ 0x806A5334
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A5340
    /* mtctr r12 */ // 0x806A5344
    /* bctrl  */ // 0x806A5348
    r0 = *(0x14 + r1); // lwz @ 0x806A534C
    r31 = *(0xc + r1); // lwz @ 0x806A5350
    r30 = *(8 + r1); // lwz @ 0x806A5354
    return;
}