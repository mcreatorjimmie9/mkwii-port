/* Function at 0x808287B4, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_808287B4(int r3)
{
    /* mulli r0, r3, 0x74 */ // 0x808287B4
    /* lis r3, 0 */ // 0x808287B8
    r3 = r3 + 0; // 0x808287BC
    r3 = r3 + r0; // 0x808287C0
    r0 = *(0x28 + r3); // lwz @ 0x808287C4
    /* clrlwi r3, r0, 0x18 */ // 0x808287C8
    r0 = r3 + 2; // 0x808287CC
    /* clrlwi r3, r0, 0x18 */ // 0x808287D0
    return;
}