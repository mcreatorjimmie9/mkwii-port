/* Function at 0x8066084C, size=136 bytes */
/* Stack frame: 0 bytes */

int FUN_8066084C(int r3, int r4, int r5, int r6)
{
    /* bltlr  */ // 0x80660850
    r0 = *(0x260 + r3); // lwz @ 0x80660854
    /* bgelr  */ // 0x8066085C
    /* slwi r0, r4, 4 */ // 0x80660860
    /* lis r4, 0 */ // 0x80660864
    r6 = r3 + r0; // 0x80660868
    r3 = *(0 + r4); // lwz @ 0x8066086C
    r5 = *(0 + r6); // lwz @ 0x80660870
    r3 = *(0x98 + r3); // lwz @ 0x80660874
    r0 = *(0xc4 + r5); // lwz @ 0x80660878
    *(0x3c4 + r3) = r0; // stw @ 0x8066087C
    r6 = *(4 + r6); // lwz @ 0x80660880
    r3 = *(0 + r4); // lwz @ 0x80660884
    r0 = *(0xb8 + r5); // lwz @ 0x8066088C
    r3 = *(0x98 + r3); // lwz @ 0x80660890
    *(0x3c8 + r3) = r0; // stw @ 0x80660894
    if (<=) goto 0x0x806608a8;
    if (==) goto 0x0x806608b8;
    return;
    r3 = *(0 + r4); // lwz @ 0x806608A8
    r3 = *(0x98 + r3); // lwz @ 0x806608AC
    *(0x3cc + r3) = r6; // stw @ 0x806608B0
    return;
    r3 = *(0 + r4); // lwz @ 0x806608B8
    /* lis r4, 0 */ // 0x806608BC
    r4 = *(0 + r4); // lwz @ 0x806608C0
    r3 = *(0x98 + r3); // lwz @ 0x806608C4
    r0 = *(0x36 + r4); // lha @ 0x806608C8
    *(0x3cc + r3) = r0; // stw @ 0x806608CC
    return;
}