/* Function at 0x805D663C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D663C(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D663C
    r3 = *(-0x6edc + r3); // lwz @ 0x805D6640
    return;
}