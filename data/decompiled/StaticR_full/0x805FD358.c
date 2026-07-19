/* Function at 0x805FD358, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FD358(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FD364
    r31 = r3;
    FUN_806206D8(); // bl 0x806206D8
    r12 = *(0x244 + r31); // lwz @ 0x805FD370
    r3 = r31 + 0x238; // 0x805FD374
    r12 = *(0x2c + r12); // lwz @ 0x805FD378
    /* mtctr r12 */ // 0x805FD37C
    /* bctrl  */ // 0x805FD380
    r12 = *(0x2d8 + r31); // lwz @ 0x805FD384
    r3 = r31 + 0x2cc; // 0x805FD388
    r12 = *(0x2c + r12); // lwz @ 0x805FD38C
    /* mtctr r12 */ // 0x805FD390
    /* bctrl  */ // 0x805FD394
    r0 = *(0x14 + r1); // lwz @ 0x805FD398
    r31 = *(0xc + r1); // lwz @ 0x805FD39C
    return;
}