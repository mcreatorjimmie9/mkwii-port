/* Function at 0x8078AF4C, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8078AF4C(int r3, int r4)
{
    r3 = *(0x18 + r3); // lwz @ 0x8078AF4C
    /* beqlr  */ // 0x8078AF54
    /* beqlr  */ // 0x8078AF58
    /* li r4, 0x14 */ // 0x8078AF5C
    /* b 0x805e3430 */ // 0x8078AF60
}