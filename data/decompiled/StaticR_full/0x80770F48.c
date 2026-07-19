/* Function at 0x80770F48, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80770F48(int r3, int r4)
{
    r3 = *(4 + r3); // lwz @ 0x80770F48
    /* slwi r0, r4, 2 */ // 0x80770F4C
    /* lwzx r3, r3, r0 */ // 0x80770F50
    return;
}