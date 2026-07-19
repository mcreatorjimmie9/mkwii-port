/* Function at 0x807D7044, size=72 bytes */
/* Stack frame: 0 bytes */

void FUN_807D7044(int r3, int r4, int r5)
{
    r4 = *(0x1f0 + r3); // lwz @ 0x807D7044
    /* lis r5, 0 */ // 0x807D7048
    r5 = r5 + 0; // 0x807D704C
    r4 = *(0 + r4); // lwz @ 0x807D7050
    /* lfs f0, 8(r5) */ // 0x807D7054
    r4 = *(0 + r4); // lwz @ 0x807D7058
    r4 = *(0 + r4); // lwz @ 0x807D705C
    r0 = *(8 + r4); // lwz @ 0x807D7060
    if (>) goto 0x0x807d70a8;
    /* lis r4, 0 */ // 0x807D706C
    /* slwi r0, r0, 2 */ // 0x807D7070
    r4 = r4 + 0; // 0x807D7074
    /* lwzx r4, r4, r0 */ // 0x807D7078
    /* mtctr r4 */ // 0x807D707C
    /* bctr  */ // 0x807D7080
    /* lfs f0, 0xc(r5) */ // 0x807D7084
    /* b 0x807d70a8 */ // 0x807D7088
}