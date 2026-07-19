/* Function at 0x8061F0C8, size=76 bytes */
/* Stack frame: 0 bytes */

int FUN_8061F0C8(int r3, int r4, int r5)
{
    r4 = *(0 + r3); // lwz @ 0x8061F0C8
    r3 = *(0 + r4); // lwz @ 0x8061F0CC
    r5 = *(0x34 + r3); // lwz @ 0x8061F0D0
    /* beqlr  */ // 0x8061F0D8
    r3 = *(4 + r4); // lwz @ 0x8061F0DC
    r3 = *(8 + r3); // lwz @ 0x8061F0E0
    /* rlwinm. r0, r3, 0, 0x15, 0x15 */ // 0x8061F0E4
    /* bnelr  */ // 0x8061F0E8
    /* rlwinm. r0, r3, 0, 0x12, 0x12 */ // 0x8061F0EC
    if (==) goto 0x0x8061f104;
    r3 = *(0x28 + r4); // lwz @ 0x8061F0F4
    r0 = *(0x12c + r3); // lha @ 0x8061F0F8
    /* bltlr  */ // 0x8061F100
    r3 = *(0xc + r5); // lwz @ 0x8061F104
    r0 = r3 + 1; // 0x8061F108
    *(0xc + r5) = r0; // stw @ 0x8061F10C
    return;
}