/* Function at 0x808DF104, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_808DF104(int r4)
{
    /* lis r4, 0 */ // 0x808DF104
    /* li r0, 0 */ // 0x808DF108
    r4 = r4 + 0; // 0x808DF10C
    *(0 + r3) = r4; // stw @ 0x808DF110
    *(4 + r3) = r0; // stw @ 0x808DF114
    return;
}