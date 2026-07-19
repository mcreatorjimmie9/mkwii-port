/* Function at 0x808A89B4, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_808A89B4(int r3)
{
    r0 = *(0xb0 + r3); // lwz @ 0x808A89B4
    /* beqlr  */ // 0x808A89BC
    /* li r0, 1 */ // 0x808A89C0
    *(0xb0 + r3) = r0; // stw @ 0x808A89C4
    return;
}