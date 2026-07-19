/* Function at 0x805D66E8, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D66E8(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D66E8
    /* slwi r0, r4, 2 */ // 0x805D66EC
    r3 = r3 + r0; // 0x805D66F0
    r3 = *(-0x6eb8 + r3); // lwz @ 0x805D66F4
    return;
}