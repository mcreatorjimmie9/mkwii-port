/* Function at 0x805F4CDC, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_805F4CDC(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x805F4CDC
    r0 = *(0 + r4); // lwz @ 0x805F4CE0
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805F4CE4
    /* bnelr  */ // 0x805F4CE8
    r0 = *(0x14 + r3); // lwz @ 0x805F4CEC
    /* bgelr  */ // 0x805F4CF4
    /* mulli r0, r0, 0xc */ // 0x805F4CF8
    /* lis r5, 0 */ // 0x805F4CFC
    r4 = r3;
    r5 = r5 + 0; // 0x805F4D04
    r3 = r5 + r0; // 0x805F4D08
    /* b 0x805e3430 */ // 0x805F4D0C
}