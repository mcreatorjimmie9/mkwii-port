/* Function at 0x807D9FD0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807D9FD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    /* lis r3, 0 */ // 0x807D9FDC
    *(0x14 + r1) = r0; // stw @ 0x807D9FE0
    r3 = *(0 + r3); // lwz @ 0x807D9FE4
    r4 = *(8 + r4); // lbz @ 0x807D9FE8
    FUN_805A47A8(r4, r3); // bl 0x805A47A8
    r4 = *(4 + r3); // lwz @ 0x807D9FF0
    /* lis r3, 0 */ // 0x807D9FF4
    /* lfs f0, 0(r3) */ // 0x807D9FF8
    /* lfs f1, 0xc(r4) */ // 0x807D9FFC
    r0 = *(0x14 + r1); // lwz @ 0x807DA000
    /* fmuls f1, f0, f1 */ // 0x807DA004
    return;
}