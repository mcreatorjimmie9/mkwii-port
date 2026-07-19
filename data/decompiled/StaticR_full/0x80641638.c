/* Function at 0x80641638, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80641638(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80641640
    /* li r6, 0 */ // 0x80641644
    *(0x24 + r1) = r0; // stw @ 0x80641648
    /* li r0, 2 */ // 0x8064164C
    *(0x1c + r1) = r31; // stw @ 0x80641650
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80641658
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80641660
    *(0x90 + r3) = r0; // stw @ 0x80641664
    /* mtctr r0 */ // 0x80641668
    r0 = *(0 + r4); // lhz @ 0x8064166C
    if (==) goto 0x0x80641680;
    r0 = r5 + 1; // 0x80641678
    /* clrlwi r5, r0, 0x10 */ // 0x8064167C
    r0 = *(0x18 + r4); // lhz @ 0x80641680
    if (==) goto 0x0x80641694;
    r0 = r5 + 1; // 0x8064168C
    /* clrlwi r5, r0, 0x10 */ // 0x80641690
    r0 = *(0x30 + r4); // lhz @ 0x80641694
    if (==) goto 0x0x806416a8;
    r0 = r5 + 1; // 0x806416A0
    /* clrlwi r5, r0, 0x10 */ // 0x806416A4
    r0 = *(0x48 + r4); // lhz @ 0x806416A8
    if (==) goto 0x0x806416bc;
    r0 = r5 + 1; // 0x806416B4
    /* clrlwi r5, r0, 0x10 */ // 0x806416B8
    r0 = *(0x60 + r4); // lhz @ 0x806416BC
    if (==) goto 0x0x806416d0;
    r0 = r5 + 1; // 0x806416C8
    /* clrlwi r5, r0, 0x10 */ // 0x806416CC
    r0 = *(0x78 + r4); // lhz @ 0x806416D0
    if (==) goto 0x0x806416e4;
    r0 = r5 + 1; // 0x806416DC
    /* clrlwi r5, r0, 0x10 */ // 0x806416E0
    r0 = *(0x90 + r4); // lhz @ 0x806416E4
    if (==) goto 0x0x806416f8;
    r0 = r5 + 1; // 0x806416F0
    /* clrlwi r5, r0, 0x10 */ // 0x806416F4
    r0 = *(0xa8 + r4); // lhz @ 0x806416F8
    if (==) goto 0x0x8064170c;
    r0 = r5 + 1; // 0x80641704
    /* clrlwi r5, r0, 0x10 */ // 0x80641708
    r4 = r4 + 0xc0; // 0x8064170C
    r6 = r6 + 7; // 0x80641710
    if (counter-- != 0) goto 0x0x8064166c;
    /* extsh r29, r5 */ // 0x80641718
    *(0 + r3) = r5; // sth @ 0x8064171C
    /* mulli r3, r29, 0x30 */ // 0x80641720
    r3 = r3 + 0x10; // 0x80641724
    FUN_805E3430(r3); // bl 0x805E3430
}