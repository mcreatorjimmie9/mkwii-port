/* Function at 0x80671C0C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80671C0C(int r4)
{
    /* beqlr  */ // 0x80671C10
    *(0x10 + r3) = r4; // stw @ 0x80671C14
    return;
}