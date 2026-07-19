/* Function at 0x8065FA90, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8065FA90(int r4)
{
    /* lis r4, 0 */ // 0x8065FA90
    r4 = *(0 + r4); // lwz @ 0x8065FA94
    r4 = *(0x98 + r4); // lwz @ 0x8065FA98
    r4 = *(0x3c4 + r4); // lwz @ 0x8065FA9C
    r0 = r4 + -0x25; // 0x8065FAA0
    if (>) goto 0x0x8065fab8;
    /* li r0, 0xc */ // 0x8065FAAC
    *(0x9c + r3) = r0; // stw @ 0x8065FAB0
    return;
    /* li r0, 6 */ // 0x8065FAB8
    *(0x9c + r3) = r0; // stw @ 0x8065FABC
    return;
}