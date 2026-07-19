/* Function at 0x806E6508, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_806E6508(int r3)
{
    r0 = *(0xec + r3); // lwz @ 0x806E6508
    /* beqlr  */ // 0x806E6510
    /* li r0, 2 */ // 0x806E6514
    *(0xec + r3) = r0; // stw @ 0x806E6518
    return;
}