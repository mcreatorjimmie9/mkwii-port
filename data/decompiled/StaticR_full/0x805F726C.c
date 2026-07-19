/* Function at 0x805F726C, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_805F726C(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x805F726C
    /* li r5, 0 */ // 0x805F7270
    r0 = *(0 + r4); // lbz @ 0x805F7274
    if (==) goto 0x0x805f7290;
    r0 = *(0xf8 + r3); // lbz @ 0x805F7280
    if (==) goto 0x0x805f7290;
    /* li r5, 1 */ // 0x805F728C
    r3 = r5;
    return;
}