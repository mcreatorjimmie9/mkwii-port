/* Function at 0x8086CD00, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8086CD00(int r3)
{
    r3 = *(0x1a0 + r3); // lwz @ 0x8086CD00
    r3 = *(0x18 + r3); // lbz @ 0x8086CD04
    return;
}