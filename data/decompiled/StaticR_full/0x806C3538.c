/* Function at 0x806C3538, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806C3538(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x806C3540
    /* li r5, 1 */ // 0x806C3544
    *(0x14 + r1) = r0; // stw @ 0x806C3548
    /* lfs f1, 0(r4) */ // 0x806C354C
    /* li r4, 0x7c */ // 0x806C3550
    r12 = *(0 + r3); // lwz @ 0x806C3554
    r12 = *(0x1c + r12); // lwz @ 0x806C3558
    /* mtctr r12 */ // 0x806C355C
    /* bctrl  */ // 0x806C3560
    /* lis r3, 0 */ // 0x806C3564
    r3 = *(0 + r3); // lwz @ 0x806C3568
    r3 = *(0 + r3); // lwz @ 0x806C356C
    FUN_80686240(r3); // bl 0x80686240
    r0 = *(0x14 + r1); // lwz @ 0x806C3574
    return;
}