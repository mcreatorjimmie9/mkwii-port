/* Function at 0x806007C0, size=132 bytes */
/* Stack frame: 0 bytes */

void FUN_806007C0(int r3, int r4, int r6)
{
    /* li r3, 0 */ // 0x806007C4
    if (==) goto 0x0x806007f0;
    /* lis r4, 0 */ // 0x806007CC
    r4 = *(0 + r4); // lwz @ 0x806007D0
    r0 = *(4 + r4); // lhz @ 0x806007D4
    /* rlwinm. r0, r0, 0x1b, 0x1d, 0x1f */ // 0x806007D8
    /* bnelr  */ // 0x806007DC
    /* li r0, 0x17 */ // 0x806007E0
    *(0 + r5) = r0; // stw @ 0x806007E4
    /* li r3, 1 */ // 0x806007E8
    return;
    /* lis r4, 0 */ // 0x806007F0
    r4 = *(0 + r4); // lwz @ 0x806007F4
    r0 = *(4 + r4); // lhz @ 0x806007F8
    r4 = r0 rlwinm 0x1b; // rlwinm
    r0 = r4 + -1; // 0x80600800
    if (>) goto 0x0x80600830;
    if (!=) goto 0x0x80600820;
    /* li r0, 0x18 */ // 0x80600814
    *(0 + r5) = r0; // stw @ 0x80600818
    return;
    /* li r0, 0x17 */ // 0x80600820
    *(0 + r5) = r0; // stw @ 0x80600824
    /* li r3, 1 */ // 0x80600828
    return;
    /* bnelr  */ // 0x80600834
    /* li r0, 0x18 */ // 0x80600838
    *(0 + r5) = r0; // stw @ 0x8060083C
    return;
}