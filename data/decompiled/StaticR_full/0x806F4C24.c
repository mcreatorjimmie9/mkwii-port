/* Function at 0x806F4C24, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_806F4C24(int r3, int r4)
{
    /* li r0, 1 */ // 0x806F4C24
    r3 = *(0x9e0 + r3); // lwz @ 0x806F4C28
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x806F4C30
    /* neg r0, r3 */ // 0x806F4C34
    r0 = r0 | r3; // 0x806F4C38
    /* srwi r3, r0, 0x1f */ // 0x806F4C3C
    return;
}