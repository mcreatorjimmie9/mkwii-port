/* Function at 0x808ABA6C, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_808ABA6C(int r3, int r4)
{
    r4 = *(0 + r3); // lwz @ 0x808ABA6C
    /* li r3, 0 */ // 0x808ABA70
    r4 = *(4 + r4); // lwz @ 0x808ABA74
    r0 = *(8 + r4); // lwz @ 0x808ABA78
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x808ABA7C
    if (==) goto 0x0x808aba8c;
    /* li r3, 1 */ // 0x808ABA84
    return;
    r4 = *(0xc + r4); // lwz @ 0x808ABA8C
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x808ABA90
    if (==) goto 0x0x808abaa0;
    /* li r3, 2 */ // 0x808ABA98
    return;
    /* rlwinm. r0, r4, 0, 4, 4 */ // 0x808ABAA0
    /* beqlr  */ // 0x808ABAA4
    /* li r3, 3 */ // 0x808ABAA8
    return;
}