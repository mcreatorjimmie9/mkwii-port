/* Function at 0x8067F484, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_8067F484(int r3, int r4, int r5)
{
    /* clrlwi r0, r4, 0x18 */ // 0x8067F484
    /* lis r3, 0 */ // 0x8067F488
    /* mulli r0, r0, 0xec */ // 0x8067F48C
    r3 = *(0 + r3); // lwz @ 0x8067F490
    r4 = r5;
    r3 = r3 + r0; // 0x8067F498
    r3 = r3 + 4; // 0x8067F49C
    /* b 0x805b0b58 */ // 0x8067F4A0
}