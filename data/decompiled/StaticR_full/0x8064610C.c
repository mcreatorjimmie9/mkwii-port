/* Function at 0x8064610C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8064610C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80646114
    *(0x14 + r1) = r0; // stw @ 0x80646118
    r3 = *(0 + r3); // lwz @ 0x8064611C
    FUN_805A4968(r3); // bl 0x805A4968
    r4 = *(0 + r3); // lwz @ 0x80646124
    /* lis r3, 0 */ // 0x80646128
    /* lfs f1, 0(r3) */ // 0x8064612C
    /* lfs f0, 0xc(r4) */ // 0x80646130
    r0 = *(0x14 + r1); // lwz @ 0x80646134
    /* fmuls f1, f0, f1 */ // 0x80646138
    return;
}