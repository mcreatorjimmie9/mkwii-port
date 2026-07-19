/* Function at 0x806E4428, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_806E4428(int r3)
{
    /* lis r3, 0 */ // 0x806E4428
    r3 = *(0 + r3); // lwz @ 0x806E442C
    r3 = *(0x2b84 + r3); // lwz @ 0x806E4430
    return;
}