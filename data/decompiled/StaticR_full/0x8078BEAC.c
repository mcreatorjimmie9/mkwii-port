/* Function at 0x8078BEAC, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_8078BEAC(int r3, int r4, int r5)
{
    r3 = *(0x18 + r3); // lwz @ 0x8078BEAC
    if (==) goto 0x0x8078bec0;
    r0 = *(0x90 + r3); // lwz @ 0x8078BEB8
    /* b 0x8078bec4 */ // 0x8078BEBC
    /* li r0, -1 */ // 0x8078BEC0
    /* bnelr  */ // 0x8078BEC8
    /* beqlr  */ // 0x8078BED0
    r4 = r5;
    /* b 0x805e3430 */ // 0x8078BED8
}