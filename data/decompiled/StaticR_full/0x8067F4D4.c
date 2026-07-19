/* Function at 0x8067F4D4, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_8067F4D4(int r3, int r4)
{
    /* clrlwi r0, r4, 0x18 */ // 0x8067F4D4
    /* lis r3, 0 */ // 0x8067F4D8
    /* mulli r0, r0, 0xec */ // 0x8067F4DC
    r3 = *(0 + r3); // lwz @ 0x8067F4E0
    r3 = r3 + r0; // 0x8067F4E4
    r0 = *(0x10 + r3); // lwz @ 0x8067F4E8
    *(8 + r3) = r0; // stw @ 0x8067F4EC
    return;
}