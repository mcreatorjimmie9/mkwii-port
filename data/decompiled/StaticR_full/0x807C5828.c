/* Function at 0x807C5828, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_807C5828(int r3)
{
    r3 = *(0x168 + r3); // lwz @ 0x807C5828
    *(0x2c + r3) = r4; // stw @ 0x807C582C
    return;
}