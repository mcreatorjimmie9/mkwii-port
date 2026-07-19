/* Function at 0x806C34AC, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806C34AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C34B8
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806C34C0
    if (==) goto 0x0x806c34d8;
    if (==) goto 0x0x806c34f0;
    /* b 0x806c3524 */ // 0x806C34D4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C34E4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806c3524 */ // 0x806C34EC
    r3 = r4;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806C34F8
    r3 = r31;
    /* li r4, 0x7c */ // 0x806C3500
    /* li r5, 1 */ // 0x806C3504
    r12 = *(0x1c + r12); // lwz @ 0x806C3508
    /* mtctr r12 */ // 0x806C350C
    /* bctrl  */ // 0x806C3510
    /* lis r3, 0 */ // 0x806C3514
    r3 = *(0 + r3); // lwz @ 0x806C3518
    r3 = *(0 + r3); // lwz @ 0x806C351C
    FUN_80686240(r3); // bl 0x80686240
    r0 = *(0x14 + r1); // lwz @ 0x806C3524
    r31 = *(0xc + r1); // lwz @ 0x806C3528
    return;
}