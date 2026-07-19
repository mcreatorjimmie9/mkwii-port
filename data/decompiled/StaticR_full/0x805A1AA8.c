/* Function at 0x805A1AA8, size=76 bytes */
/* Stack frame: 32 bytes */
/* Calls: 2 function(s) */

void FUN_805A1AA8(int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lfs f1, 8(r6) */ // 0x805A1AB0
    *(0x24 + r1) = r0; // stw @ 0x805A1AB4
    /* lfs f0, 0(r6) */ // 0x805A1AB8
    /* lfs f3, 8(r5) */ // 0x805A1ABC
    /* lfs f2, 0(r5) */ // 0x805A1AC0
    /* stfs f0, 0x10(r1) */ // 0x805A1AC4
    /* stfs f1, 0x14(r1) */ // 0x805A1AC8
    /* stfs f2, 8(r1) */ // 0x805A1ACC
    /* stfs f3, 0xc(r1) */ // 0x805A1AD0
    FUN_805A5850(); // bl 0x805A5850
    FUN_805A1AF4(r4, r5); // bl 0x805A1AF4
    r0 = *(0x24 + r1); // lwz @ 0x805A1AE4
    return;
}