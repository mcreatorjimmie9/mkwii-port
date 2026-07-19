/* Function at 0x805E558C, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805E558C(int r3, int r4)
{
    r3 = *(0x2c + r3); // lwz @ 0x805E558C
    /* beqlr  */ // 0x805E5594
    /* slwi r0, r4, 2 */ // 0x805E5598
    /* lwzx r3, r3, r0 */ // 0x805E559C
    /* beqlr  */ // 0x805E55A4
    /* stfs f1, 8(r3) */ // 0x805E55A8
    return;
}