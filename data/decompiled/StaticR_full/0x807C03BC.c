/* Function at 0x807C03BC, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_807C03BC(int r3, int r4)
{
    r0 = *(0x20 + r3); // lbz @ 0x807C03BC
    if (==) goto 0x0x807c03d0;
    /* srwi r3, r4, 1 */ // 0x807C03C8
    return;
    /* lis r3, 0 */ // 0x807C03D0
    r3 = *(0 + r3); // lwz @ 0x807C03D4
    r3 = *(4 + r3); // lwz @ 0x807C03D8
    /* b 0x805e364c */ // 0x807C03DC
}