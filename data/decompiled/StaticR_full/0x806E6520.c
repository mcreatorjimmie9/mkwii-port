/* Function at 0x806E6520, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_806E6520(int r3)
{
    r0 = *(0xec + r3); // lwz @ 0x806E6520
    /* beqlr  */ // 0x806E6528
    /* li r0, 3 */ // 0x806E652C
    *(0xec + r3) = r0; // stw @ 0x806E6530
    return;
}