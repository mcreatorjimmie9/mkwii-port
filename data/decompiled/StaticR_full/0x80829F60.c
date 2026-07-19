/* Function at 0x80829F60, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_80829F60(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x80829F60
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x80829F68
    r4 = r5 + 0xb0; // 0x80829F6C
    /* b 0x808161e8 */ // 0x80829F70
}