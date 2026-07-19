/* Function at 0x806E38D0, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_806E38D0(int r3, int r4)
{
    /* lis r3, 0 */ // 0x806E38D0
    r0 = *(0 + r3); // lwz @ 0x806E38D8
    if (<) goto 0x0x806e38f4;
    if (>=) goto 0x0x806e38f4;
    r3 = r0 + r4; // 0x806E38E8
    r0 = *(0x2920 + r3); // lbz @ 0x806E38EC
    /* b 0x806e38f8 */ // 0x806E38F0
    /* li r0, 0xff */ // 0x806E38F4
    /* lis r4, 0 */ // 0x806E38F8
    r3 = r0 rlwinm 5; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x806E3900
    r0 = r0 rlwinm 2; // rlwinm
    r3 = r4 + r3; // 0x806E3908
    r3 = *(0x27a4 + r3); // lwz @ 0x806E390C
    /* mulli r3, r3, 0x30 */ // 0x806E3910
    r3 = r4 + r3; // 0x806E3914
    r3 = r3 + r0; // 0x806E3918
    r3 = *(0x150 + r3); // lwz @ 0x806E391C
    r3 = *(8 + r3); // lwz @ 0x806E3920
    r3 = *(0 + r3); // lwz @ 0x806E3924
    return;
}