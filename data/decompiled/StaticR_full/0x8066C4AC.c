/* Function at 0x8066C4AC, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_8066C4AC(int r3, int r4, int r5)
{
    if (<) goto 0x0x8066c4c4;
    r5 = *(4 + r3); // lwz @ 0x8066C4B4
    r0 = *(0 + r5); // lhz @ 0x8066C4B8
    if (<) goto 0x0x8066c4cc;
    /* li r3, 0 */ // 0x8066C4C4
    return;
    /* slwi r0, r4, 3 */ // 0x8066C4CC
    r4 = *(8 + r3); // lwz @ 0x8066C4D0
    r3 = r5 + r0; // 0x8066C4D4
    r0 = *(8 + r3); // lwz @ 0x8066C4D8
    r0 = r0 rlwinm 0; // rlwinm
    r3 = r4 + r0; // 0x8066C4E0
    return;
}