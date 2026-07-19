/* Function at 0x805F4D14, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_805F4D14(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x805F4D14
    r0 = *(0 + r4); // lwz @ 0x805F4D18
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805F4D1C
    /* bnelr  */ // 0x805F4D20
    /* lis r5, 0 */ // 0x805F4D24
    r4 = *(0 + r5); // lwzu @ 0x805F4D28
    /* li r0, 0 */ // 0x805F4D2C
    if (!=) goto 0x0x805f4d3c;
    *(0 + r5) = r0; // stw @ 0x805F4D38
    r4 = *(4 + r5); // lwz @ 0x805F4D3C
    /* bnelr  */ // 0x805F4D44
    *(4 + r5) = r0; // stw @ 0x805F4D48
    return;
}