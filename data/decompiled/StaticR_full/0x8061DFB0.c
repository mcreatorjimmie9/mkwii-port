/* Function at 0x8061DFB0, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DFB0(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061DFB0
    /* slwi r0, r4, 2 */ // 0x8061DFB4
    r3 = *(0x10 + r3); // lwz @ 0x8061DFB8
    /* lwzx r3, r3, r0 */ // 0x8061DFBC
    r3 = *(0x98 + r3); // lwz @ 0x8061DFC0
    return;
}