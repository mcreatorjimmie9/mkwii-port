/* Function at 0x806802EC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806802EC(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806802F4
    *(0x14 + r1) = r0; // stw @ 0x806802F8
    r3 = *(0 + r3); // lwz @ 0x806802FC
    r3 = *(0 + r3); // lwz @ 0x80680300
    FUN_8068608C(r3); // bl 0x8068608C
    if (==) goto 0x0x80680324;
    r3 = *(0x38 + r3); // lwz @ 0x80680310
    r12 = *(0 + r3); // lwz @ 0x80680314
    r12 = *(0x24 + r12); // lwz @ 0x80680318
    /* mtctr r12 */ // 0x8068031C
    /* bctrl  */ // 0x80680320
    /* lis r3, 0 */ // 0x80680324
    /* li r0, 0 */ // 0x80680328
    r3 = *(0 + r3); // lwz @ 0x8068032C
    r3 = *(0 + r3); // lwz @ 0x80680330
    *(0x388 + r3) = r0; // stb @ 0x80680334
    r0 = *(0x14 + r1); // lwz @ 0x80680338
    return;
}