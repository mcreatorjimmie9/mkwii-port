/* Function at 0x80881838, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80881838(int r3)
{
    /* lis r3, 0 */ // 0x80881838
    r3 = *(0 + r3); // lwz @ 0x8088183C
    r3 = *(0 + r3); // lwz @ 0x80881840
    r3 = *(0 + r3); // lwz @ 0x80881844
    return;
}