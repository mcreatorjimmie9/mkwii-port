/* Function at 0x8073A0E4, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_8073A0E4(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8073A0E4
    r4 = *(0 + r4); // lwz @ 0x8073A0E8
    r0 = *(0x10 + r4); // lbz @ 0x8073A0EC
    /* bnelr  */ // 0x8073A0F4
    r0 = *(4 + r3); // lbz @ 0x8073A0F8
    /* bnelr  */ // 0x8073A100
    r0 = *(0x96 + r3); // lbz @ 0x8073A104
    if (==) goto 0x0x8073a114;
    return;
    /* li r0, 0 */ // 0x8073A114
    *(0x54 + r3) = r0; // stw @ 0x8073A118
    return;
}