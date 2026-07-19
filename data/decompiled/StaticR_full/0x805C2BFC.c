/* Function at 0x805C2BFC, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_805C2BFC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805C2BFC
    /* li r3, 3 */ // 0x805C2C00
    r4 = *(0 + r4); // lwz @ 0x805C2C04
    r0 = *(0xb90 + r4); // lwz @ 0x805C2C08
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805C2C0C
    /* beqlr  */ // 0x805C2C10
    r3 = *(0xb8d + r4); // lbz @ 0x805C2C14
    r0 = r3 + 0xff; // 0x805C2C18
    /* clrlwi r0, r0, 0x18 */ // 0x805C2C1C
    /* blelr  */ // 0x805C2C24
    /* li r3, 3 */ // 0x805C2C28
    return;
}