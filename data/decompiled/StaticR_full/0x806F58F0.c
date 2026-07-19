/* Function at 0x806F58F0, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_806F58F0(int r3)
{
    r0 = *(0x1c + r3); // lwz @ 0x806F58F0
    /* lis r3, 2 */ // 0x806F58F4
    r3 = r3 + -0x5251; // 0x806F58F8
    /* beqlr  */ // 0x806F5900
    /* neg r3, r0 */ // 0x806F5904
    return;
}