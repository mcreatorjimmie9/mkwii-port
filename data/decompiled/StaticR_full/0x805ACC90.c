/* Function at 0x805ACC90, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805ACC90(int r3, int r4)
{
    r0 = *(4 + r3); // lhz @ 0x805ACC90
    /* bgelr  */ // 0x805ACC98
    /* mulli r0, r4, 0xd8 */ // 0x805ACC9C
    r3 = *(0xc + r3); // lwz @ 0x805ACCA0
    /* li r4, 0 */ // 0x805ACCA4
    /* stbx r4, r3, r0 */ // 0x805ACCA8
    return;
}