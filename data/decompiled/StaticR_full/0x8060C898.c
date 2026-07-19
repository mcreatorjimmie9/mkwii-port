/* Function at 0x8060C898, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8060C898(int r3, int r4)
{
    r4 = *(0 + r3); // lwz @ 0x8060C898
    r4 = *(4 + r4); // lwz @ 0x8060C89C
    r0 = *(0xc + r4); // lwz @ 0x8060C8A0
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x8060C8A4
    if (==) goto 0x0x8060c8c0;
    /* lis r4, 0 */ // 0x8060C8AC
    r3 = *(0x18e + r3); // lha @ 0x8060C8B0
    r0 = *(0 + r4); // lha @ 0x8060C8B4
    /* subf r0, r3, r0 */ // 0x8060C8B8
    /* b 0x8060c8c4 */ // 0x8060C8BC
    /* li r0, -1 */ // 0x8060C8C0
    /* extsh r3, r0 */ // 0x8060C8C4
    return;
}