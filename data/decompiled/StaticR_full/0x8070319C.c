/* Function at 0x8070319C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8070319C(int r3)
{
    /* addis r3, r3, 1 */ // 0x8070319C
    r3 = *(-0x764c + r3); // lwz @ 0x807031A0
    return;
}