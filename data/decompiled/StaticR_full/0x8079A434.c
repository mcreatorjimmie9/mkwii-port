/* Function at 0x8079A434, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8079A434(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8079A444
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8079A44C
    r30 = r3;
    if (!=) goto 0x0x8079a470;
    r12 = *(0 + r31); // lwz @ 0x8079A458
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x8079A460
    /* mtctr r12 */ // 0x8079A464
    /* bctrl  */ // 0x8079A468
    r5 = r3;
    r0 = *(0x9f + r30); // lbz @ 0x8079A470
    if (!=) goto 0x0x8079a48c;
    r4 = r31;
    r3 = r30 + 0x94; // 0x8079A480
    /* clrlwi r5, r5, 0x10 */ // 0x8079A484
    FUN_8078FE10(r4, r3); // bl 0x8078FE10
    r0 = *(0x14 + r1); // lwz @ 0x8079A48C
    r31 = *(0xc + r1); // lwz @ 0x8079A490
    r30 = *(8 + r1); // lwz @ 0x8079A494
    return;
}