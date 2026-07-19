/* Function at 0x8062DE24, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8062DE24(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8062DE24
    /* lfs f0, 0x120(r3) */ // 0x8062DE28
    /* lfs f2, 0(r4) */ // 0x8062DE2C
    /* fmuls f1, f2, f1 */ // 0x8062DE30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8062DE34
    /* blelr  */ // 0x8062DE38
    /* stfs f1, 0x120(r3) */ // 0x8062DE3C
    return;
}