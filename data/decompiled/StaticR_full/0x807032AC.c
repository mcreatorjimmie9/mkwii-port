/* Function at 0x807032AC, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_807032AC(int r3)
{
    /* addis r3, r3, 1 */ // 0x807032AC
    r3 = *(-0x7500 + r3); // lwz @ 0x807032B0
    return;
}