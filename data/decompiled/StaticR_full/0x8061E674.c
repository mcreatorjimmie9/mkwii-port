/* Function at 0x8061E674, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E674(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061E674
    *(0x24 + r3) = r4; // stw @ 0x8061E678
    return;
}