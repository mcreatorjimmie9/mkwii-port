/* Function at 0x807AD4D0, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_807AD4D0(int r4, int r5, int r6, int r7)
{
    if (>=) goto 0x0x807ad4e0;
    r5 = r5 + 0x80; // 0x807AD4D8
    /* b 0x807ad4ec */ // 0x807AD4DC
    if (<) goto 0x0x807ad4ec;
    r5 = r5 + -0x80; // 0x807AD4E8
    /* subf. r7, r6, r5 */ // 0x807AD4EC
    if (>=) goto 0x0x807ad4f8;
    r7 = r7 + 0x80; // 0x807AD4F4
    /* mulli r5, r5, 0xc */ // 0x807AD4F8
    r6 = *(0x24 + r4); // lwz @ 0x807AD4FC
    /* mulli r0, r7, 0xc */ // 0x807AD500
    r4 = r6 + r5; // 0x807AD504
    r5 = r6 + r0; // 0x807AD508
    /* b 0x805a4498 */ // 0x807AD50C
}