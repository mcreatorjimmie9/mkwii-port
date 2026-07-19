/* Function at 0x807C235C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C235C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C2368
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x807C2370
    r12 = *(0 + r3); // lwz @ 0x807C2374
    r12 = *(0x20 + r12); // lwz @ 0x807C2378
    /* mtctr r12 */ // 0x807C237C
    /* bctrl  */ // 0x807C2380
    if (!=) goto 0x0x807c23a8;
    r3 = *(0x10 + r31); // lwz @ 0x807C238C
    r12 = *(0 + r3); // lwz @ 0x807C2390
    r12 = *(0x24 + r12); // lwz @ 0x807C2394
    /* mtctr r12 */ // 0x807C2398
    /* bctrl  */ // 0x807C239C
    if (==) goto 0x0x807c23b0;
    /* li r3, 0 */ // 0x807C23A8
    /* b 0x807c23ec */ // 0x807C23AC
    r3 = *(0x14 + r31); // lwz @ 0x807C23B0
    /* lfs f1, 0x20(r3) */ // 0x807C23B4
    FUN_807DA5AC(r3); // bl 0x807DA5AC
    if (!=) goto 0x0x807c23e0;
    r3 = *(0x10 + r31); // lwz @ 0x807C23C4
    r12 = *(0 + r3); // lwz @ 0x807C23C8
    r12 = *(0x28 + r12); // lwz @ 0x807C23CC
    /* mtctr r12 */ // 0x807C23D0
    /* bctrl  */ // 0x807C23D4
    if (==) goto 0x0x807c23e8;
    /* li r3, 1 */ // 0x807C23E0
    /* b 0x807c23ec */ // 0x807C23E4
    /* li r3, 0 */ // 0x807C23E8
    r0 = *(0x14 + r1); // lwz @ 0x807C23EC
    r31 = *(0xc + r1); // lwz @ 0x807C23F0
    return;
}