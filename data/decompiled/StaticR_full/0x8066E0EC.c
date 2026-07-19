/* Function at 0x8066E0EC, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8066E0EC(int r3, int r4)
{
    r3 = *(4 + r3); // lwz @ 0x8066E0EC
    /* slwi r0, r4, 2 */ // 0x8066E0F0
    /* lwzx r3, r3, r0 */ // 0x8066E0F4
    return;
}