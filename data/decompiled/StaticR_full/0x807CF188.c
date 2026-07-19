/* Function at 0x807CF188, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_807CF188(int r3, int r4)
{
    r4 = r3 + 8; // 0x807CF188
    /* li r0, 0 */ // 0x807CF18C
    *(0 + r3) = r4; // stw @ 0x807CF190
    *(4 + r3) = r0; // stw @ 0x807CF194
    /* li r3, 1 */ // 0x807CF198
    return;
}