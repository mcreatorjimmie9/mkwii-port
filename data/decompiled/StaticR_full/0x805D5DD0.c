/* Function at 0x805D5DD0, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5DD0(int r3, int r4, int r5)
{
    /* mulli r4, r4, 0xc80 */ // 0x805D5DD0
    /* mulli r0, r5, 0x64 */ // 0x805D5DD4
    r3 = r3 + r4; // 0x805D5DD8
    r3 = r3 + r0; // 0x805D5DDC
    r3 = r3 + 0xe20; // 0x805D5DE0
    return;
}