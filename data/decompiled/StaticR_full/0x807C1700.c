/* Function at 0x807C1700, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_807C1700(int r3, int r4)
{
    r3 = *(8 + r3); // lwz @ 0x807C1700
    /* slwi r0, r4, 3 */ // 0x807C1704
    r3 = r3 + r0; // 0x807C1708
    return;
}