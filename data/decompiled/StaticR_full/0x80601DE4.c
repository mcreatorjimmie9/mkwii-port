/* Function at 0x80601DE4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80601DE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80601DEC
    r0 = *(4 + r4); // lwz @ 0x80601DF0
    if (<) goto 0x0x80601e04;
    if (<=) goto 0x0x80601e0c;
    if (!=) goto 0x0x80601e60;
    if (!=) goto 0x0x80601e3c;
    r4 = *(4 + r3); // lwz @ 0x80601E14
    r4 = *(4 + r4); // lwz @ 0x80601E18
    r0 = *(8 + r4); // lwz @ 0x80601E1C
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80601E20
    if (!=) goto 0x0x80601e3c;
    r4 = *(0xc + r4); // lwz @ 0x80601E28
    /* rlwinm. r0, r4, 0, 4, 4 */ // 0x80601E2C
    if (!=) goto 0x0x80601e3c;
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x80601E34
    if (==) goto 0x0x80601e60;
    r3 = r3 + 4; // 0x80601E3C
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80601E44
    /* lis r4, 0 */ // 0x80601E48
    /* lfs f1, 0(r4) */ // 0x80601E4C
    /* li r4, 0x10f */ // 0x80601E50
    r12 = *(0xe4 + r12); // lwz @ 0x80601E54
    /* mtctr r12 */ // 0x80601E58
    /* bctrl  */ // 0x80601E5C
    r0 = *(0x14 + r1); // lwz @ 0x80601E60
    return;
}