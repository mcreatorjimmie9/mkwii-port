/* Function at 0x8086E9B4, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8086E9B4(int r3)
{
    /* lis r3, 0 */ // 0x8086E9B4
    r3 = *(0 + r3); // lwz @ 0x8086E9B8
    r3 = *(8 + r3); // lbz @ 0x8086E9BC
    return;
}