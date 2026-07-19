/* Function at 0x807EDC84, size=72 bytes */
/* Stack frame: 16 bytes */

int FUN_807EDC84(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807EDC8C
    r12 = *(0 + r3); // lwz @ 0x807EDC90
    r12 = *(0x24 + r12); // lwz @ 0x807EDC94
    /* mtctr r12 */ // 0x807EDC98
    /* bctrl  */ // 0x807EDC9C
    /* clrlwi r0, r3, 0x10 */ // 0x807EDCA0
    /* lis r3, 0 */ // 0x807EDCA4
    r3 = r3 + 0; // 0x807EDCAC
    if (!=) goto 0x0x807edcbc;
    /* lis r3, 0 */ // 0x807EDCB4
    r3 = r3 + 0; // 0x807EDCB8
    r0 = *(0x14 + r1); // lwz @ 0x807EDCBC
    return;
}