/* Function at 0x8086E9A0, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_8086E9A0(int r3)
{
    /* lis r3, 0 */ // 0x8086E9A0
    r3 = *(0 + r3); // lwz @ 0x8086E9A4
    r3 = *(0 + r3); // lwz @ 0x8086E9A8
    r3 = r3 + -0x2d; // 0x8086E9AC
    return;
}