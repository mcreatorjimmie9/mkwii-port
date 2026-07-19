/* Function at 0x80679484, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_80679484(int r3, int r4)
{
    *(0x1cf8 + r3) = r4; // stw @ 0x80679488
    if (==) goto 0x0x8067949c;
    if (==) goto 0x0x806794b0;
    return;
    /* lis r3, 0 */ // 0x8067949C
    /* li r0, 8 */ // 0x806794A0
    r3 = *(0 + r3); // lwz @ 0x806794A4
    *(0x1760 + r3) = r0; // stw @ 0x806794A8
    return;
    /* lis r3, 0 */ // 0x806794B0
    /* li r0, 9 */ // 0x806794B4
    r3 = *(0 + r3); // lwz @ 0x806794B8
    *(0x1760 + r3) = r0; // stw @ 0x806794BC
    return;
}