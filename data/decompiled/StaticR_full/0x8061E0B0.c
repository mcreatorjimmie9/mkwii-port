/* Function at 0x8061E0B0, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E0B0(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061E0B0
    /* slwi r0, r4, 2 */ // 0x8061E0B4
    r3 = *(0x10 + r3); // lwz @ 0x8061E0B8
    /* lwzx r3, r3, r0 */ // 0x8061E0BC
    r3 = *(0x98 + r3); // lwz @ 0x8061E0C0
    /* b 0x80627744 */ // 0x8061E0C4
}