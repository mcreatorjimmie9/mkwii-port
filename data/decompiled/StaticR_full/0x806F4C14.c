/* Function at 0x806F4C14, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_806F4C14(int r3)
{
    r0 = *(0x9dc + r3); // lwz @ 0x806F4C14
    /* cntlzw r0, r0 */ // 0x806F4C18
    /* srwi r3, r0, 5 */ // 0x806F4C1C
    return;
}