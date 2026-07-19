/* Function at 0x8064A3F8, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8064A3F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 1 */ // 0x8064A410
    *(0x14 + r1) = r29; // stw @ 0x8064A414
    r29 = r3;
    r3 = r3 + 0x98; // 0x8064A41C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064A424
    r31 = r3;
    if (==) goto 0x0x8064a440;
    if (==) goto 0x0x8064a454;
    /* b 0x8064a4a4 */ // 0x8064A43C
    /* lis r5, 0 */ // 0x8064A440
    /* li r4, 1 */ // 0x8064A444
    /* lfs f1, 0(r5) */ // 0x8064A448
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8064a4a4 */ // 0x8064A450
    r3 = *(0 + r3); // lwz @ 0x8064A454
    /* slwi r0, r0, 4 */ // 0x8064A458
    /* lwzx r3, r3, r0 */ // 0x8064A45C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8064A464
    /* lis r0, 0x4330 */ // 0x8064A468
    *(0xc + r1) = r4; // stw @ 0x8064A46C
    /* lis r3, 0 */ // 0x8064A470
    /* lfd f3, 0(r3) */ // 0x8064A474
    /* lis r5, 0 */ // 0x8064A478
    *(8 + r1) = r0; // stw @ 0x8064A47C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8064A484
    /* li r4, 1 */ // 0x8064A488
    /* lfd f2, 8(r1) */ // 0x8064A48C
    /* lfs f0, 0(r5) */ // 0x8064A490
    /* fsubs f2, f2, f3 */ // 0x8064A494
    /* fdivs f1, f1, f2 */ // 0x8064A498
    /* fsubs f1, f0, f1 */ // 0x8064A49C
    FUN_8069F718(); // bl 0x8069F718
    r3 = r29 + 0x98; // 0x8064A4A4
    /* li r4, 2 */ // 0x8064A4A8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064A4B0
    /* li r4, 0 */ // 0x8064A4B4
    /* lfs f1, 0(r5) */ // 0x8064A4B8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r12 = *(0 + r29); // lwz @ 0x8064A4C0
    r3 = r29;
    r4 = r30;
    r12 = *(0x40 + r12); // lwz @ 0x8064A4CC
    /* mtctr r12 */ // 0x8064A4D0
    /* bctrl  */ // 0x8064A4D4
    r3 = *(0x238 + r29); // lwz @ 0x8064A4D8
    if (==) goto 0x0x8064a4fc;
    r12 = *(0 + r3); // lwz @ 0x8064A4E4
}