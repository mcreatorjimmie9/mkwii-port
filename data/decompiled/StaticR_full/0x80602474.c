/* Function at 0x80602474, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80602474(int r3)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 4; // 0x8060247C
    *(0x14 + r1) = r0; // stw @ 0x80602480
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x80602488
    r12 = *(0x18 + r12); // lwz @ 0x8060248C
    /* mtctr r12 */ // 0x80602490
    /* bctrl  */ // 0x80602494
    r0 = *(0x14 + r1); // lwz @ 0x80602498
    /* li r3, -1 */ // 0x8060249C
    return;
}