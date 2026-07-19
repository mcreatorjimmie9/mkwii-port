/* Function at 0x8061DC98, size=88 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DC98(int r3, int r6)
{
    /* lis r6, 0 */ // 0x8061DC98
    r6 = *(0 + r6); // lwz @ 0x8061DC9C
    r0 = *(0xb74 + r6); // lwz @ 0x8061DCA0
    /* beqlr  */ // 0x8061DCA8
    r3 = *(0 + r3); // lwz @ 0x8061DCAC
    r6 = *(4 + r3); // lwz @ 0x8061DCB0
    r0 = *(0xc + r6); // lwz @ 0x8061DCB4
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x8061DCB8
    /* bnelr  */ // 0x8061DCBC
    r0 = *(4 + r6); // lwz @ 0x8061DCC0
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8061DCC4
    /* bnelr  */ // 0x8061DCC8
    r3 = *(0 + r3); // lwz @ 0x8061DCCC
    /* lis r6, 0 */ // 0x8061DCD0
    r6 = *(0 + r6); // lwz @ 0x8061DCD4
    r0 = *(0x10 + r3); // lbz @ 0x8061DCD8
    r3 = *(0xc + r6); // lwz @ 0x8061DCDC
    /* slwi r0, r0, 2 */ // 0x8061DCE0
    /* lwzx r3, r3, r0 */ // 0x8061DCE4
    r3 = *(0x48 + r3); // lwz @ 0x8061DCE8
    /* b 0x805b1660 */ // 0x8061DCEC
}