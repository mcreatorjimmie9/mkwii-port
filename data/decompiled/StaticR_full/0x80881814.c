/* Function at 0x80881814, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80881814(int r3)
{
    r3 = *(0x64 + r3); // lwz @ 0x80881814
    r3 = *(0xc + r3); // lwz @ 0x80881818
    return;
}