/* Function at 0x805DE5F8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_805DE5F8(int r3, int r4)
{
    r3 = *(0x10 + r3); // lwz @ 0x805DE5F8
    /* slwi r0, r4, 2 */ // 0x805DE5FC
    /* li r4, 0 */ // 0x805DE600
    r3 = *(4 + r3); // lwz @ 0x805DE604
    /* lwzx r3, r3, r0 */ // 0x805DE608
    *(8 + r3) = r4; // stw @ 0x805DE60C
    return;
}