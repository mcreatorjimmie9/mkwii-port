/* Function at 0x807AD778, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_807AD778(int r3, int r4, int r5)
{
    if (>=) goto 0x0x807ad788;
    r4 = r4 + 0x80; // 0x807AD780
    /* b 0x807ad794 */ // 0x807AD784
    if (<) goto 0x0x807ad794;
    r4 = r4 + -0x80; // 0x807AD790
    /* mulli r0, r4, 0xc */ // 0x807AD794
    r4 = *(0x24 + r3); // lwz @ 0x807AD798
    /* slwi r3, r5, 2 */ // 0x807AD79C
    r0 = r4 + r0; // 0x807AD7A0
    r3 = r3 + r0; // 0x807AD7A4
    return;
}