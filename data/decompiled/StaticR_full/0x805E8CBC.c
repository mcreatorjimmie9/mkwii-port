/* Function at 0x805E8CBC, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_805E8CBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E8CC4
    r3 = *(0xc + r3); // lwz @ 0x805E8CC8
    if (==) goto 0x0x805e8cf4;
    /* lis r4, 0 */ // 0x805E8CD4
    r4 = r4 + 0; // 0x805E8CD8
    *(8 + r1) = r4; // stw @ 0x805E8CDC
    r12 = *(0 + r3); // lwz @ 0x805E8CE4
    r12 = *(8 + r12); // lwz @ 0x805E8CE8
    /* mtctr r12 */ // 0x805E8CEC
    /* bctrl  */ // 0x805E8CF0
    r0 = *(0x14 + r1); // lwz @ 0x805E8CF4
    return;
}